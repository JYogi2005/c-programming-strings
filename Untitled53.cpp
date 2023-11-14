#include <stdio.h>
int main(){
	char s[20];
	char p[10];
	int i,j;
	printf("enter string 1");
	scanf("%s",s);
	printf("enter string 2");
	scanf("%s",p);
	j=0;
	for(i=0;i<20;i++){
		if(s[i]==0){
			s[i]=p[j];
			j++;
		}
	}
	printf("combined string=%s",s);
	
}
