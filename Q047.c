#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int str[n];
    int sum=0;
    for(int i=0;i<n;i++){
        int max=0,min=9;
        int temp=arr[i];
        while(temp!=0){
            int last=temp%10;
            if(last>max){
                max=last;
            }
            if(last<min){
                min=last;
            }
            temp/=10;
        }
        str[i]=abs(max-min);
    }
    int num=0;
    for(int i=0;i<n;i++){
        if(str[i]>num){
            num=str[i];
        }
    }
    for(int i=0;i<n;i++){
        if(str[i]==num){
            sum+=arr[i];
        }
    }
    printf("%d",sum);
    return 0;
}