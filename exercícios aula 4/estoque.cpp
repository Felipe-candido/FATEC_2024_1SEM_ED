#include <iostream>
using namespace std;


struct PRODUTO
{
	string nome;
	float preco;
	int quant_estoque;
};

void cadastrarproduto(PRODUTO* produto){
	cout << "insira o nome do produto: ";
	cin >> produto -> nome; 
	
	cout << "Insira o valor do produto: ";
	cin >> produto -> preco;
	
	cout << "Insira a quantidade presente no estoque: ";
	cin >> produto -> quant_estoque;
	
	cout << endl << "==============================================\n";
}

int main(int argc, char** argv) {
	
	
	PRODUTO* vetor_produto = new PRODUTO[3];
	
	for (int x=0; x < 3; x++)
	{
		cout << "Insira as informacoes do " << x+1 << "o produto" << endl;
		
		cadastrarproduto(&vetor_produto[x]);
		
	}
		
	
	for (int y=0; y < 3; y++)
	{	
		cout << "nome do produto: " << vetor_produto[y].nome << endl;
		cout << "preco do produto: " << vetor_produto[y].preco << endl;
		cout << "quantidade em estoque: " << vetor_produto[y].quant_estoque << endl;
		cout << "====================================================================\n";
	}
	
	delete vetor_produto;
	return 0;
}


