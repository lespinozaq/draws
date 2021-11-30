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
class Docente:public Persona{
    private:
        float sueldo;
        string categoria;
    public:
        Docente(string,string,int,float,string);
        void mostrarDocente();
};
class Estudiante:public Persona{
    private:
        string codigo;
        string carrera;
    public:
        Estudiante(string,string,int,string,string);
        void mostrarEstudiante();
};
Docente::Docente(string d,string n,int e,float s,string c):Persona(d,n,e){

    sueldo=s;
    categoria=c;
}
Persona::Persona(string d,string n,int e){
    DNI=d;
    nombres=n;
    edad=e;
}
void Persona::mostrarPersona(){
    cout<<nombres<<"idenftificado co DNI Nª "<<DNI;
    cout<<" tiene "<<edad<<"anios de edad "<<endl;
}
void Docente::mostrarDocente(){
    mostrarPersona();
    cout<<"\t tiene salario de "<<sueldo<<" y es docente de "<<categoria; 
}
Estudiante::Estudiante(string d,string n,int e,string co,string ca):Persona(d,n,e){
    codigo=co;
    carrera=ca;
}
void Estudiante::mostrarEstudiante(){
    mostrarPersona();
    cout<<"\t con codigo "<<codigo;
    cout<<"carrera "<<carrera;
}
int main(){
    Persona Carlos("40786723","Carlos Arias",24);
    Carlos.mostrarPersona();
    cout<<"----------------"<<endl;
    Docente Maria("40845452","Maria Zevallos",30,2000,"contratada");
    Maria.mostrarDocente();
    cout<<"----------------------"<<endl;
    Estudiante Jose("70605040","Jose Vargas",18,"2021-123456","ESIS");
	Jose.mostrarEstudiante();
    return 0;
}