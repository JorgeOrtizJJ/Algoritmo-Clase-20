#include <iostream>
#include<fstream>
using namespace std;
void uvas();
void leer();
int main() {
  int produccion,tamaño,p,gasto;
  int t;
  string mijitrin;
  
  uvas();
}
 void uvas(){

ofstream archivouvas;
string mijitrin;
cout<<"Archivo"<<endl;
getline(cin,mijitrin);
archivouvas.open(mijitrin.c_str(),ios::out);
int produccion,tamaño,gasto,p=0,t;
char respuesta;  
cout<<"Cantidad de produccion"<<endl;
cin>>produccion;
cout<<"Introducir el tipo de uva"<<endl;
cin>>respuesta;

if (respuesta=='A'){
  cout<<"Ingrese el tamaño de uva"<<endl;
    cin>> tamaño;
  if(tamaño==1){
    p=p+20;
    gasto=p*produccion;
    archivouvas<<"La ganancia es " ""<<gasto<<endl;

  }
  if(tamaño==2){
    p=p+30;
    gasto=p*produccion;
    archivouvas<<"La ganancia es " ""<<gasto<<endl;
  }
}

  if(respuesta=='B'){
    cout<<"Ingrese el tamaño de uva"<<endl;
    cin>> tamaño;
    if(tamaño==1){
      p=p-30;
      gasto=p*produccion;
    archivouvas<<"La ganancia es " ""<<gasto<<endl;
    }
    if(tamaño==2){
      p=p-50;
      gasto=p*produccion;
    archivouvas<<"La ganancia es " ""<<gasto<<endl;
    }
  }


archivouvas.close();
ifstream leer;
string test;
leer.open(mijitrin.c_str(),ios::in);
if(leer.fail()){
cout<<"Warning"<<endl;
}
else{
  while(!leer.eof()){
    getline(leer,test);
    cout<<test<<endl;
  }
}
 }
