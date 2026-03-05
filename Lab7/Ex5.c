#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

char* stoupper(const char s[]) {
    int size = 0;
    for (int i = 0; s[i] != '\0'; i++) {
        size++;
    }

    char *new_s = (char *)malloc(sizeof(char) * (size+1));
    for (int i = 0; i < size; i++) {
        new_s[i] = toupper(s[i]);
    }
    new_s[size] = '\0';

    return new_s;
}

int main(){
	char s[100];
	char* result;
    scanf("%s",s);
	result = stoupper(s);

    if (result == s) 
        printf("ERROR.\n");
	printf("%s\n",result);
}