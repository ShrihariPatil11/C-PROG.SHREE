#include<stdio.h>
int main (){
int arr[7]= {12,23,2,5,10,69,18};
int sum=0;
for(int i=0; i<7; i++){
sum=sum+arr[i];
}
printf("Sum= %d\n",sum);
return 0;
}
