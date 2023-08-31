#include <stdio.h>
#include <stdlib.h>
int main(){
    FILE *in, *out;
    char ch;
    in =fopen("out.txt","r");
    if (in == NULL){
        puts("File read error");
        exit(1);
    }

    out = fopen("ccr.txt","w");
    if (out == NULL){
        puts("File read error");
        exit(1);
    }

    while (ch != EOF){
        ch = fgetc(in);
        fputc(ch+9, out);
    } 

return 0;
}