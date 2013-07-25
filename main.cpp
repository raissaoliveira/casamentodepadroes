#include <cstdlib>
#include <fstream>
#include <string>

std::string LeArquivo (const std::string& NomeArquivo) {

	std::ifstream Entrada(NomeArquivo, std::ifstream::in);

	std::string Retorno = "";

	if(Entrada.is_open()) {
	}
	else {
		printf("Houve um problema ao tentar abrir o arquivo %s.", NomeArquivo);
	}


	return Retorno;
}

int main () {

	getchar();


	return EXIT_SUCCESS;
}