#include <iostream>
#include <stdio.h>
#include <locale.h>
using namespace std;

int opcao;
float  num1, num2;
bool continuar = true;

int main()
{

        setlocale(LC_ALL, "Portuguese");

        while(continuar){
    cout<< "--------MENU----------|\n";
    cout<< "1 -      SOMA         |\n";
    cout<< "2 -    SUBTRAÇÃO      |\n";
    cout<< "3 -   MULTIPLIÇÃO     |\n";
    cout<< "4 -     DIVISÃO       |\n";
    cout<< "5 -      SAIR         |\n";
    cout<< "---------------------- \n";
    cout<<"\n Informe uma opção  \n";
    cin>>opcao;



    switch(opcao) {
        case 1:
            cout<<"\n Soma escolhida! \n";
            cout<<"\n Informe dois números \n";
            cout<<"Informe o primeiro número \n";
            cin>>num1;
            cout<<"Informe o segundo número \n";
            cin>>num2;
            cout<<" A soma de "<<num1<<" + "<<num2<<" resulta em " << num1+num2 <<"\n\n";
            break;

        case 2:
           cout<<"\n Subatração escolhida! \n";
            cout<<"\n Informe dois números \n";
            cout<<"Informe o primeiro número \n";
            cin>>num1;
            cout<<"Informe o segundo número \n";
            cin>>num2;
            cout<<" A subtração de "<<num1<<" - "<<num2<<" resulta em " << num1-num2<<"\n\n";
            break;

        case 3:
            cout<<"\n Multiplicação escolhida! \n";
            cout<<"\n Informe dois números \n";
            cout<<"Informe o primeiro número \n";
            cin>>num1;
            cout<<"Informe o segundo número \n";
            cin>>num2;
            cout<<" A multiplicação de "<<num1<<" X "<<num2<<" resulta em " << num1*num2<<"\n\n";

            break;

        case 4:
            cout<<"\n Divisão escolhida! \n";
            cout<<"\n Informe dois números \n";
            cout<<"Informe o primeiro número \n";
            cin>>num1;
            cout<<"Informe o segundo número \n";
            cin>>num2;
            cout<<" A divisão de "<<num1<<" / "<<num2<<" resulta em " << num1/num2<<"\n\n";

            break;
        case 5:
            cout<<"Operação finalizada! \n";
            continuar = false;
            break;

        default:
            cout<<"\n Opção inváida! \n";
            break;

return 0;
}
}
}
