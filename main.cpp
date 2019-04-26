#include <iostream>
using std::cout;
using std::cin;
using std::endl;
#include <string>
using std::string;


int menu();

int main(){
	int opcion = 0;
	do{//repeticion 
		//menu
		opcion = menu();
		while(opcion<1 || opcion>4){
			cout<<"La opción que ha ingresado no es váilida, ingrese un número de uno a cuatro"<<endl;
			opcion = menu();
		}
		if(opcion == 1){
			int opcion2 = 0;
			cout<<"------------------------------------"<<endl;
			cout<<"1.- Primera función"<<endl<<"2.- Sengunda función"<<endl;
			cout<<"	  Ingrese una opción: ";
			cin>> opcion2;
			while(opcion2 < 1 || opcion2 <2){
				cout<< "El número que ha ingresado no es válido"<<endl;
				cout<<"1.- Primera función"<<endl<<"2.- Sengunda función"<<endl;
                       		cout<<"   Ingrese una opción: ";
                        	cin>> opcion2;
			}
			if(opcion2 == 1){
				string cadena = "cadena";
				cout<<endl;
				cout<<"Ingrese una secuencia de dígitos: ";
				cin>> cadena;
				while(cadena.length()/2 == 0){
					cout<<"La secuencia de dígitos debe de ser par"<<endl;
					cout<<"Ingrese una secuencia de dígitos: ";
                               		cin>> cadena;
				}
				char letra,letra2 = '0';
				int num1, num2 = letra2-'0', suma = 0;
				for(int i = 0; i<=cadena.length();i++){
					letra = cadena[i];
					num1 = letra - '0';
					if(num1 == num2){
						suma += num1;
					}
					num2 = num1;
				}
				int length = cadena.length(),numi,numf;
				char inicio = cadena[0], lfinal = cadena[length-1];
				numi = inicio - '0';
				numf = lfinal - '0';
				if(inicio == lfinal){
					suma += numf;
				}
				cout<<"Resultado: "<<suma<<endl;
			}
			if(opcion2 == 2){
				string cadena = "cadena";
                                cout<<endl;
                                cout<<"Ingrese una secuencia de dígitos: ";
                                cin>> cadena;
                                while(cadena.length()/2 == 0){//validacion
                                        cout<<"La secuencia de dígitos debe de ser par"<<endl;
                                        cout<<"Ingrese una secuencia de dígitos: ";
                                        cin>> cadena;
                                }
                                char letra,letra2 = '0';
                                int num1, num2 = letra2-'0', suma = 0, tam, otro = 0;
				tam = cadena.length()/2;
				for(int i = 0; i <= cadena.length(); i++){
					if(i+tam>cadena.length()){
						letra  = cadena[i+otro];
						num1 = letra - '0';
						if(num1 == num2){
							suma += num1;
						}
						otro+=tam;
					}else{
						letra = cadena[i+tam];
                                       		num1 = letra - '0';
						if(num1 == num2){
                                               		 suma += num1;
                                       		 }
					}
                                        num2 = num1;
				}
				cout<< "Resultado: "<<suma<<endl;
			}
			cout<<"------------------------------------"<<endl;
		}
		if(opcion == 2){
			cout<<"------------------------------------"<<endl;
			cout<<"Ingrese un número: ";
			int num = 0;
			cin>>num;
			while(num<=0){
				cout<<"El número debe de ser positivo"<<endl;
				cout<<"Ingrese un número: ";
                       		int num = 0;
                       		cin>>num;
			}
			int suma = 0;
			for(int i = 1; i < num; i++){
				if(num % i == 0){
					suma+= i;
				}
			}
			if(suma == num){
				cout<<num<< " es un número perfecto, factores: ";
				for(int i = 1; i < num; i++){
                               		if(num % i == 0){
                                        	cout<<i<<" ";
                               		}
                       		 }
			}else{
				cout<<num<<" no es número perfecto.";
				int cont = 1, numeromayor = 0;
				while(cont<num){
					int suma2 = 0;
                       			for(int i = 1; i < cont; i++){
                                		if(cont % i == 0){
                                        		suma2+= i;
                                		}
                        		}
					if(suma2 == cont){
						numeromayor = cont;
					}
					cont++;
				}
				cout<<" El número perfecto más grande es "<<numeromayor
					<<" y sus factores son ";
                               	for(int i = 1; i < numeromayor; i++){
                                 	if(numeromayor % i == 0){
                                             	cout<<i<<" ";
                                        }
                                 }
			}
			cout<<endl<<"------------------------------------"<<endl;
		}
		if(opcion == 3){
			cout<<"------------------------------------"<<endl;
			cout<<"Ingrese una cadena: ";
			string cadena;
			cin>> cadena;
			int cond = 0;
			char letra, letra2= '.';
			for(int i = 0; i<cadena.length(); i++){
				letra = cadena[i];
				for(int j = i+1; j<cadena.length(); j++){
					letra2 = cadena[j];
					if(letra != letra2){
                                        	letra2 = letra;
                                	}else{
                                        	cout<<"La cadena contiene caracteres repetidos"<<endl;
                                        	cond = 1;
						break;
                                	}
				}
			}
			char letra3;
			char temporal;
			string cadena2 = "";
			if(cond == 0){
				for(int i = 0; i<cadena.length(); i++){
					for(int j =0; j<cadena.length(); j++){
						if(i != j ){
							temporal = cadena[i];
							cadena[i] = cadena[j];
							cadena[j] = temporal;
							cout<<cadena<<endl;
							temporal = cadena[i];
							cadena[i] = cadena[j];
							cadena[j] = temporal;
						}
					}
					cout<<cadena<<endl;
				}	
			}
			cout<<cadena2<<endl;
		}
	}while(opcion != 4);
	return 0;
}

int menu(){
	cout<<"			Menu"<<endl
		<<"1.- Captcha"<<endl
		<<"2.- Números perfectos"<<endl
		<<"3.- Permutaciones posibles en una secuencia"<<endl
		<<"4.- Salir"<<endl;
	cout<< "	Ingrese una opción: ";
	int opcion = 0;
	cin>> opcion;
	cout<<endl;
	return opcion;	
}

