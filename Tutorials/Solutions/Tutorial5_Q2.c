#include <stdio.h>

int main(){
    int arr1[]={23,34,65,78,56,75,98,36,12,68};
    int arr2[]={67,65,11,14,15,12,55,58,59,60};
    int n1,n2;

    for(n1=0;n1<10;n1++){
        for(n2=0;n2<10;n2++){
            if(arr1[n1]==arr2[n2]){
                printf("%d",arr1[n1]);
            }
        }
    }

    return 0;
}