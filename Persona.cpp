#include<iostream>
using namespace std;
class Persona{
    protected:
        string DNI;
        string nombres;
        int edad;
    public:
        Persona(string,string,int);
        void mostrarPersona();

};
Persona::Persona(string d,string n,int e){
    DNI=d;
    nombres=n;
    edad=e;
}
void Persona::mostrarPersona(){
    cout<<nombres<<"idenftificado co DNINª "<<DNI;
    cout<<" tiene "<<edad<<"anios de edad "<<endl;
}

int main(){
    Persona Carlos("40786723","Carlos Arias",24);
    Carlos.mostrarPersona();
    return 0;
}