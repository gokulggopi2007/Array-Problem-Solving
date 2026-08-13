#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int j=0,count=0;
    for(int i=0;i<n;i++){
        if(count==0){
            j=arr[i];
        }
        if(j==arr[i]){
            count++;
        }
        else{
            count--;
        }
    }
    printf("%d",j);
    return 0;
}