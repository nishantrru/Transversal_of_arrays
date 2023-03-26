/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a[10],size,i,k,item;//definfing variables
    
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
    
    }
     printf("enter the data you want to insert:");
    scanf("%d",&item);   
    
    for(i=size-1;i>=0;i--)
    {
        a[i+1]=a[i];
    }

    
    
    a[0]=item;
    size++;

printf("the elements are:");//getting the output
for(i=0;i<size;i++)
{
    printf("%d",a[i]);
    
}
    
    }
}
