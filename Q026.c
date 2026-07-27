#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int target;
    scanf("%d",&target);
    int pos=-1;
    for(int i=0;i<n;i++){
        if(arr[i]==target){
            pos=i;
            break;
        }
    }
    if(pos==-1){
        printf("-1");
        return 0;
    }
    for(int i=pos;i<n-1;i++){
        arr[i]=arr[i+1];
    }
    n--;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}