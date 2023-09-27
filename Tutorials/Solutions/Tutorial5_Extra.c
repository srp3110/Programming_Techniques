#include <stdio.h>

int main(){
    int arr[10],n;

    for(n=0;n<10;n++){
        printf("Enter value: ");
        scanf("%d",&arr[n]);
    }

    for(n=0;n<10;n++){
        if(arr[n]%2==0){
            printf("%d\t",arr[n]);
        }
    }
    return 0;
}