#include <iostream>
#include <math.h>
#include <vector>
using namespace std;

string users[10] = {"admin"};
string passwords[10] = {"0000"};
vector<string> users2;
vector<string> passwords2;
string userNews[10];
string passNews[10];
vector<int> areasCalculadass;
void menu();
void menu2();
void login();
void registrar();
void calculadoraDeAreas();
void areasCalculadas();
void opMatrices();

void login(){
	string user, password;
	int passUser = 0, passPassword = 0;
	int passUser2 = 0, passPassword2 = 0;
	int intentos = 0;
	do{
		cout<<"Ingrese su usuario "<<endl;
		cin>>user;
		cout<<"Ingrese su contraseña"<<endl;
		cin>>password;
		for(int i = 0; i < 10; i++){
			if(user == users[i]){
				passUser = 1;
			}
		}
		for(int j = 0; j < 10; j++){
			if(password == passwords[j]){
				passPassword = 1;
			}
		}
		for(int i = 0; i<users2.size(); i++){
			if(user == users2[i]){
				passUser = 1;
			}
		}
		for(int j = 0; j<passwords2.size(); j++){
			if(password == passwords2[j]){
				passPassword = 1;
			}
		}
		
		if((passUser == 1 && passPassword == 1)){
			system("cls");
			cout<<"Bienvenido al sistema..."<<endl;
			system("pause");
			system("cls");
			menu2();
			break;
		}else{
			system("cls");
			cout<<"Usuario o contraseña incorrectos... vuelve a intenarlo"<<endl;
			intentos++;	
		}
		if(intentos==2){
			cout<<"Se te han acabo los intentos para iniciar sesion "<<endl;
			system("pause");
			system("cls");
			menu();
		}
	}while(intentos!=2);	
}

void registrar(){
	string nombre, apellido, id, user, password;
	cout<<"Ingrese su nombre...."<<endl;
	cin>>nombre;
	cout<<"Ingrese su apellido..."<<endl;
	cin>>apellido;
	cout<<"Ingrese su documento de identidad..."<<endl;
	cin>>id;
	/*for(int i = 0; i<10; i++){
		if(i == 1){
			cout<<"Ingrese su nombre de usuario"<<endl;
			cin>>users[i];
			break;
		}
	}*/
	cout<<"Ingrese su nombre de usuario"<<endl;
	cin>>user;
	users2.push_back(user);
	/*for(int j = 0; j<10; j++){
		if(j == 1){
			cout<<"Ingrese su contraseña"<<endl;
			cin>>passwords[j];
			break;
		}
	}*/
	cout<<"Ingrese su contraseña"<<endl;
	cin>>password;
	passwords2.push_back(password);
	system("cls");
	cout<<"Bienvenido al sistema señor@ "<<nombre<<endl;
	cout<<"Por favor verifica tu identidad para entrar al sistema..."<<endl;
	login();
}

/*

	INICIO DE LAS FUNCIONES PARA HALLAR EL AREA DE LAS FIGURAS GEOMETRICAS

*/

int triangulo(){
	  string op;
	  int opArea;
	  int base, altura, area;
	  cout<<"Calcule el area de un triangulo"<<endl;
	  cout<<"Ingrese la base: "<<endl;
	  cin>>base;
	  cout<<"Ingrese la altura: "<<endl;
	  cin>>altura;
	
	  area = base*altura/2;
	  cout<<"El area del triangulo es: "<<area<<endl;
	  areasCalculadass.push_back(area);
	
	  cout<<"Desea realizar otra area? \n 1. Si \n 2. No"<<endl;
	  cin>>opArea;
	  if(opArea == 1){
	  	system("cls");
	  	calculadoraDeAreas();
	  }	else{
	  	system("cls");
	  	areasCalculadas();
	  	system("pause");
	  	system("cls");
	  	menu2();
	  }
	
	  return area;
}

int cuadrado(){
  int l1,l2, area;
  int opArea;
  cout<<"Calcule el area de un cuadrado"<<endl;
  cout<<"Ingrese el lado 1..."<<endl;
  cin>>l1;
  cout<<"Ingrese el lado 2..."<<endl;
  cin>>l2;

  area = l1*l2;

  cout<<"El area del cuadrado es de: "<<area<<endl;
    areasCalculadass.push_back(area);


  cout<<"Desea realizar otra area? \n 1. Si \n 2. No"<<endl;
	  cin>>opArea;
	  if(opArea == 1){
	  	system("cls");
	  	calculadoraDeAreas();
	  }else{
	  	system("cls");
	  	areasCalculadas();
	  	system("pause");
	  	system("cls");
	  	menu2();
	  }
  return area;
}

