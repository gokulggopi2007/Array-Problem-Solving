#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int sum=0,sum1=0;
    for(int i=0;i<n;i++){
        if(arr[i]%2!=0){
            sum+=arr[i];
        }
        else{
            sum1+=arr[i];
        }
    }
    printf("even sum = %d\nodd sum = %d",sum1,sum);
    return 0;
}