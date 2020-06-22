#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int cre_num[16],i;
    printf("Enter credit card number\n");
    for (i=0;i<=15;i++)
    {
        scanf("%d",&cre_num[i]);
    }
    int mul[16];
    for (i=0;i<=15;i++)
    mul[i]=cre_num[i
    ];
    for (i=0;i<=15;i++)
    {
        if(i%2==0 ) {
        mul[i]=cre_num[i]*2;
         //printf(" %d   ",mul[i]);

        if(mul[i]>=10)
            mul[i]=mul[i]-9;
       printf(" %d   ",mul[i]);
        }
    }
    int sum=0;
   for (i=0;i<=15;i++)
   {
       printf("\n\n  %d",mul[i]);
       sum=sum+mul[i];

   }
   int suminto=sum*9;
   printf("\n\n%d",sum);
 if (suminto%10==0){
    printf("\n------------------------------------------");
    printf("\nThis is a valid card number");
    printf("\n------------------------------------------"); }
 else{
    printf("\n--------------------------------------------");
    printf("\nThis card number is not valid");
    printf("\n--------------------------------------------");
 }
    return 0;

}
