#include <stdio.h>
int main()
{int NumberOfpens=14;
  NumberOfpens=12;
  printf("%d",NumberOfpens); /*changing value of avariable*/
int result=NumberOfpens/5;   //divdinin 12 by 5
int result2=NumberOfpens%5;  //obtaining the remainder after deviding number of pen by 5
printf("\n%d",result);       //two solution are printed
printf("\n%d",result2);


int i;

printf("\nenter digit : ");   //printf comes first followed by scanf
scanf("%d",&i);
if(i==2){printf("correct");} //after recieving input from the user we set up decisions
else if (i>2)
{
  printf("incorrect");
}

else {printf("not applicable");}

int j;
int sum=0;
for(j=1;j<=10;j++){sum=sum+j;
}
printf("\n%d",sum);

int k;
printf("\nEnter digit :");
scanf("%d",&k);
while (k<6)
{
printf(" %d ",k);
k++;
}




return 0;
}