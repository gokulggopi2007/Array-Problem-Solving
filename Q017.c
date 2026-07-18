#include<stdio.h>
int main()
{
    int n,sum=0;
    scanf("%d",&n);
    int arr[n],j=1;
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n;i++){
        if(arr[i]!=j){
            printf("%d",j);
            return 0;
        }
        j++;
    }
    printf("%d",n+1);
    return 0;
}