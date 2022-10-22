#include <string.h>
#include <stdio.h>
#include <stdlib.h>
#include <sys/types.h>
#include <sys/socket.h>
#include <netinet/in.h>
#include <netdb.h>
#include <arpa/inet.h>
#include <unistd.h>
#include <time.h>
#define MAX 65536

int main()
{
  char ip[20];
  printf("Enter IP address to scan: ");
  scanf("%s", ip);
  unsigned short portS, portE;
  printf("Enter Start port number: ");
  scanf("%hu", &portS);
  printf("Enter End port number: ");
  scanf("%hu", &portE);
  printf("Scanning ports %d - %d on %s\n", portS, portE, ip);
  FILE * file = fopen("/home/azure/Documents/portlogs.txt", "w");

  for (portS; portS <= portE; portS++)
  {
    int Connection = socket(AF_INET, SOCK_STREAM, 0);
    struct sockaddr_in temp = { 0 };

    temp.sin_addr.s_addr = inet_addr(ip);
    temp.sin_family = AF_INET;
    temp.sin_port = htons(portS);
    memset(&(temp.sin_zero), '\0', 8);

    int error = connect(Connection, (struct sockaddr*)&temp, sizeof temp);
    if (error != -1)
    {
      char host[128];
      char service[128];
      getnameinfo((struct sockaddr*)&temp, sizeof temp, host, (sizeof host), service, sizeof service, 0);
      printf("Port: %d, Service: %s, Open\n",portS,service);
      fprintf(file, "Port : %d, Service : %s, Open\n", portS, service);
    }
    close(Connection);
  }
  fclose(file);
  return 0;
}
