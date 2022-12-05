#include <iostream>
#include <math.h>//biblitoeca que tem varias formulas de matematica

using namespace std;

int main(){

    //Somar valores de variaveis
    //Gasta memoria ram do computador
    int a=5, b=2; //duas variadas do tipo inteiro criadas
    int soma=a+b; //cria um varialvel chamado soma e colocando o valor dela da variavel a+b que estão com os valores
    cout << "Soma: " << soma << endl; //Mostrar na tela

    //Outra forma de fazer é essa:
    //int a=5, b=2; //duas variadas do tipo inteiro criadas
    //cout << "Soma: " << a+b << endl; //comando para mostrar na tela e ja somar

    //Subtrair valores de variaveis
    int sub=a-b;
    cout << "Subtracao: " << sub << endl;

    //Multiplicar valores de variaveis
    int mult=a*b;
    cout << "Multiplicacao: " << mult << endl;

    //Dividir valores de variaveis
    //Obter o Quociente e o resto da divição
    int quocdiv= a/b; //Pega o valor da divisão
    cout << "Quociente da divisao: " << quocdiv << endl;

    int restodiv = a%b; //Resolve o resto da divisão
    cout << "Resto da divisao " << restodiv << endl;

    float div = (float)a / (float)b;
    cout << "Divisao: " << div << endl;

    //Calcular potencia
    float pot = pow(a,b); //Ele fez "a" elevado a "b"
    cout << "Potencia: " << pot << endl;

    //Incremento e Descremento
    cout << "a antigo: " << a << endl;
    //a++;  //ele soma o numero q esta na variavel a mais 1
    //a+=1; //ele soma o valor a mais o que estiver na frente do igual
    //a=a+1 //ele vai somar a variavel a com o numero que colocar e salvar tudo na variavel a
    cout << "a novo: " << a << endl;

    return 0;

}