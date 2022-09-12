#include<stdio.h>
#include<stdlib.h>
//#include<string.h>
/*
int long_de_chaine(char text[]){
	int longueur=0;
	while(text[longueur] != '\0'){
		longueur++;
	}
	return longueur;
}
int main(){
	char text[30];
	printf("entrer votre nom:");
	scanf("%s",text);
	printf("votre nom compte %d caractéres:",long_de_chaine(text));
}*/

int long_de_chaine(char *text){
	int longueur=0;
	while(*text != '\0'){
		longueur++;
		text ++;
	}
	//longueur = strlen(text);
	return longueur;
}
int main(){
	char *text;
	text=malloc(30);
	printf("entrer votre nom:");
	gets(text);
	printf("votre nom compte %d caractéres:",long_de_chaine(text));
}
