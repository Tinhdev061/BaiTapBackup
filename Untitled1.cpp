#include <stdio.h>

int check_odd_even_bit(int n){
    //flag = 1 => s? l? 
    //flag = 0 => s? ch?n

    int flag = 0;
    if( n & 1 == 1 ) flag= 1;
    return flag;
}
int main(void){
    int n;
 
    printf("Nhap so nguyen= ");
    scanf("%d",&n);
a
    int check = check_odd_even_bit(n);
 
    if( check == 0 ) printf("%d la so chan\n", n);
    else printf("%d la so le\n", n);
    return 0;
}

