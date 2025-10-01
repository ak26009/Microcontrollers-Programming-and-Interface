// test and clear a bit
#include<stdio.h>

int main(){
    int num,n;
    
    printf("Enter the num ");
    scanf("%d",&num);
    
    printf("Enter the bit u want to test ");
    scanf("%d",&n);
    
    int mask = 1 << n;
    
    if(num & mask){
        printf("The %d bit is 1\n",n);
        num = num & ~mask;   
    }else{
        printf("The %d bit is already 0\n",n);
    }
    
    printf("The new number is %d ",num);
}
