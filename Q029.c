#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int k,m;
    scanf("%d %d",&k,&m);
    if(k>n || m>n){
        printf("-1");
    }
    for(int i=k;i<=m;i++){
       printf("%d ",arr[i]);
    }
    return 0;
}