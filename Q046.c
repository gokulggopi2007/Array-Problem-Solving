#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int co=0;
    for(int i=0;i<n;i++){
        int count=0,num=arr[i];
        while(num!=0){
            count++;
            num/=10;
        }
        if(count%2!=0){
            co++;
        }
    }
    printf("%d",co);
    return 0;
}