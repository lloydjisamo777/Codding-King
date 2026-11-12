  # include<stdio.h>
  void main (){
int age;
double weight;

printf("int size = %zu",sizeof(age));
printf("\ndouble size =%zu",sizeof(weight));
 

//printing out element of array
int i;
int a[5];
printf("\nenter the element of array :");
for ( i = 0; i <5; i++)
{
    scanf("%d",&a[i]);
}

//printing thew size of an array
int j;
int b[]={2,3,4,5,6};
for ( j = 0; j <5; j++)
{
 printf(" %d ",b[j]);
}


  }
