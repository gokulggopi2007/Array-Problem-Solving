#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fir=arr[0],sec=-9999;
    for(int i=0;i<n;i++){
        if(fir<arr[i]){
            sec=fir;
            fir=arr[i];
        }
        else if(sec<arr[i]){
            sec=arr[i];
        }
    }
    printf("%d %d",fir,sec);
    return 0;
}