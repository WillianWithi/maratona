#include <stdio.h>


/* função retorna o n-ésimo 
 * termo da sequencia fibonacci
 */
 
int fibonacci(int n){
	if(n==0){
		return 0;
	}else if(n==1){
		return 1;
	}else if(n==2) {
		return 1;
	}else{
		return (fibonacci(n-1) + fibonacci(n-2));
	}
}


/* função retorna a soma de 
 * n termos de uma sequencia
 * qualquer
 */
 
int count(int n){
	if(n==0){
		return 0;	
	}else{
		return fibonacci(n) + count(n-1);
	}
}

int main(){
	int n;
	while(scanf("%d",&n)!=EOF)printf("\n%d\n",count(n));
	
}
