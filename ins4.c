#include<stdio.h>
#define MAX 25
int min(int x,int y)
{
 return(x<y)?x:y;
}
int main()
{ 
 int drop=0,a,size,oprt,nsec,count,i=0,inp[MAX];
 printf("enter the bucket size:\n");
 scanf("%d",&size);
 printf("enter the operation rate\n");
 scanf("%d",&oprt);
 printf("enter the simulation rate second:\n");
 scanf("%d",&nsec);
 for(i=0;i<nsec;i++)
 {
  printf("enter the packet entering at %d second \t",1+1);
  scanf("%d",&inp[i]);
 }
 printf("(second):(packet recieved):(packet sent):(packet left):(packet dropped)\n");
 count=0;
 for(i=0;i<nsec;i++)
 {
  count+=inp[i];
  if(count>size)
  {include<stdio.h>
#include<stdlib.h>
#include<string.h>

void decrypt(char arr[])
{
      int i;
      for(i = 0; i < strlen(arr); i++)
      {
            arr[i] = arr[i] + 10;
      }
}

void encrypt(char arr[])
{
      int i;
      for(i = 0; i < strlen(arr); i++)
      {
            arr[i] = arr[i] - 10;
      }
}

int main()
{
      char password[40];	
      int ch;
      printf("Enter a Password:\t");
      scanf("%s", password);
      printf("\nPassword:\t%s\n",password);
      encrypt(password);
      printf("\nEncrypted Password:\t%s\n", password);
      decrypt(password);
      printf("\nDecrypted Password:\t%s\n", password);
      return 0;
}
   drop=count-size;
   count=size;
  }
  printf("%d",i+1);
  printf("\t\t%d",inp[i]);
  a=min(count,oprt);
  printf("\t\t%d",a);
  count=count-a;
  printf("\t\t%d",count);
  printf("\t\t%d\n",drop);
  drop=0;
 }
 for(i=0;count!=0;i++)
 {
  if(count>size)
  {
   drop=count-size;
   count=size;
  }
  printf("%d",i+1);
  printf("\t\t0");
  a=min(count,oprt);
  printf("\t\t%d",a);
  count=count-a;
  printf("\t\t%d",count);
  printf("\t\t%d\n",drop);
 }
}
