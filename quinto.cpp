#include <iostream>

using namespace std;

int main(){
    //Programa para verficar as notas da escola
    //Receber informaçãoes
    float nota1, nota2;
    cout << "Informe a nota1: " << endl;
    cin >> nota1; //cin serve para o usuario poder dar uma entrada
    cout << "Informe a nota2: " << endl;
    cin >> nota2;//cin serve para o usuario poder dar uma entrada

    //calcular a media
    float media=(nota1+nota2)/2; 
    cout << "A media do aluno e: " << media << endl;

    //Sinais de comparação:
    //Igual: ==
    //== significa que os valores são iguais
    //= significa que esta atribuindo valores tipo "variavel=1" a "variavel" recebe o valo 1
    //Diferente: != diferente do igual, "variavel !=5" significa que se a "variavel estiver com um valor difrente de 5, da para programar alguma coisa para acontecer
    //Outros: < , > , <= , <=


    //calcular a provação do aluno com IF SIMPLES
    //if (media>=5){ //se a media for maior ou igual a 5, ele le o que esta dentro das "{}" 
    //    cout << "Aluno aprovado!" << endl;
    //} 
    //return 0;

    //calcular aprovação do aluno com IF com ELSE
    //if(media>=5) {
    //    cout << "Aluno aprovado!" << endl;
    //} else{
    //    cout << "Aluno reprovado!" << endl;
    //}

    // 0 ate 2.5 = D, 2.5 ate 5 = C, 5 ate 7 B, 7.5 ATE 10 A
    if (media < 2.5){
        cout  << "Nota final: D\n";
    } else if(media )
    
}