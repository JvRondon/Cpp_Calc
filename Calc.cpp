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
    cout<< "2 -    SUBTRA��O      |\n";
    cout<< "3 -   MULTIPLI��O     |\n";
    cout<< "4 -     DIVIS�O       |\n";
    cout<< "5 -      SAIR         |\n";
    cout<< "---------------------- \n";
    cout<<"\n Informe uma op��o  \n";
    cin>>opcao;



    switch(opcao) {
        case 1:
            cout<<"\n Soma escolhida! \n";
            cout<<"\n Informe dois n�meros \n";
            cout<<"Informe o primeiro n�mero \n";
            cin>>num1;
            cout<<"Informe o segundo n�mero \n";
            cin>>num2;
            cout<<" A soma de "<<num1<<" + "<<num2<<" resulta em " << num1+num2 <<"\n\n";
            break;

        case 2:
           cout<<"\n Subatra��o escolhida! \n";
            cout<<"\n Informe dois n�meros \n";
            cout<<"Informe o primeiro n�mero \n";
            cin>>num1;
            cout<<"Informe o segundo n�mero \n";
            cin>>num2;
            cout<<" A subtra��o de "<<num1<<" - "<<num2<<" resulta em " << num1-num2<<"\n\n";
            break;

        case 3:
            cout<<"\n Multiplica��o escolhida! \n";
            cout<<"\n Informe dois n�meros \n";
            cout<<"Informe o primeiro n�mero \n";
            cin>>num1;
            cout<<"Informe o segundo n�mero \n";
            cin>>num2;
            cout<<" A multiplica��o de "<<num1<<" X "<<num2<<" resulta em " << num1*num2<<"\n\n";

            break;

        case 4:
            cout<<"\n Divis�o escolhida! \n";
            cout<<"\n Informe dois n�meros \n";
            cout<<"Informe o primeiro n�mero \n";
            cin>>num1;
            cout<<"Informe o segundo n�mero \n";
            cin>>num2;
            cout<<" A divis�o de "<<num1<<" / "<<num2<<" resulta em " << num1/num2<<"\n\n";

            break;
        case 5:
            cout<<"Opera��o finalizada! \n";
            continuar = false;
            break;

        default:
            cout<<"\n Op��o inv�ida! \n";
            break;

return 0;
}
}
}
