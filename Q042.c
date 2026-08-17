#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int compare(void const *a,void const *b){
    return *(int*)a-*(int*)b;
}
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    qsort(arr,n,sizeof(int),compare);
    int max=-9999;
    for(int i=0;i<n-1;i++){
        if(max<abs(arr[i]-arr[i+1])){
            max=abs(arr[i]-arr[i+1]);
        }
    }
    printf("%d",max);
    return 0;
}