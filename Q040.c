#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int arr[n];
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
    for(int i=0;i<n/2;i++){
        if(arr[i]!=arr[n-1-i]){
            printf("Not palindrome");
            return 0;
        }
    }
    printf("Palindrome");
    return 0;
}