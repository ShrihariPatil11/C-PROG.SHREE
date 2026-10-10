#include<stdio.h>
int main (){
int arr[7]= {12,23,2,5,10,69,18};
printf("Array Values are: ");
for(int i=6; i>=0; i--){
printf("%d", arr[i]);
}
printf("\n");
return 0;
}
