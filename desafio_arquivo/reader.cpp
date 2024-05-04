#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    
	ifstream inFile("desafio.txt");
    if (!inFile) {
        std::cerr << "Erro ao abrir o arquivo desafio." << endl;
        return 1;
    }

    string line;
    cout << "Conteudo do arquivo:" << endl;
    while (getline(inFile, line)) {
        cout << line << endl;
    }
    inFile.close();

    return 0;
}
