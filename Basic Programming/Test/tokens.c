#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {

    char *s, word[10][1024];
    s =(char*) malloc(1024 * sizeof(char));
    scanf("%[^\n]", s);
    s =(char*) realloc(s, strlen(s) + 1);
    //Write your logic to print the tokens of the sentence here.
    char* token = strtok(s, " ");
    int i=0, count=0;
    while (token) {
        strcpy(word[i], token);
        i++;
        count++;
        token = strtok(NULL," ");
    }
    for(int i=0; i< count; i++){
        printf("%s\n", word[i]);
    }
    return 0;
}