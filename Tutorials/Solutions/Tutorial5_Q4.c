#include <stdio.h>

void stringReverse(char chenWheyStr[20]);
int main(){
    char str[20];
    printf("Enter a string: ");
    scanf("%s",&str);

    stringReverse(str);

    return 0;
}

void stringReverse(char chenWheyStr[20]){
    int count = 0;
    int n;

    while(chenWheyStr[count]!='\0'){
        count = count + 1;
    }

    for(n=count-1;n>0;n--){
        printf("%c",chenWheyStr[n]);
    }
}