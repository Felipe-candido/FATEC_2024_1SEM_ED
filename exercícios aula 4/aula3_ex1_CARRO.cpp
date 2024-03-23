#include <iostream>
#include <string>
#include <stdlib.h>
using namespace std;

string recebe_nome_carro();
string recebe_marca();
string recebe_placa();
int recebe_ano();
string recebe_local_revisao();
string data_revisao();
int recebe_quant_revisoes();


int main(int argc, char** argv) {
	
	
	struct revisao{
		string data;
		string local;
	};
	
	struct carro{
		string nome;
		string marca;
		string placa;
		int ano;
		int quant_revisoes;
		revisao revisoes[4];
	};
	
	carro carro1;
	carro1.nome = recebe_nome_carro();
	carro1.marca = recebe_marca();
	carro1.placa = recebe_placa();
	carro1.ano = recebe_ano();
	carro1.quant_revisoes = recebe_quant_revisoes();
	
	for (int x; x < carro1.quant_revisoes; x++){
		carro1.revisoes[x].data = data_revisao();
		carro1.revisoes[x].local = recebe_local_revisao();
	}
	
	
	
	cout << "Nome do carro: " << carro1.nome << endl;
	cout << "Marca do carro: " << carro1.marca << endl;
	cout << "Placa: " << carro1.placa << endl;
	cout << "Ano: " << carro1.ano << endl;
	
	for(int y=0; y < carro1.quant_revisoes; y++){
		cout << y+1 << "o revisao." << endl;
		cout << "local: " << carro1.revisoes[y].local << endl;
		cout << "Data: " << carro1.revisoes[y].data << endl;  
	}	
	
	return 0;
}

string recebe_nome_carro(){
	string nome;
	cout << "Insira aqui o nome do carro: ";
	cin >> nome;
	return nome;
}

string recebe_marca(){
	string marca;
	cout << "Insira aqui a marca do carro: ";
	cin >> marca;
	return marca;
}

string recebe_placa(){
	string placa;
	cout << "Insira aqui a placa do carro: ";
	cin >> placa;
	return placa;
}

int recebe_ano(){
	int ano;
	cout << "insira aqui o ano do carro: ";
	cin >> ano;
	return ano;
}

int recebe_quant_revisoes(){
	int revisoes;
	do{
		cout << "insira a quantidade de revisoes que foram feitas ate agora: ";
		cin >> revisoes;
		
		if(revisoes > 5 || revisoes < 1){
			cout << "essa quantia de revisoes nao e valida.";
		}
		
	}while(revisoes > 5);
	return revisoes;
}

string recebe_local_revisao(){
	string local;
	cout << "Insira aqui o local da revisao: ";
	cin >> local;
	return local;
}

string data_revisao(){
	string data;
	cout << "Insira aqui a data da revisão (dd/mm/aaaa): ";
	cin >> data;
	return data;
}


