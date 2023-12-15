#include <cstdio>
 #include <iostream>
 using namespace std;
int main(int argc, char *argv[]){
	 int Opc;
std::cout << "\n Menú\n" << std::endl;
std::cout << "(1) Ejercicio 1" << std::endl;
std::cout << "(2) Ejercicio 2" << std::endl;
std::cout << "(3) Ejercicio 3" << std::endl;
std::cout << "(4) Ejercicio 4" << std::endl;
std::cout << "(5) Salir\n" << std::endl;
std::cout << "Seleccione una opción: " << std::endl;
	 std::cin >> Opc;
while(Opc!=5){
if(Opc==1){
	 int numero;
std::cout << "Ingrese un número entero: " << std::endl;
	 std::cin >> numero;
for(int i=numero;i>0;i=i-1){
for(int j=0;j<i;j=j+1){
std::cout << "*";}
std::cout << "\n" << std::endl;
}
}
else if(Opc==2){
	 int X,n,mayor;
	 int menor;
X=1;
mayor=0;
menor=0;
while(X<=5){
std::cout << "\nIngrese el número" << std::endl;
	 std::cin >> n;
if(X==1){
mayor=n;
menor=n;
}
else if(n>mayor){
mayor=n;
}
else if(n<menor){
menor=n;
}
X+=1;
}
std::cout << "\nNúmero mayor: " << mayor << std::endl;std::cout << "\nNúero menor: " << menor << std::endl;std::cout << "" << std::endl;
}
else if(Opc==3){
	 int menor;
	 int numero;
	 int temporal;
int Array[10];
std::cout << "Ingrese 10 Números\n" << std::endl;
for(int i=0;i<=9;i=i+1){
std::cout << "Ingrese el número" << std::endl;
	 std::cin >> numero;
Array[i]=numero;
}
std::cout << " " << std::endl;
for(int j=0;j<=9;j=j+1){
	 int n;
n=j+1;
for(int t=0;t<=8;t=t+1){
if(Array[t]<Array[n]){
temporal=Array[n];
Array[n]=Array[t];
Array[t]=temporal;
}
}
}
std::cout << " " << std::endl;
std::cout << "Números ordenados de menor a mayor" << std::endl;
std::cout << " " << std::endl;
for(int t=9;t>=0;t=t-1){
std::cout << Array[t]  << std::endl;
}
}
else if(Opc==4){
	 int Opc2;
std::cout << "\n Opciones      \n" << std::endl;
std::cout << "(1) Moda" << std::endl;
std::cout << "(2) Mediana" << std::endl;
std::cout << "(3) Media" << std::endl;
std::cout << "(4) Retroceder\n" << std::endl;
std::cout << "Seleccione una opción: " << std::endl;
	 std::cin >> Opc2;
while(Opc2!=4){
if(Opc2==1){
int Array[10];
int Aux[10];
	 int Cont;
	 int Posicion;
	 int Numero;
	 int Cont2;
	 int posMayor;
	 int Num;
	 int NumMayor;
	 int O;
O=0;
std::cout << "Ingrese 10 números\n" << std::endl;
for(int i=0;i<10;i=i+1){
std::cout << "Ingrese un número:" << std::endl;
	 std::cin >> Num;
Array[i]=Num;
}
for(int Cont=0;Cont<=9;Cont=Cont+1){
Aux[Cont]=0;
}
for(int Cont=0;Cont<10;Cont=Cont+1){
Numero=Array[Cont];
Posicion=Cont;
for(int Cont2=Cont;Cont2<=9;Cont2=Cont2+1){
if(Array[Cont2]==Numero){
Aux[Posicion]+=1;
}
}
}
NumMayor=Aux[O];
posMayor=0;
for(int Cont=0;Cont<=9;Cont=Cont+1){
if(Aux[Cont]>NumMayor){
posMayor=Cont;
NumMayor=Aux[Cont];
}
}
std::cout << "\nModa : " << std::endl;
std::cout << Array[posMayor]  << std::endl;
}
else if(Opc2==2){
int Array[10];
	 int Band;
	 int temporal;
Band=0;
	 int n;
	 int Num;
std::cout << "Ingrese 10 números\n" << std::endl;
for(int i=0;i<10;i=i+1){
std::cout << "Ingrese un número: " << std::endl;
	 std::cin >> Num;
Array[i]=Num;
}
for(int j=0;j<=9;j=j+1){
	 int n;
n=j+1;
for(int t=0;t<=8;t=t+1){
if(Array[t]<Array[n]){
temporal=Array[n];
Array[n]=Array[t];
Array[t]=temporal;
}
}
}
std::cout << " " << std::endl;
std::cout << "Números de menor a mayor" << std::endl;
std::cout << " " << std::endl;
for(int t=9;t>=0;t=t-1){
std::cout << Array[t]  << std::endl;
}
std::cout << "\nMediana: " << std::endl;
std::cout << Array[5]  << std::endl;
std::cout << "y" << std::endl;
std::cout << Array[4]  << std::endl;
}
else if(Opc2==3){
int Array[10];
	 int suma;
	 int numero;
	 float media;
media=0;
suma=0;
numero=0;
std::cout << "Ingrese 10 números\n" << std::endl;
for(int i=0;i<=9;i=i+1){
std::cout << "Ingrese el número" << std::endl;
	 std::cin >> numero;
Array[i]=numero;
}
std::cout << " " << std::endl;
for(int Cont=0;Cont<=9;Cont=Cont+1){
suma+=Array[Cont];
}
media=(float)suma/10.0;
std::cout << "Media: " << media << std::endl;}
else{
std::cout << "\nError\n" << std::endl;

}
std::cout << "\n Opciones\n" << std::endl;
std::cout << "(1) Moda" << std::endl;
std::cout << "(2) Mediana" << std::endl;
std::cout << "(3) Media" << std::endl;
std::cout << "(4) Retroceder\n" << std::endl;
std::cout << "Sleccione una opción: " << std::endl;
	 std::cin >> Opc2;
}
}
else{
std::cout << "\nError\n" << std::endl;

}
std::cout << "   Menú\n" << std::endl;
std::cout << "(1) Ejercicio 1" << std::endl;
std::cout << "(2) Ejercicio 2" << std::endl;
std::cout << "(3) Ejercicio 3" << std::endl;
std::cout << "(4) Ejercicio 4" << std::endl;
std::cout << "(5) Salir\n" << std::endl;
std::cout << "Seleccione una opción: " << std::endl;
	 std::cin >> Opc;
}

}

