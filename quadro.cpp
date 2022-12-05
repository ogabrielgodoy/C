#include <iostream>

using namespace std;

#define pi 3.14 << endl;    //Valor definido o nome se chama "PI" então se eu mandar mostrar em qualuqer lugar do codigo,
                            //ele vai mostrar o valor definido

#define idade cout << "Eu tenho 17 anos" << endl;



//função que não tem entrada void só vai ler uma vez, ele esta "()" vazio porque não tem entradas
void meunome(){
    cout << "Meu nome e Gabriel" << endl;
}

//função que tem entrada
//Somar é o nome da função (pode ser o nome q eu quiser)
int somar(int x, int y){ //duas entradas "int" uma se chama "x" e a outra "y"
    int soma; //variavel local, porque esta dentro de uma função só funciona dentro da função
    soma = x+y;
    return soma;
}

int main(){
    meunome();

    int a=5, b=4; //essa variavel só vale para a função main, porque esta criada aqui dentro
    int s = somar(a,b); //Usando a função somar, para somar as duas entradas "a" e "b"
    cout << "Soma: " << s << endl;

    //Mostrar o valor da variavel definida "pi"
    cout << "Valor de pi: " << pi; //Mostar os valores

    //Mostrar o valor da variavel definida "idade"
    idade; //Também mostra os valores, mas só mostra o que foi definido 

    return 0;
}