#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    int fir=-1,sec=-1;
    for(int i=0;i<n;i++){
        if(arr[i]>fir){
            sec=fir;
            fir=arr[i];
        }
        else if(arr[i]>sec){
            sec=arr[i];
        }
    }
    printf("%d",(fir-1)*(sec-1));
    return 0;
}