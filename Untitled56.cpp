#include <stdio.h>
#include <stdlib.h>
int main(){
	char s[20];
	char a;
	int i,j;
	printf("enter a string");
	scanf("%s",s);
	fflush(stdin);
	printf("enter the character to be searched");
	scanf("%c",&a);
	fflush(stdin);
	j=0;
	for(i=0;s[i]!=0;i++){
		if(s[i]==a){
		      j=i;
		break;
			
		}
	}
		printf("occurance at index=%d",j);
	
}
