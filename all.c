#include <stdio.h>

void traverse(int*a,int n){
    for (int i=0; i<n; i++)
    {
        printf("%d",a[i]);
        
    }
}


void insert(int*a,int pos, int val,int n){
    for(int i=n; i>pos-1;i--)
    {
        a[i]=a[i-1];
    }
    a[pos]=val;
    printf("\n after addition\n");
    traverse(a,n);
}

int main(){
    int a[10]={
        1,
        2,
        3,
        4,
        5,
        6
    };
    int n=sizeof(a)/sizeof(a[0]);
    int pos=5;
    int val=4;
    printf("oringinal array\n");
    traverse(a,n);
    insert(a,pos,val,n);
}










