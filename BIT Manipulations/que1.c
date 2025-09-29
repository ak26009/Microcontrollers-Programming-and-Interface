#include <stdio.h>

// Decimal To Binary 
void binary(int n){
    int arr[20];
    if(n == 0){
        printf("Enter a valid number");
    }
    int i = 0;
    while(n!=0){
        arr[i] = n%2;
        n = n/2;
        i++;
    }
    
    for(int j=i-1; j>=0 ; j--){
        printf("%d",arr[j]);
    }
}

int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    
    binary(n);

    return 0;
}
