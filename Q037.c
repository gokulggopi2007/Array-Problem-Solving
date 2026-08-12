#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int m;
    scanf("%d",&m);
    int str[m];
    for(int i=0;i<m;i++){
        scanf("%d",&str[i]);
    }
    int num=n+m;
    int arr1[num];
    for(int i=0;i<n;i++){
        arr1[i]=arr[i];
    }
    for(int i=0;i<m;i++){
        arr1[n+i]=str[i];
    }
    for(int i=0;i<num;i++){
        for(int j=0;j<num-1-i;j++){
            if(arr1[j]>arr1[j+1]){
                int temp=arr1[j];
                arr1[j]=arr1[j+1];
                arr1[j+1]=temp;
            }
        }
    }
    int ans;
    if(num%2==0){
        ans=(arr1[num/2]+arr1[num/2-1])/2;
    } else {
        ans=arr1[num/2];
    }
    printf("%d",ans);
    return 0;
}