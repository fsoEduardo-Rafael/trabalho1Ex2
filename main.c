#include <stdio.h>

int main (int argc, char **argv){
	int i, n, j;
	char *aux;
	printf("Exercicio 2 da primeira lista de exercicios de FSO:\n");
	printf("Este programa tem %d argumentos\n", argc);

	if(argc>1){
		//Caso o usuario tenha passado a flag -r, devemos ordenar de maneira decrescente:
		if(strcmp(argv[1], "-r")==0){
				printf("Ordenando de maneira decrescente:\n");
				printf("-%d-\n", n);
				
				for(i=2;i <argc; ++i){
					for(j=i+1 ; j<argc ; j++){
						if(atoi(argv[i]) < atoi(argv[j])){
							aux = argv[i];
							argv[i] = argv[j];
							argv[j] = aux;
						}
					}
				}
		} else{
			//Caso o usuario tenha passado a flag -d, ou qualquer outra entrada, devemos ordenar de maneira crescente:
			printf("Ordenando de maneira crescente:\n");
			printf("-%d-\n", n);
			
			for(i=2;i <argc; ++i){
				for(j=i+1 ; j<argc ; ++j){
					if(atoi(argv[i]) > atoi(argv[j])){
						aux = argv[i];
						argv[i] = argv[j];
						argv[j] = aux;
					}
				}
			} 
		}
		printf("Resultado:\n");
		for(i=2 ; i<argc ; i++){
			printf("%s\n", argv[i]);
		}
	}

	return 0;
}