int rectangulo(){
  int base, altura, area;
  int opArea;
  cout<<"Calcule el area de un rectangulo"<<endl;
  cout<<"Ingrese la base: "<<endl;
  cin>>base;
  cout<<"Ingrese la altura: "<<endl;
  cin>>altura;

  area = base*altura/2;
  cout<<"El area del triangulo es: "<<area<<endl;
	areasCalculadass.push_back(area);

	
  cout<<"Desea realizar otra area? \n 1. Si \n 2. No"<<endl;
	  cin>>opArea;
	  if(opArea == 1){
	  	system("cls");
	  	calculadoraDeAreas();
	  }else{
	  	system("cls");
	  	areasCalculadas();
	  	system("pause");
	  	system("cls");
	  	menu2();
	  }
  
  return area;
}

int circulo(){
  int radio, area;
  int opArea;
  cout<<"Calcule el area de un circulo"<<endl;
  cout<<"Ingrese el radio del circulo.."<<endl;
  cin>>radio;
  area = M_PI * pow(radio, 2);
  cout<<"El area del circulo es: "<<area<<endl;
		  areasCalculadass.push_back(area);

  cout<<"Desea realizar otra area? \n 1. Si \n 2. No"<<endl;
	  cin>>opArea;
	  if(opArea == 1){
	  	system("cls");
	  	calculadoraDeAreas();
	  }else{
	  	system("cls");
	  	areasCalculadas();
	  	system("pause");
	  	system("cls");
	  	menu2();
	  }
	  
  return area;
}

/*

	FIN DE LAS FUNCIONES PARA HALLAR EL AREA DE LAS FIGURAS GEOMETRICAS

*/

void areasCalculadas(){
	for(int i = 0; i<areasCalculadass.size(); i++){
		cout<<areasCalculadass[i]<<endl;
		if(areasCalculadass[i] == 0){
			break;
		}
	}
	system("pause");
	system("cls");
	calculadoraDeAreas();
}

void calculadoraDeAreas(){
	int opArea;
	cout<<"Que area desea buscar: \n 1. Area del circulo \n 2. Area del cuadrado \n 3. Area del triangulo \n 4. Area del rectangulo \n 5. Mostar areas calculada \n 6. Salir"<<endl;
	cin>>opArea;
	switch(opArea){
		case 1:
			system("cls");
			circulo();
			break;
		case 2:
			system("cls");
			cuadrado();
			break;
		case 3:
			system("cls");
			triangulo();
			break;
		case 4:
			system("cls");
			rectangulo();
			break;
		case 5:
			system("cls");
			areasCalculadas();
			break;
		case 6:
			system("cls");
			menu2();
			break;
	}
}

void operacionesMatrices(){
	
}

