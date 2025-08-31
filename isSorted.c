#include<stdio.h>

issorted( int a[],int n){
    for (int  i = 0; i < n; i++)
    {
        if (a[i]>a[i+1])
        {
            return 1;
        }
        return 0;

        
    }
    
}
int main(){int result;
    int A[]={1,2,3,4,5,7};
    result =(A,6);
    if (result==1)
    {
      printf("false");
    }
    else{
        printf("true");
    }
    
    return 0;
}