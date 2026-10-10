#include<stdio.h>
int main(){
int arr[2][3]= {{12,23,2}, {5,10,6}}; 
printf("Values of array: ");
for(int i=0; i<2; i++){
for(int j=0; j<3; j++){
printf("%d",arr[i][j]);
}
printf("\n");
}
printf("\n");
return 0;
}
