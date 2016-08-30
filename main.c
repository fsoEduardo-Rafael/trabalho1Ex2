#include "util.h"
#include "ordena.h"


int main (int argc, char **argv){
	int i=0;
	int next_option;
	char *aux;

	print_header();

	//Ciclo para identificação de todos os argumentos
	do{
		next_option = getopt_long(argc, argv, short_options, NULL, NULL);
		if(next_option == 'r'){
			argv = sort_r(argc, argv);
		} else{
			if(next_option == 'd'){
				printf("d\n");
				argv = sort_d(argc, argv);
			} else{
				if(i==2){
					printf("outro\n");
					argv = sort_d(argc, argv);
				}
			}
		}
		i++;

	}while(next_option != -1);

	printf("Resultado:\n");
	for(i=2 ; i<argc ; i++){
		printf("%s\n", argv[i]);
	}

	return 0;
}
