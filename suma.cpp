#include <iostream>
using namespace std;
/*Agregar comentario*/
main()
{
	int n1, n2;
	int op=0;
	do{
		system("color b");
		cout<<"\n";
		cout<<"Selecciona una opcion"<<endl;
		cout<<"1. Suma"<<endl;
		cout<<"2. Resta"<<endl;
		cout<<"3. Multiplicacion"<<endl;
		cout<<"4. Division"<<endl;
		cout<<"5. Salir"<<endl;
		cin>>op;
		
		if(op!=5)
		{
			cout<<"Escribe el numero 1: "<<endl;
			cin>>n1;
			cout<<"Escribe el numero 2: "<<endl;
			cin>>n2;
			cout<<"\n";
		}
		
		switch(op)
		{
			case 1:
				cout<<"La suma de "<<n1<<" + "<<n2<<" es: "<<n1+n2;				
				break;
				
			case 2:
				cout<<"La resta de "<<n1<<" - "<<n2<<" es: "<<n1-n2;				
				break;
				
			case 3:
				cout<<"La multiplicacion de "<<n1<<" x "<<n2<<" es: "<<n1*n2;				
				break;
			
			case 4:
				cout<<"La division de "<<n1<<" / "<<n2<<" es: "<<n1/n2;				
				break;
				
			case 5:
				cout<<endl<<"Gracias por usar el programa"<<endl;
				break;
				
			default:
				cout<<"Opcion no valida";
				break;
		}
	}while(op!=5);
	
}
