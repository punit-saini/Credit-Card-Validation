#include <stdio.h>
#include <stdlib.h>

int main()
{
    int cre_num[16],i; // To store credit card number and i is for running loop
    printf("Enter credit card number\n");
    for (i=0;i<=15;i++)
    {
        scanf("%d",&cre_num[i]);
    }
    int mul[16]; // For storing the value obtain after (multipling alternate number by 2)
    for (i=0;i<=15;i++)
    mul[i]=cre_num[i]; // Firstly copying the exact number to multiple so that number which are not multiplied by 2 remains in both the arrays
    for (i=0;i<=15;i++)
    {
        if(i%2==0 ) {
        mul[i]=cre_num[i]*2; // Multiplying every alternate number by 2
        if(mul[i]>=10)
            mul[i]=mul[i]-9; // If after multiplication any number is larger than 10 then subtracting it by 9
       printf(" %d   ",mul[i]);
        }
    }
    int sum=0;
   for (i=0;i<=15;i++)
   {
       printf("\n\n  %d",mul[i]);
       sum=sum+mul[i]; // adding the content of array "mul"

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
