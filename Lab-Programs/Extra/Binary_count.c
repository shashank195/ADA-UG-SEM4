#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

int decToBinary(int n)
{
    int binaryNum[32];
    int count=0;
    int size=0;
    int i = 0;
    int j;
    while (n > 0) {

        binaryNum[i] = n % 2;
        n = n / 2;
        i++;
        ++size;
    }

    for(i=0;i<size;i++)
       {
          if(binaryNum[i]==1)
            ++count;
       }
    if(count%2==0)
      return 1;
    else return 2;
}

int main()
{
  int A[5]={2,3,8,1,7};
  int sum=0,i;
  int temp;
  printf("The Sum of the Intigers who have even number of One's in there binary sequence:");
  for(i=0;i<5;i++)
     {
       temp = decToBinary(A[i]);
       if(temp==1)
         sum=sum+A[i];
       else continue;
     }
  printf("%d",sum);
}
