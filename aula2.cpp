#include <iostream>

using namespace std;
int main(){

    
	
	struct aluno
    {
       string nome;
       int matricula;
       string endereco;
       bool aprovado;
       float nota;

    };

    aluno cadastro;


    cout<<"qual o seu nome =";
    cin>>cadastro.nome;
    cout<<"qual a sua matricula  =";
    cin>>cadastro.matricula;
    cout<<"qual o seu endereço =";
    cin>>cadastro.endereco;
    cout<<"qual o sua nota =";
    cin>>cadastro.nota;

    if (cadastro.nota >6){
       cout<<"\n ola: "<< cadastro.nome << " \n matricula: " << cadastro.matricula << " \n endereço: " << cadastro.endereco <<" \n sua nota foi: " << cadastro.nota << "\n voce foi aprovado \n";
        



    }else{
       cout<<"\n ola: "<< cadastro.nome << "\n matricula: " << cadastro.matricula << "\n endereço: " << cadastro.endereco <<"\n sua nota foi: " << cadastro.nota << "\n voce foi reprovado \n" ;
    }


    

    
	system("pause");
	return (0);
}