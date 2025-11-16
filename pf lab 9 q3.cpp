#include <stdio.h>

int isVowel(char c) {
    return c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||
           c=='A'||c=='E'||c=='I'||c=='O'||c=='U';
}

void replaceVowels(char arr[3][5], int rows, int cols) {
    for(int i=0;i<rows;i++) {
        for(int j=0;j<cols;j++) {
            char *p = &arr[i][j];
            if(isVowel(*p)) *p = '*';
        }
    }
}

int main() {
    char arr[3][5] = { {'H','e','l','l','o'},
                        {'W','o','r','l','d'},
                        {'C','P','r','o','g'} };
    replaceVowels(arr,3,5);

    for(int i=0;i<3;i++){
        for(int j=0;j<5;j++) printf("%c ", arr[i][j]);
        printf("\n");
    }
    return 0;
}

