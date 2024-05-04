#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main() {
    ofstream outFile("desafio.txt");
    if (!outFile) {
        cerr << "Erro ao abrir o arquivo desafio." << endl;
        return 1;
    }
    
    string texto;
    while (texto != "0")
    {
    	cout << "digite um texto:\n";
    	cin >> texto;
    	outFile << texto << endl;	
	}
	outFile.close();
   
    return 0;
}
