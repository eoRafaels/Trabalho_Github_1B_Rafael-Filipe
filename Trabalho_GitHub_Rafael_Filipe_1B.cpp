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
string substituirPalavras(string palavra1, string palavra2, string texto)
{

    size_t pos =texto.find(palavra1)
    while(pos != string::npos)
    {
        texto.replace(pos,palavra1.length(),palavra2);
        pos = texto.find(palavra1);
    }
    return texto;
}

int main()
{
    string texto,palavra,palavra1,palavra2;
    char letra,letra1,letra2;
    int qtdletra,contador;
	cout << "Entre com o texto para fazer o teste:";
    cin>>texto;
    cout<<"Digite a letra:";
    cin>>letra;
    qtdletra=contaLetras(letra,texto);
    cout<<qtdletra;
    cout<<"Digite a letra 1:";
    cin>>letra1;
    cout<<"Digite a letra 2:";
    texto=substituirLetra(letra1,letra2,texto);
    cout<<texto;
    cout<<"Digite a Palavra:";
    cin>>palavra;
    contador=contaPalavras(palavra,texto);
    cout<<contador;
    cout<<"Digite a palavra 1:";
    cin>>palavra1;
    cout<<"Digite a palavra 2:";
    cin>>palavra2;
    texto=substituirPalavras(palavra1,palavra2,texto);
    cout<<texto;
	return 0;
}
