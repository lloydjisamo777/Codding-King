# include <stdio.h>
void main(){

//using while loop along with a break statement.

    int age;
printf("Enter age : ");   //statement
scanf("%d",&age);         //storing input from the user(statement)

while(age<=22){            //condition is tested and if true the statement is executed
    printf(" %d ",age);   //after execution statement is printed 
    
    if(age==1){           //by pass the if statement if age entered is not equal to one
        break;
    }
    age--;                //incriment that update the user input value
}


 //using while loop with continue statement.

int day;
printf("\nenter day : ");
scanf("%d",&day);
while(day<=28){
    if(day==14){
      day++;
      printf("one month");
        continue;
    }
    
   printf(" %d ",day);
day++;

}

int tatal=0;
for(int number=1;number<=10;number++){

    if(number==2){
 continue;
}
tatal=tatal+number;
}
printf("\n%d",tatal);
}