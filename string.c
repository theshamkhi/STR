#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int i;
char A[100];
char B[100];


int strlength(const char A[]){
    int n=0;
    while(A[n] != '\0'){
        n++;
    }
    return n;
}


void strcon(char A[], char B[]){
    char C[strlen(A) + strlen(B)];
    for(i=0; i<strlen(A); i++){
        C[i] = A[i];
    }
    C[i] = ' ';
    for(i=0; i<strlen(B); i++){
        C[strlen(A)+i+1] = B[i];
    }

    C[strlen(A) + strlen(B)+ 1 ] = '\0';

    printf("%s\n", C);
}

int strcom(char A[], char B[]){
    for(i=0; i<strlen(A); i++){
        if(A[i]>B[i]){
            return 1;
        }
        else if(A[i]== B[i]){
            return 0;
        }
        else if(A[i]<B[i]){
            return -1;
        }
    }
}
void strinvrs(char A[]){
    for(i=strlen(A); i>=0; i--){
        B[i] = A[strlen(A) - 1 - i];
    }
    B[strlen(A)]='\0';
    printf("%s\n", B);
}



int main(){

//challenge 1
    char str[100];
    char str1[100];
    char str2[100];
    printf("Write something...\n");
    scanf(" %[^\n]", str);
    printf("You just wrote: %s\n", str);
//challenge 2
    printf("The lenght of %s is: %d\n", str, strlength(str));
//challenge 3
    printf("What's your first name?\n");
    scanf(" %[^\n]", str1);
    printf("What's your last name?\n");
    scanf(" %[^\n]", str2);
    strcon(str1, str2);
//challenge 4
    if(strcom(str1, str2)==1){
        printf("%s > %s\n", str1, str2);
    }
    else if(strcom(str1, str2)==0){
        printf("%s = %s\n", str1, str2);
    }
    else if(strcom(str1, str2)==-1){
        printf("%s < %s\n", str1, str2);
    }
//challenge 5
    printf("The inverse of %s is: ", str1);
    strinvrs(str1);
//challenge 6
    int x=0;
    char ch;
    printf("Enter a character: ");
    scanf(" %c", &ch);
    for(i=0; i<strlen(str); i++){
        if(str[i] == ch){
            x++;
        }
    }
    printf("%c appeared %d times in %s", ch, x, str);


    return 0;
}