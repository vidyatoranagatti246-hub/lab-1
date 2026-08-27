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

void deletion (int*a,int pos, int n){
    a[pos]=0;
    for(int i=pos ; i<n; i++)
    {
        a[i]=a[i+1];
    }
    printf("\n after deletion\n");
    traverse(a,n);
}

void search(int*a,int search_num,int n){

    for (int i=0; i<n;i++){
        if(a[i]==search_num){
            
            printf("the position of number is %d ",i+1);
            break;
        }
    }
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
    int search_num=2;
    
    printf("oringinal array\n");
    traverse(a,n);
    insert(a,pos,val,n);
    deletion(a,pos,n);
    search(a,search_num,n);
}










