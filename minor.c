# include <stdio.h>
void main()
{
   int age;
   age=4;
   printf("age: %d",age);


   int i;
   printf("\nenter age:",i);
   scanf("%d",&i);
   if(i==3){
    printf("correct");
   }
    else if (i>3){
        printf("abouve");
    }
     else{printf("below");}

   int NumberOfpens=16;
   int result=NumberOfpens/3;
   printf("\nresult:%d",result);
   int remainder=result%3;
   printf("\nremainder :%d",remainder);

  
   int a=4,s=5;                  /* using AND logical operation. if all conditions are true than the statement is printed*/
  if(a==4 && a!=2 && a<s){    //and would not if atleast one or more statement is false
    printf("\nTRUE");
 }
                       
   int j=5;                  //using OR logical operation.if all condition is false then the stament is not printed.
  if(j==5||j!=5||j<4){       //the statement will be printed if atleast one or more condision is true.
    printf("\ncorrect");
  }

 int k=4;
 if(!(k==3||k<3||k!=4)){
    printf("\ncompliment");
 }

//example of do while loop
int v=0;     //initialization of do while loop
do{                           
  printf("\nenter digit : "); //statement
  scanf("%d",&v);             //statement
  v++;                        //incriment statement
  printf("%d",v);             //print statement of out put. 
}
while(v>0);                  //condition of do while loop.

//example of while loop.(entry control loop)
int p;                           // initialization
printf("\nenter value of p; :");  //print statement5
scanf("%d",&p);                    //geting user input
while(p>=0){                         //the input must be cheked in terms of the conditioin before the statement is executed.
  printf(" %d ",p);
p--;
}
 
// edd number from one up to ten using for loop.
int sum=0;
for(int q=1;q<=10;q+=1){
  sum=sum+q;
                                                                                        
}
printf("\n%d",sum);

//edd even number from 0 up to ten using for loop
int tatal=0;
for(int u=2;u<=10;u+=2){
  tatal=tatal+u;

}
printf("\n%d",tatal);



}      