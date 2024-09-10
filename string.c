#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int i;
char A[100];
char B[100];


int strlength(char A[]){
    int i, n;
    n=0;
    for(i=0; A[i] != '\0'; i++){
        n++;
    }
    return n;
}


void strcon(char A[], char B[]){
    char C[strlength(A) + strlength(B)];
    for(i=0; i<strlength(A); i++){
        C[i] = A[i];
    }
    C[i] = ' ';
    for(i=0; i<strlength(B); i++){
        C[strlength(A)+i+1] = B[i];
    }

    C[strlength(A) + strlength(B)+ 1 ] = '\0';

    printf("%s\n", C);
}

int strcom(char A[], char B[]){
    for(i=0; i<strlength(A); i++){
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
    for(i=strlength(A); i>=0; i--){
        B[i] = A[strlength(A) - 1 - i];
    }
    B[strlength(A)]='\0';
    printf("%s\n", B);
}

void strmaj(char A[]){
    for(i=0; i<strlength(A); i++){
        if(A[i]>= 'a' && A[i]<= 'z'){
            A[i] = A[i] - 'a' + 'A';
        }
    }
    printf("%s\n", A);
}
void strmin(char A[]){
    for(i=0; i<strlength(A); i++){
        if(A[i]>= 'A' && A[i]<= 'Z'){
            A[i] = A[i] - 'A' + 'a';
        }
    }
    printf("%s\n", A);
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
    printf("Nice to meet you ");
    strcon(str1, str2);

//challenge 4
    printf("the result of comparing %s with %s is: ", str1, str2);
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
    printf("Enter a character from %s: ", str1);
    scanf(" %c", &ch);
    for(i=0; i<strlength(str1); i++){
        if(str1[i] == ch){
            x++;
        }
    }
    printf("the character %c appeared %d times in %s\n", ch, x, str1);

//challenge 7
    printf("%s in MAJ is: ", str1);
    strmaj(str1);

//challenge 8
    printf("%s in MIN is: ", str2);
    strmin(str2);

//challenge 9
    char fullname[50];
    int n;
    n = strlength(fullname);
    printf("Enter your favorite charachter (ex: Thomas Shelby)\n");
    scanf(" %[^\n]", &fullname);
    for(i=0; i<strlength(fullname); i++){
        if(fullname[i] == ' '){
            for(int j=i; j<strlength(fullname); j++){
                fullname[j] = fullname[j+1];
            }
            n--;
        }
    }
    printf("The name with no space: %s\n", fullname);

//challenge 10
    char pstr[50];
    char sstr[50];
    int s=0;
    printf("Enter your favorite day (ex: Wednesday, Sunday, ...)\n");
    scanf(" %[^\n]", &pstr);
    printf("Enter a sous-string:\n");
    scanf(" %[^\n]", &sstr);
    if(strstr(pstr, sstr)){
        printf("the sous-string %s existe in %s\n", sstr, pstr);
    }
    else
        printf("the sous-string %s doesn't existe in %s\n", sstr, pstr);

    return 0;
}
