#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n+1];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int pos,element;
    scanf("%d%d",&pos,&element);
    if(pos>n+1){
        printf("-1");
        return 0;
    }
    for(int i=n;i>=pos;i--){
        arr[i]=arr[i-1];
    }
    arr[pos-1]=element;
    n++;
    for(int i=0;i<n;i++){
        printf("%d ",arr[i]);
    }
    return 0;
}