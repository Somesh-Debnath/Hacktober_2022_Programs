import java.util.*;
public class prime
{
public static void main(String Args[])
{
int flag=-1;
Scanner sc = new Scanner(System.in);
System.out.print("Enter the number:");
int n=sc.nextInt();
for(int i=2;i<=Math.sqrt(n);i++)
{
if(n%i==0)
{
flag=1;
break;
}
}
if(flag>0)

System.out.print("\nThe number is not prime");
else
System.out.print("\nThe number is prime");
}
}