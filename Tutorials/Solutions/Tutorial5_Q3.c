#include <stdio.h>
int Minimum(int X[12]);
int main(){
    int arr1[]={23,34,65,78,56,75,98,36,12,68,78,98};
    int min;

    min=Minimum(arr1);

    printf("The minimum value is %d",min);

    return 0;
}

int Minimum(int X[12]){
    int L,count;
    L=X[0];
    for(count=1;count<12;count++){
        if(L>X[count]){
            L=X[count];
        }
    }

    return L;
}