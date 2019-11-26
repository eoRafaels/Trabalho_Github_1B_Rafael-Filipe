#include <iostream>
#include <string>
using namespace std;


/*
	Conta todas as letras 'letra' contidas em 'texto'
*/
int contaLetras(char letra, string texto)
{
    int qtd,qtdletra;
    qtd=texto.lenght();
    for(i=0,qtdletra=0;i<qtd;i++)
    {
        if(texto[i]==letra)
            qtdletra++;
    }
    return qtdletra;
}

/*
	Substitui todas as ocorrencias de 'letra1' por 'letra2' contidas em 'texto'
*/
string substituirLetra(char letra1,char letra2, string texto)
	{
		int conta=conta_letra(texto);
		int i;
		for(i=0; i<conta; i=i+1)
		{
			if(texto[i]==letra1)
			{
				texto[i]=letra2;
			}
		}
		return texto;
	}

/*
	Conta todas as ocorrencias de 'palavra' contidas em 'texto'
*/
int contaPalavras(string palavra, string texto)
{
    size_t pos=texto.find(palavra;
    int contador=0;
    while(pos!=string::npos)
    {
        contador++;
        texto=texto.substr(pos+1);
        pos=texto.find(palavra);
    }
    return contador;
}

/*
	Substitui todas as ocorrencias de 'palavra1' por 'palavra2' em 'texto'
*/
void substituirPalavras(string palavra1, string palavra2, string texto)
{

}

int main(){

	cout << "Entre com o texto para fazer o teste:";




	return 0;
}
