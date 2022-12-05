//Biblioteca de entrada e saida do c++
#include <iostream>

//Não precisar escrever std em todas as funções
using namespace std;

int main(){
    
    //Variavel de números inteiros
    int VarInteiro = 5;
    cout << VarInteiro << endl;
    
    //Variavel de números reais 
    float VarReal = 5.2;
    cout << VarReal << endl;

    //Variavel de número reais, mas pode mostrar números maiores que o float
    double VarReal2 = 5.2e99; //o número que ele esta representando é este: "5.199999999999999927e+99"
    cout << VarReal2 << endl;
    
    //Variavel booleano
    //Bool com o valor de true retorna "1" 
    bool booleanoTrue = true; 
    cout << booleanoTrue << endl;

    //Bool com o valor de false retorna "0"
    bool booleanoFalse = false;
    cout << booleanoFalse << endl;

    //Variavel char recebe uma letra
    //trabalhando com variavel char, usar a aspas simples (')
    char VarLetra = 'a';
    cout << VarLetra << endl;

    //Variavel String recebe uma palavra
    //trabalhando com a variavel string, usar a aspas duplas (")
    string varLinha = "gabriel";
    cout << varLinha << endl;

    //Entrada em um algoritmo
    //Perguntar qual a sua idade 
    int VarRecebeIdade; // variavel para receber a idade que o usuario digitar
    cout << "Qual a sua idade?" << endl; //Vai mandar informação "<<"
    cin >> VarRecebeIdade;              //Vai receber informação ">>"
    cout << "Sua idade e: "<< VarRecebeIdade; 

    return 0;
}