void opMatrices(){
	string menu = "Que operacion desea realizar con las matrices? \n 1. Sumar \n 2. Restar \n 3. Multiplicacion \n 4. Multiplicacion por un escalar \n 5. Salir";
	int dimensionF, dimensionCol;
	int opMatrices;
	int suma, resta, multplicacion, escalar;
	cout<<"Digite la dimension de las filas"<<endl;
	cin>>dimensionF;
	cout<<"Digite la dimension de las columnas"<<endl;
	cin>>dimensionCol;
	
	
	
	int m1[dimensionF][dimensionCol];
	int m2[dimensionF][dimensionCol];
	//llenamos matrices
	for(int i = 0; i <dimensionF; i++){
		for(int j = 0; j<dimensionCol; j++){
			cout<<"Digite un numero en la fila "<<i+1<<" en la posicion "<<j+1<<endl;
			cin>>m1[i][j];
		}
		cout<<endl;
	}
	for(int i = 0; i <dimensionF; i++){
		for(int j = 0; j<dimensionCol; j++){
			cout<<"Digite un numero en la fila "<<i+1<<" en la posicion "<<j+1<<endl;
			cin>>m2[i][j];
		}
		cout<<endl;
	}
	//mostramos matrices
	for(int i = 0; i <dimensionF; i++){
		for(int j = 0; j<dimensionCol; j++){
			cout<<m1[i][j]<<" ";
		}
		cout<<endl;
	}
	cout<<"*************************"<<endl;
	for(int i = 0; i <dimensionF; i++){
		for(int j = 0; j<dimensionCol; j++){
			cout<<m2[i][j]<<" ";
		}
		cout<<endl;
	}
	system("pause");
	system("cls"); 
	if(dimensionF % 1 == 0 && dimensionCol % 1 == 0){
		menu = "Que operacion desea realizar con las matrices? \n 1. Sumar \n 2. Restar \n 3. Multiplicacion \n 4. Multiplicacion por un escalar \n 5. Suma de diagonales \n 6. Salir";
		cout<<menu<<endl;
		cin>>opMatrices;
		switch(opMatrices){
			case 1:
				system("cls");
				cout<<"El resultado de la suma de las matrices es de: "<<endl; 
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							m1[i][j]+=m2[i][j];
						}
					}
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 2:
				system("cls");
				cout<<"El resultado de la resta de las matrices es de: "<<endl; 
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							m1[i][j]-=m2[i][j];
						}
					}
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 3:
				system("cls");
				cout<<"El resultado de la multiplicacion de las matrices es de: "<<endl; 
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							m1[i][j]*=m2[i][j];
						}
					}
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 4:
					system("cls");
					cout<<"Ingrese el escalar: "<<endl;
					cin>>escalar;
					cout<<"El resultado de la multiplicacion por un escalar es de: "<<endl;
					for(int i = 0; i <dimensionF; i++){
						for(int j = 0; j<dimensionCol; j++){
							m1[i][j]*=m2[i][j]*escalar;
						}
					}
					for(int i = 0; i <dimensionF; i++){
						for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 5: 
				system("cls");
				if(dimensionF % 1 == 0 && dimensionCol % 1 == 0){
					cout<<"Las dimensiones de la matriz son cuadradas..."<<endl;
					for(int i = 0; i <dimensionF; i++){
						for(int j = 0; j<dimensionCol; j++){
							if(i==j){
								m1[i][j]+=m2[i][j];
							}else{
								m1[i][j]=0;
							}
						
						}
					}
					for(int i = 0; i <dimensionF; i++){
						for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
				}else{
					cout<<"Las dimensiones de la matriz no son cuadradas..."<<endl;
				}
				system("pause");
				system("cls");
				menu2();
				break;
			case 6:
				system("cls");
				menu2();
				break;
			default:
				cout<<"Digite una opcion correcta..."<<endl;
				break;
			}
	}else{
		cout<<menu<<endl;
		cin>>opMatrices;
		switch(opMatrices){
			case 1:
				system("cls");
				cout<<"El resultado de la suma de las matrices es de: "<<endl; 
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							m1[i][j]+=m2[i][j];
						}
					}
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 2:
				system("cls");
				cout<<"El resultado de la resta de las matrices es de: "<<endl; 
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							m1[i][j]-=m2[i][j];
						}
					}
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 3:
				system("cls");
				cout<<"El resultado de la multiplicacion de las matrices es de: "<<endl; 
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							m1[i][j]*=m2[i][j];
						}
					}
				for(int i = 0; i <dimensionF; i++){
					for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 4:
					system("cls");
					cout<<"Ingrese el escalar: "<<endl;
					cin>>escalar;
					cout<<"El resultado de la multiplicacion por un escalar es de: "<<endl;
					for(int i = 0; i <dimensionF; i++){
						for(int j = 0; j<dimensionCol; j++){
							m1[i][j]*=m2[i][j]*escalar;
						}
					}
					for(int i = 0; i <dimensionF; i++){
						for(int j = 0; j<dimensionCol; j++){
							cout<<m1[i][j]<<" ";
						}
						cout<<endl;
					}
					system("pause");
					system("cls");
					menu2();
				break;
			case 5:
				system("cls");
				menu2();
				break;
			default:
				cout<<"Digite una opcion correcta..."<<endl;
				break;
			}
	}
}

void menu(){
	int opInicio;
	cout<<"Bienvenido al trabajo final....."<<endl;
	cout<<"Eliga una opcion para acceder al sistema... \n 1. Iniciar sesion \n 2. Registrarse \n 3. Salir"<<endl;
	cin>>opInicio;
	switch(opInicio){
		case 1:
			system("cls");
			login();
			break;
		case 2:
			system("cls");
			registrar();
			break;
		case 3:
			cout<<"Gracias por utilizar el sistema... vuelva pronto"<<endl;
			break;
		default:
			cout<<"Ingrese una opcion correcta..."<<endl;
		break;
	}
}

void menu2(){
	int opMenu2;
	cout<<"Ingrese una opcion \n 1. Calculadora de areas \n 2. Operaciones con matrices \n 3. Salir"<<endl;
	cin>>opMenu2;
	switch(opMenu2){
		case 1:
			system("cls");
			calculadoraDeAreas();
			break;
		case 2:
			system("cls");
			opMatrices();
			break;
		case 3:
			system("cls");
			menu();
			break;
		default:
			cout<<"Ingrese una opcion correcta..."<<endl;
			break;
	}
}


int main(){
	menu();
}
