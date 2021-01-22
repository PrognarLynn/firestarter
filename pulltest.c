#include<stdio.h>

int main(){

char input [40];

printf("max 20 karakter beolvasás\n");

scanf("%39s",&input);

printf("visszahányás: %s\n",input);

return 0;
}
