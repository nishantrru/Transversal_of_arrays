/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],size,i;//definfing variables
    
    printf("enter the size:");//definfing size
    scanf("%d",&size);
    
    if(size>10){
        printf("overflow");//checking for overflow conditions
    }
    else{
    
    printf("enter the elements:\n");//user-input values
    for(i=0;i<size;i++)
    {
        scanf("%d",&a[i]);//taking inputs
        printf("%d",a[i]);//printing the arrays
    
    }
    
    }
}
