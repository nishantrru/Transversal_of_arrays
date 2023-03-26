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
    
    printf("In which position you want to enter the element? ");//user-defined position
scanf("%d",&k);

for (i=size-1; i>=k-1; i--)//loop from size-1 to k-1
{
    a[i+1]=a[i];
}

printf("Which element do you want to insert? ");//user-value
scanf("%d", &item);

a[k-1]=item;//updating the k-1 value

size++;//size increases

printf("the elements are:");//getting the output
for(i=0;i<size;i++)
{
    printf("%d",a[i]);
    
}
    
    }
}
