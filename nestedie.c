#include<stdio.h>
int main()
{
int marks;
printf("Enter Marks: \n");
scanf("%d", &marks);
if(marks >=91){
if(marks <=100){
printf("A Grade \n");
}
else{
printf("Enter valid Marks between 0-100 \n");
}
}
else if(marks>=71){
if(marks<=90){
printf("B Grade \n");
}
}
else if(marks>=51){
if(marks<=70){
printf("C Grade \n");
}
}
else if(marks <0){
printf("Enter valid Marks between 0-100 \n");
}
else{
printf("Fail\n");
}
return 0;
}
