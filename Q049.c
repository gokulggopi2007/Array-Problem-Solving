#include<stdio.h>
#include<limits.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int first=INT_MAX,sec=INT_MAX;
    for(int i=0;i<n;i++){
        if(arr[i]<first){
            sec=first;
            first=arr[i];
        }
        else if(arr[i]<sec){
            sec=arr[i];
        }
    }
    printf("%d %d",first,sec);
    return 0;
}