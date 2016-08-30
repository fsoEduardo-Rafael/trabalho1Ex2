#include <stdio.h>

char ** sort_r(int argc, char ** argv){
	printf("Ordenando de maneira decrescente\n");
	int i, j;
	char *aux;
	for(i=2;i <argc; ++i){
		for(j=i+1 ; j<argc ; j++){
			if(atoi(argv[i]) < atoi(argv[j])){
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
		}
	}
	return argv;
}

char ** sort_d(int argc, char ** argv){
	printf("Ordenando de maneira crescente\n");
	int i, j;
	char *aux;
	for(i=2;i <argc; ++i){
		for(j=i+1 ; j<argc ; ++j){
			if(atoi(argv[i]) > atoi(argv[j])){
				aux = argv[i];
				argv[i] = argv[j];
				argv[j] = aux;
			}
		}
	} 
	return argv;
}