// BITWISE & always check the LSB 
// Here we check if the last bit is zero then the number is even 
// If the LSB is 1 then the number is odd
// by the rule of       8  4  2  1
// if we enter 12    &  1  1  0  0
                        0  0  0  0 // her the lsb is zero therefore the number is even.
// all the odd number lsb is 1  (imp)
#include <stdio.h>

void even_odd(int n){
    if(n & 1){
        printf("ODD");
    }else{
        printf("EVEN");
    }
}

int main()
{
    int n;
    printf("Enter the value of n");
    scanf("%d",&n);
    
    even_odd(n);

    return 0;
}
