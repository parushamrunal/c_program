#include<stdio.h>
int main(int argc, char *argv[]){
	if(argc==1){
		printf("another argument required:");
	}else{
		for(int i=0;i<2;i++){
			printf("%s\n",argv[i]);
		}
	}	
}
