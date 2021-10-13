// Banker's Algorithm
#include <stdio.h>

void isSafe(int alloc[][4], int max[][4], int avail[], int need[][4], int proc, int res)
{
    int i, j, k;
    int f[proc], ans[proc], ind = 0;

    for (k = 0; k < proc; k++)
    {
        f[k] = 0;
    }

    int y = 0;

    for (k = 0; k < 5; k++)
    {
        for (i = 0; i < proc; i++)
        {
            if (f[i] == 0)
            {

                int flag = 0;
                for (j = 0; j < res; j++)
                {
                    if (need[i][j] > avail[j])
                    {
                        flag = 1;
                        break;
                    }
                }

                if (flag == 0)
                {
                    ans[ind++] = i;
                    for (y = 0; y < res; y++)
                        avail[y] += alloc[i][y];
                    f[i] = 1;
                }
            }
        }
    }

    printf("\nFollowing is the SAFE Sequence\n");
    for (i = 0; i < proc - 1; i++)
        printf(" P%d ->", ans[i]);
    printf(" P%d", ans[proc - 1]);
    
    printf("\nWork\n");
	for(i=0;i<res;i++)
	{
		printf("%d ",avail[i]);
	}
}

void display(int alloc[][4], int max[][4], int avail[], int need[][4], int proc, int res)
{
    int i, j;
    printf("\nAllocation Matrix\n");
    for (i = 0; i < proc; i++)
    {
        for (j = 0; j < res; j++)
        {
            printf("%d ", alloc[i][j]);
        }
        printf("\n");
    }

    printf("Max Matrix\n");
    for (i = 0; i < proc; i++)
    {
        for (j = 0; j < res; j++)
        {
            printf("%d ", max[i][j]);
        }
        printf("\n");
    }

    printf("Max Matrix\n");
    for (i = 0; i < proc; i++)
    {
        for (j = 0; j < res; j++)
        {
            printf("%d ", max[i][j]);
        }
        printf("\n");
    }

    printf("Available Resources\n");
    for (int i = 0; i < res; i++)
    {
        printf("%d ", avail[i]);
    }
    printf("\n");
}

int main()
{

    int proc, res, i, j, k;

    printf("Enter number of processes\n");
    scanf("%d", &proc);
    printf("Enter number of resources\n");
    scanf("%d", &res);

    printf("Enter Allocation Matrix\n");
    int alloc[proc][res];
    for (i = 0; i < proc; i++)
    {
        for (j = 0; j < res; j++)
        {
            scanf("%d", &alloc[i][j]);
        }
    }

    printf("Enter Need Matrix\n");
    int need[proc][res];
    for (i = 0; i < proc; i++)
    {
        for (j = 0; j < res; j++)
        {
            scanf("%d", &need[i][j]);
        }
    }

    printf("Enter Avilable resources\n");
    int avail[res];
    int temp_avail[res];
    for (i = 0; i < res; i++)
    {
        scanf("%d", &avail[i]);
        temp_avail[i] = avail[i];
    }

    int max[proc][res];
    for (i = 0; i < proc; i++)
    {
        for (j = 0; j < res; j++)
            need[i][j] = max[i][j] - alloc[i][j];
    }

    display(alloc, max, avail, need, proc, res);
    isSafe(alloc, max, avail, need, proc, res);

    int req[res];
    char ch;
    printf("\nDo you want to Request Resources y/n?");
    scanf(" %c", &ch);
    if (ch == 'y')
    {
        int x;
        printf("\nEnter process number for which you want to request");
        scanf("%d", &x);
        printf("\nEnter Resources\n");
        for (i = 0; i < res; i++)
        {
            scanf("%d", &req[i]);
            avail[i] = temp_avail[i];
        }

        int count = 0;
        for (i = 0; i < res; i++)
        {
            if (need[x - 1][i] >= req[i])
            {
                if (req[i] <= avail[i])
                {
                    count++;
                }
            }
        }

        if (count == res)
        {
            printf("\nYes it will be granted\n\nNew Data will Be:\n");
            for (i = 0; i < res; i++)
            {
                avail[i] = avail[i] - req[i];
                alloc[x - 1][i] = alloc[x - 1][i] + req[i];
                need[x - 1][i] = need[x - 1][i] - req[i];
            }
            display(alloc, max, avail, need, proc, res);
            isSafe(alloc, max, avail, need, proc, res);
        }
        else
        {
            printf("\nError! Request Cannot be granted");
        }
    }

    return (0);
}