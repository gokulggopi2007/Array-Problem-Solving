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
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        int sum=0;
        while(arr[i]!=0){
            int last=arr[i]%10;
            sum+=last;
            arr[i]/=10;
        }
        if(sum<min){
            min=sum;
        }
    }
    printf("%d",min);
    return 0;
}