1-identificar a idade
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int idade;
    cout<<"Qual é sua idade: "<<endl;
    cin>>idade;
    
    if (idade <18) {
        cout<< "vc é de menor";
    }else if(idade >=18 && idade <=65){
        cout<<"vc é de maior";
    
    }else {
        cout<<"idade avançada";
    }
    return 0;
}
