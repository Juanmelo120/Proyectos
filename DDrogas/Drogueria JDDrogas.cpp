#include<iostream>
using namespace std;
int main(){
	long int ced;
	int s,opc,n,opc2,productos,valor;
	int p1=20,p2=18,p3=23,p4=15,p5=55,p6=10,p7=63,p8=10,p9=15,p10=19,p11=16,p12=33,p13=55,p14=11,p15=22,p16=44,p17=41,p18=39,p19=30,p20=27;
	int d1=23,d2=48,d3=63,d4=45,d5=15,d6=20,d7=43,d8=30,d9=18,d10=49,d11=18,d12=13,d13=53,d14=21,d15=52,d16=34,d17=44,d18=29,d19=19,d20=37;
	char w,nom[200];
	system("color a1");
	do{
		cout<<"\n\t\t\tESTE ES UN APLICATIVO DE NUESTRA NUEVA CADENA DE DROGUERIAS JDDROGAS"<<endl;
		cout<<"\t\t\t\tESTAMOS UBICADOS EN ALGUNAS CIUDADES DE COLOMBIA"<<endl;
		cout<<"\tPARA COMPRAR EN NUESTRAS DROGUERIAS, DIGITA ALGUNOS DE LOS NUMEROS DE LAS CIUDADES QUE APARECEN EN PANTALLA"<<endl;
		cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
		cout<<"\n1.BOGOTA"<<endl;
		cout<<"2.MEDELLIN"<<endl;
		cout<<"3.BARRANQUILLA"<<endl;
		cout<<"0.SALIR"<<endl;
		cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
		cin>>opc;
		system("cls");
		switch(opc){
			//ciudad de bogota
			case 1:
				cout<<"\n\t\t\t\t\tACABAS DE ELEGIR LA CIUDAD DE BOGOTA"<<endl;
				cout<<"\t\tPORFAVOR DIGITA CUALQUIERA DE LAS DOS OPCIONES QUE TENEMOS DISPONIBLES AHORAMISMO"<<endl;
				cout<<"\tESTAS OPCIONES TE LLEVARAN A NUETRA TIENDA VIRTUAL, EN LA CUAL PODRAS HACER LA COMPRA QUE NECESITES"<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\n1.ZONA SUR"<<endl;
				cout<<"2.ZONA NORTE"<<endl;
				cout<<"0.SALIR"<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
				cin>>opc2;
				system("cls");
				switch(opc2){
					//tienda con sus respectivos productos de bogota
					case 1:
						//inicio de la lista de productos zona sur
						cout<<"\n\t\t\t\tESTA ES NUESTRA TIENDA VIRTUAL DE BOGOTA ZONA SUR"<<endl;
						cout<<"\t\t\tENSEGUIDA TE MOSTRAREMOS LA LISTA DE PRODUCTOS DE NUESTRA TIENDA"<<endl;
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"\nCOD   UDS   NOMB.PROD\t\t\t    CANT\t       CONT.NET\t      VALxUDS"<<endl;
						cout<<"1."<<"    "<<p1<<"    Suspension Oral Enterogermina   5 mL Sanofi Caja   x10 Frascos    61.200"<<endl;
						cout<<"2."<<"    "<<p2<<"    Tratamiento Capilar Minoxidil   5% Colmed Frasco   X100 Ml        51.200"<<endl;
						cout<<"3."<<"    "<<p3<<"    Electrolit Pedialyte Max        60 Uva Frasco      x500 mL\t      7.040"<<endl;
						cout<<"4."<<"    "<<p4<<"    Enterogermina Plus              5 mL Sanofi Caja   x5 Frascos     68.320"<<endl;
						cout<<"5."<<"    "<<p5<<"    Gel Neutrogena Hydro Boost      1 Frasco           x50 g\t      54.229"<<endl;
						cout<<"6."<<"    "<<p6<<"    Electrolit Pedialyte            60 Manzana Frasco  x500 mL\t      7.040"<<endl;
						cout<<"7."<<"    "<<p7<<"    Alimento Glucerna Vainilla      1 Frasco           X400 G\t      58.408"<<endl;
						cout<<"8."<<"    "<<p8<<"    Crema Lubriderm Men             1 Frasco           x400 mL\t      35.020"<<endl;
						cout<<"9."<<"    "<<p9<<"    Johnsons Baby                   1 Frasco           x200 mL\t      14.024"<<endl;
						cout<<"10."<<"   "<<p10<<"    Crema Corporal Lubriderm        1 Frasco           x200 mL\t      20.655"<<endl;
						cout<<"11."<<"   "<<p11<<"    Crema para Peinar Johnsons      1 Frasco           x200 mL\t      12.835"<<endl;
						cout<<"12."<<"   "<<p12<<"    Crema Defender LOreal Paris     1 Frasco           x40 g\t      42.976"<<endl;
						cout<<"13."<<"   "<<p13<<"    Acido Hialuronico Revitalift    1.5% Gotero        x30 mL\t      62.000"<<endl;
						cout<<"14."<<"   "<<p14<<"    Agua Micelar Garnier            1 Frasco           x400 mL\t      16.320"<<endl;
						cout<<"15."<<"   "<<p15<<"    Agua Micelar Garnier            1 Frasco           x100 mL\t      8.128"<<endl;
						cout<<"16."<<"   "<<p16<<"    Crema Facial Revitalift         1 Tubo             x25 mL\t      26.560"<<endl;
						cout<<"17."<<"   "<<p17<<"    Caladerm Clear Plus             1 Frasco           x120 g\t      9.840"<<endl;
						cout<<"18."<<"   "<<p18<<"    Protector Solar Cetaphil        1 Tubo             X50 Ml\t      82.400"<<endl;
						cout<<"19."<<"   "<<p19<<"    Locion Caladerm                 1 Frasco           X120 Ml\t      15.920"<<endl;
						cout<<"20."<<"   "<<p20<<"    Locion Corporal Cetaphil        1 Frasco0          X473 Ml\t      118.960"<<endl;
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"\nDIGITA EL NUMERO DEL PRODUCTO QUE DESEAS ADQUIRIR ";
						cin>>productos;
						//final de los productos zona sur
					    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						//inicio de la facturacion zona sur
						//producto numero 1
						if(productos==1){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Suspension Oral Enterogermina 5 mL Sanofi Caja x 10 Frascos"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p1<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p1=p1-n;
							valor=61200*n;
							if(n>p1){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p1=p1+n;
							}
							}while(n>p1);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $61200"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 2
						}else if(productos==2){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Tratamiento Capilar Minoxidil 5% Colmed Frasco X100 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p2<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p2=p2-n;
							valor=51200*n;
							if(n>p2){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p2=p2+n;
							}
							}while(n>p2);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $51200"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 3
						}else if(productos==3){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Pedialyte Max 60 Uva Frasco x500 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p3<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p3=p3-n;
							valor=7040*n;
							if(n>p3){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p3=p3+n;
							}
							}while(n>p3);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $7040"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 4
						}else if(productos==4){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Enterogermina Plus 5 mL Sanofi Caja x5 Frascos"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p4<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p4=p4-n;
							valor=68320*n;
							if(n>p4){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p4=p4+n;
							}
							}while(n>p4);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $68320"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 5
						}else if(productos==5){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Gel Neutrogena Hydro Boost 1 Frasco x50 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p5<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p5=p5-n;
							valor=54229*n;
							if(n>p5){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p5=p5+n;
							}
							}while(n>p5);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $54229"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 6
						}else if(productos==6){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Pedialyte 60 Manzana Frasco x500 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p6<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{							
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p6=p6-n;
							valor=7040*n;
							if(n>p6){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p6=p6+n;
							}
							}while(n>p6);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $7040"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 7
						}else if(productos==7){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Alimento Glucerna Vainilla 1 Frasco X400 G"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p7<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{							
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p7=p7-n;
							valor=58408*n;
							if(n>p7){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p7=p7+n;
							}
							}while(n>p7);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $58408"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 8
						}else if(productos==8){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Lubriderm Men 1 Frasco x400 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p8<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p8=p8-n;
							valor=35020*n;
							if(n>p8){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p8=p8+n;
							}
							}while(n>p8);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $35020"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 9
						}else if(productos==9){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Pedialyte Max 60 Uva Frasco x500 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p9<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p9=p9-n;
							valor=14024*n;
							if(n>p9){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p9=p9+n;
							}
							}while(n>p9);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $14024"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 10
						}else if(productos==10){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Corporal Lubriderm 1 Frasco x200 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p10<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p10=p10-n;
							valor=20655*n;
							if(n>p10){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p10=p10+n;
							}
							}while(n>p10);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $20655"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 11
						}else if(productos==11){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema para Peinar Johnsons 1 Frasco x200 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p11<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p11=p11-n;
							valor=12835*n;
							if(n>p11){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p11=p11+n;
							}
							}while(n>p11);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $12835"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 12
						}else if(productos==12){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Defender LOreal Paris 1 Frasco x40 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p12<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p12=p12-n;
							valor=42976*n;
							if(n>p12){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p12=p12+n;
							}
							}while(n>p12);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $42976"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 13
						}else if(productos==13){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Acido Hialuronico Revitalift 1.5% Gotero x30 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p13<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{								
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p13=p13-n;
							valor=62000*n;
							if(n>p13){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p13=p13+n;
							}
							}while(n>p13);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $62000"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 14
						}else if(productos==14){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x400 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p14<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p14=p14-n;
							valor=16320*n;
							if(n>p14){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p14=p14+n;
							}
							}while(n>p14);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $16320"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 15
						}else if(productos==15){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x100 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p15<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p15=p15-n;
							valor=8128*n;
							if(n>p15){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p15=p15+n;
							}
							}while(n>p15);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $8128"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 15
						}else if(productos==16){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Facial Revitalift 1 Tubo x25 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p16<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p16=p16-n;
							valor=26560*n;
							if(n>p16){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p16=p16+n;
							}
							}while(n>p16);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $26560"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 17
						}else if(productos==17){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Caladerm Clear Plus 1 Frasco x120 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p17<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p17=p17-n;
							valor=9840*n;
							if(n>p17){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p17=p17+n;
							}
							}while(n>p17);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $9840"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 18
						}else if(productos==18){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Protector Solar Cetaphil 1 Tubo X50 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p18<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p18=p18-n;
							valor=82400*n;
							if(n>p18){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p18=p18+n;
							}
							}while(n>p18);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $82400"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 19
						}else if(productos==19){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Caladerm 1 Frasco X120 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p19<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p19=p19-n;
							valor=15920*n;
							if(n>p19){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p19=p19+n;
							}
							}while(n>19);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $15920"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 20
						}else if(productos==20){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Corporal Cetaphil 1 Frasco0 X473 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p20<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p20=p20-n;
							valor=118960*n;
							if(n>p20){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p20=p20+n;
							}
							}while(n>p20);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $118960"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
						}else
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"oprime cualquier tecla: ";
						cin>>w;
						system("cls");
						//fin de la facturacion zona sur
					break;
					case 2:
						//lista de productos zona norte
						cout<<"\n\t\t\t\tESTA ES NUESTRA TIENDA VIRTUAL DE BOGOTA ZONA NORTE"<<endl;
						cout<<"\t\t\tENSEGUIDA TE MOSTRAREMOS LA LISTA DE PRODUCTOS DE NUESTRA TIENDA"<<endl;
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"\nCOD   UDS   NOMB.PROD\t\t\t    CANT\t       CONT.NET\t      VALxUDS"<<endl;
						cout<<"1."<<"    "<<p1<<"    Suspension Oral Enterogermina   5 mL Sanofi Caja   x10 Frascos    61.200"<<endl;
						cout<<"2."<<"    "<<p2<<"    Tratamiento Capilar Minoxidil   5% Colmed Frasco   X100 Ml        51.200"<<endl;
						cout<<"3."<<"    "<<p3<<"    Electrolit Pedialyte Max        60 Uva Frasco      x500 mL\t      7.040"<<endl;
						cout<<"4."<<"    "<<p4<<"    Enterogermina Plus              5 mL Sanofi Caja   x5 Frascos     68.320"<<endl;
						cout<<"5."<<"    "<<p5<<"    Gel Neutrogena Hydro Boost      1 Frasco           x50 g\t      54.229"<<endl;
						cout<<"6."<<"    "<<p6<<"    Electrolit Pedialyte            60 Manzana Frasco  x500 mL\t      7.040"<<endl;
						cout<<"7."<<"    "<<p7<<"    Alimento Glucerna Vainilla      1 Frasco           X400 G\t      58.408"<<endl;
						cout<<"8."<<"    "<<p8<<"    Crema Lubriderm Men             1 Frasco           x400 mL\t      35.020"<<endl;
						cout<<"9."<<"    "<<p9<<"    Johnsons Baby                   1 Frasco           x200 mL\t      14.024"<<endl;
						cout<<"10."<<"   "<<p10<<"    Crema Corporal Lubriderm        1 Frasco           x200 mL\t      20.655"<<endl;
						cout<<"11."<<"   "<<p11<<"    Crema para Peinar Johnsons      1 Frasco           x200 mL\t      12.835"<<endl;
						cout<<"12."<<"   "<<p12<<"    Crema Defender LOreal Paris     1 Frasco           x40 g\t      42.976"<<endl;
						cout<<"13."<<"   "<<p13<<"    Acido Hialuronico Revitalift    1.5% Gotero        x30 mL\t      62.000"<<endl;
						cout<<"14."<<"   "<<p14<<"    Agua Micelar Garnier            1 Frasco           x400 mL\t      16.320"<<endl;
						cout<<"15."<<"   "<<p15<<"    Agua Micelar Garnier            1 Frasco           x100 mL\t      8.128"<<endl;
						cout<<"16."<<"   "<<p16<<"    Crema Facial Revitalift         1 Tubo             x25 mL\t      26.560"<<endl;
						cout<<"17."<<"   "<<p17<<"    Caladerm Clear Plus             1 Frasco           x120 g\t      9.840"<<endl;
						cout<<"18."<<"   "<<p18<<"    Protector Solar Cetaphil        1 Tubo             X50 Ml\t      82.400"<<endl;
						cout<<"19."<<"   "<<p19<<"    Locion Caladerm                 1 Frasco           X120 Ml\t      15.920"<<endl;
						cout<<"20."<<"   "<<p20<<"    Locion Corporal Cetaphil        1 Frasco0          X473 Ml\t      118.960"<<endl;
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"\nDIGITA EL NUMERO DEL PRODUCTO QUE DESEAS ADQUIRIR ";
						cin>>productos;
						//final de los productos zona norte
					    cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						//inicio de la facturacion zona norte
						if(productos==1){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Suspension Oral Enterogermina 5 mL Sanofi Caja x 10 Frascos"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p1<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p1=p1-n;
							valor=61200*n;
							if(n>p1){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p1=p1+n;
							}
							}while(n>p1);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $61200"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							//producto numero 2
						}else if(productos==2){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Tratamiento Capilar Minoxidil 5% Colmed Frasco X100 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p2<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p2=p2-n;
							valor=51200*n;
							if(n>p2){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p2=p2+n;
							}
							}while(n>p2);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $51200"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 3
						}else if(productos==3){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Pedialyte Max 60 Uva Frasco x500 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p3<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p3=p3-n;
							valor=7040*n;
							if(n>p3){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p3=p3+n;
							}
							}while(n>p3);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $7040"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 4
						}else if(productos==4){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Enterogermina Plus 5 mL Sanofi Caja x5 Frascos"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p4<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p4=p4-n;
							valor=68320*n;
							if(n>p4){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p4=p4+n;
							}
							}while(n>p4);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $68320"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 5
						}else if(productos==5){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Gel Neutrogena Hydro Boost 1 Frasco x50 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p5<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p5=p5-n;
							valor=54229*n;
							if(n>p5){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p5=p5+n;
							}
							}while(n>p5);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $54229"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 6
						}else if(productos==6){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Pedialyte 60 Manzana Frasco x500 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p6<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{							
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p6=p6-n;
							valor=7040*n;
							if(n>p6){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p6=p6+n;
							}
							}while(n>p6);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $7040"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 7
						}else if(productos==7){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Alimento Glucerna Vainilla 1 Frasco X400 G"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p7<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{							
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p7=p7-n;
							valor=58408*n;
							if(n>p7){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p7=p7+n;
							}
							}while(n>p7);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $58408"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 8
						}else if(productos==8){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Lubriderm Men 1 Frasco x400 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p8<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p8=p8-n;
							valor=35020*n;
							if(n>p8){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p8=p8+n;
							}
							}while(n>p8);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $35020"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
						
							//producto numero 9
						}else if(productos==9){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Pedialyte Max 60 Uva Frasco x500 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p9<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p9=p9-n;
							valor=14024*n;
							if(n>p9){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p9=p9+n;
							}
							}while(n>p9);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $14024"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 10
						}else if(productos==10){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Corporal Lubriderm 1 Frasco x200 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p10<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p10=p10-n;
							valor=20655*n;
							if(n>p10){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p10=p10+n;
							}
							}while(n>p10);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $20655"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 11
						}else if(productos==11){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema para Peinar Johnsons 1 Frasco x200 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p11<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p11=p11-n;
							valor=12835*n;
							if(n>p11){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p11=p11+n;
							}
							}while(n>p11);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $12835"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 12
						}else if(productos==12){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Defender LOreal Paris 1 Frasco x40 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p12<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p12=p12-n;
							valor=42976*n;
							if(n>p12){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p12=p12+n;
							}
							}while(n>p12);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $42976"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 13
						}else if(productos==13){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Acido Hialuronico Revitalift 1.5% Gotero x30 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p13<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{								
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p13=p13-n;
							valor=62000*n;
							if(n>p13){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p13=p13+n;
							}
							}while(n>p13);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $62000"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 14
						}else if(productos==14){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x400 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p14<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p14=p14-n;
							valor=16320*n;
							if(n>p14){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p14=p14+n;
							}
							}while(n>p14);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $16320"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 15
						}else if(productos==15){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x100 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p15<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p15=p15-n;
							valor=8128*n;
							if(n>p15){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p15=p15+n;
							}
							}while(n>p15);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $8128"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 15
						}else if(productos==16){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Facial Revitalift 1 Tubo x25 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p16<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p16=p16-n;
							valor=26560*n;
							if(n>p16){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p16=p16+n;
							}
							}while(n>p16);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $26560"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 17
						}else if(productos==17){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Caladerm Clear Plus 1 Frasco x120 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p17<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p17=p17-n;
							valor=9840*n;
							if(n>p17){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p17=p17+n;
							}
							}while(n>p17);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $9840"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 18
						}else if(productos==18){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Protector Solar Cetaphil 1 Tubo X50 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p18<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p18=p18-n;
							valor=82400*n;
							if(n>p18){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p18=p18+n;
							}
							}while(n>p18);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $82400"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 19
						}else if(productos==19){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Caladerm 1 Frasco X120 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p19<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p19=p19-n;
							valor=15920*n;
							if(n>p19){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p19=p19+n;
							}
							}while(n>19);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $15920"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 20
						}else if(productos==20){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Corporal Cetaphil 1 Frasco0 X473 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p20<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p20=p20-n;
							valor=118960*n;
							if(n>p20){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p20=p20+n;
							}
							}while(n>p20);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $118960"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"oprime cualquier tecla: ";
							cin>>w;
							system("cls");
						}else
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"oprime cualquier tecla: ";
						cin>>w;
						system("cls");
						//fin de la facturacion zona norte
					break;
				}
				break;
				//fin de la zona de bogota
				//tienda con sus respectivos productos de medellin
			case 2:
				//inicio ciudad de medellin
				cout<<"\n\t\t\t\t\tACABAS DE ELEGIR LA CIUDAD DE MEDELLIN"<<endl;
				cout<<"\t\tPORFAVOR DIGITA CUALQUIERA DE LAS DOS OPCIONES QUE TENEMOS DISPONIBLES AHORAMISMO"<<endl;
				cout<<"\tESTAS OPCIONES TE LLEVARAN A NUETRA TIENDA VIRTUAL, EN LA CUAL PODRAS HACER LA COMPRA QUE NECESITES"<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\n1.ZONA SUR"<<endl;
				cout<<"2.ZONA NORTE"<<endl;
				cout<<"0.SALIR"<<endl;
				cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
				cin>>opc2;
				switch(opc2){
					//tienda con sus respectivos productos medellin
					case 1:
					system("cls");
					//inicio lista de productos zona sur
					cout<<"\n\t\t\t\tESTA ES NUESTRA TIENDA VIRTUAL DE MEDELLIN ZONA SUR"<<endl;
							cout<<"\t\t\tENSEGUIDA TE MOSTRAREMOS LA LISTA DE PRODUCTOS DE NUESTRA TIENDA"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nCOD   UDS   NOMB.PROD\t\t\t    CANT\t       CONT.NET\t      VALxUDS"<<endl;
							cout<<"1."<<"    "<<d1<<"    Dolex Gripa                     1 Caja             X12tabs\t      16.500"<<endl;
							cout<<"2."<<"    "<<d2<<"    Mieltertos Masticable           1 Paquete          x4Past         2.450"<<endl;
							cout<<"3."<<"    "<<d3<<"    Strepsils Intensive Miel        1 Caja             x16tabs\t      26.400"<<endl;
							cout<<"4."<<"    "<<d4<<"    Electrolit Suero Rehidratante   1 Frasco           x625ml\t      8.400"<<endl;
							cout<<"5."<<"    "<<d5<<"    Engystol Heel                   1 caja             x50Cpmds\t      79.400"<<endl;
							cout<<"6."<<"    "<<d6<<"    Dolorsin Fem Ibuprofeno         1 caja             x4Capls\t      7.950"<<endl;
							cout<<"7."<<"    "<<d7<<"    Congestex Gripa 12h             1 Caja             x10Capls\t      16.150"<<endl;
							cout<<"8."<<"    "<<d8<<"    Postday Levonorgestrel          1 Caja             x1tabs\t      14.670"<<endl;
							cout<<"9."<<"    "<<d9<<"    Azitromicina MK                 1 Caja             x3tabs\t      14.250"<<endl;
							cout<<"10."<<"   "<<d10<<"    Amoxicilina MK                  1 Caja             x10Capls\t      6.250"<<endl;
							cout<<"11."<<"   "<<d11<<"    Allegra Pediatrico              1 Frasco           x150ml\t      59.605"<<endl;
							cout<<"12."<<"   "<<d12<<"    Acetaminofen Ag                 1 Caja             x20tabs\t      5.160"<<endl;
							cout<<"13."<<"   "<<d13<<"    Cetirizina MK                   1 Fraccion         x10tabs\t      7.550"<<endl;
							cout<<"14."<<"   "<<d14<<"    Ibuprofeno Genfar               1 Fraccion         x10tabs\t      3.400"<<endl;
							cout<<"15."<<"   "<<d15<<"    Loratadina MK                   1 Caja             x10tabs\t      4.650"<<endl;
							cout<<"16."<<"   "<<d16<<"    Naproxeno Genfar                1 Caja             x10tabs\t      8.457"<<endl;
							cout<<"17."<<"   "<<d17<<"    Bellaface Dienogest             1 Caja             x21tabs\t      14.202"<<endl;
							cout<<"18."<<"   "<<d18<<"    Fluimucil N Acetilcisteina      1 Caja             x10Sobrs       28.950"<<endl;
							cout<<"19."<<"   "<<d19<<"    Vitamina C                      1 Fraccion         x10tabs\t      4.400"<<endl;
							cout<<"20."<<"   "<<d20<<"    Omeprazol Genfar                1 Caja             x10Capls\t      4.450"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nDIGITA EL NUMERO DEL PRODUCTO QUE DESEAS ADQUIRIR ";
							cin>>productos;
							//final de los productos zona sur
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							//inicio de la facturacion zona sur
							//producto numero 1
							if(productos==1){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolex Gripa 1 Caja X12tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d1<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d1=d1-n;
								valor=16500*n;
								if(n>d1){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d1=d1+n;
								}
								}while(n>d1);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16500"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 2
							}else if(productos==2){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Mieltertos Masticable 1 Paquete x4Past"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d2<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d2=d2-n;
								valor=2450*n;
								if(n>d2){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d2=d2+n;
								}
								}while(n>d2);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $2450"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 3
							}else if(productos==3){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Strepsils Intensive Miel 1 Caja x16tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d3<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d3=d3-n;
								valor=26400*n;
								if(n>d3){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d3=d3+n;
								}
								}while(n>d3);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $26400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 4
							}else if(productos==4){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Suero Rehidratante 1 Frasco x625ml"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d4<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d4=d4-n;
								valor=8400*n;
								if(n>d4){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d4=d4+n;
								}
								}while(n>d4);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $8400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 5
							}else if(productos==5){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Engystol Heel 1 caja x50Cpmds"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d5<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d5=d5-n;
								valor=79400*n;
								if(n>d5){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d5=d5+n;
								}
								}while(n>d5);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $79400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 6
							}else if(productos==6){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolorsin Fem Ibuprofeno 1 caja x4Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d6<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d6=d6-n;
								valor=7950*n;
								if(n>d6){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d6=d6+n;
								}
								}while(n>d6);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $7950"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 7
							}else if(productos==7){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Congestex Gripa 12h 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d7<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{						
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d7=d7-n;
								valor=16150*n;
								if(n>d7){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d7=d7+n;
								}
								}while(n>d7);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16150"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 8
							}else if(productos==8){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Postday Levonorgestrel 1 Caja x1tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d8<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d8=d8-n;
								valor=14670*n;
								if(n>d8){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d8=d8+n;
								}
								}while(n>d8);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14670"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 9
							}else if(productos==9){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Azitromicina MK 1 Caja x3tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d9<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d9=d9-n;
								valor=14250*n;
								if(n>d9){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d9=d9+n;
								}
								}while(n>d9);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 10
							}else if(productos==10){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Amoxicilina MK 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d10<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d10=d10-n;
								valor=6250*n;
								if(n>d10){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d10=d10+n;
								}
								}while(n>d10);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $6250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 11
							}else if(productos==11){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Allegra Pediatrico 1 Frasco x150ml"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d11<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d11=d11-n;
								valor=59605*n;
								if(n>d11){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d11=d11+n;
								}
								}while(n>d11);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $59605"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 12
							}else if(productos==12){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Acetaminofen Ag 1 Caja x20tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d12<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d12=d12-n;
								valor=5160*n;
								if(n>d12){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d12=d12+n;
								}
								}while(n>d12);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $5160"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 13
							}else if(productos==13){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Cetirizina MK 1 Fraccion x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d13<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d13=d13-n;
								valor=7550*n;
								if(n>d13){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d13=d13+n;
								}
								}while(n>d13);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $7550"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//prosucto numero 14
							}else if(productos==14){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Ibuprofeno Genfar 1 Fraccion x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d14<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d14=d14-n;
								valor=3400*n;
								if(n>d14){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d14=d14+n;
								}
								}while(n<d14);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $3400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 15
							}else if(productos==15){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Loratadina MK 1 Caja x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d15<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d15=d15-n;
								valor=4650*n;
								if(n>d15){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d15=d15+n;
								}
								}while(n>d15);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $4650"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 16
							}else if(productos==16){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Naproxeno Genfar 1 Caja x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d16<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d16=d16-n;
								valor=8457*n;
								if(n>d16){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d16=d16+n;
								}
								}while(n>d16);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $8457"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 17
							}else if(productos==17){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Bellaface Dienogest 1 Caja x21tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d17<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d17=d17-n;
								valor=14202*n;
								if(n>d17){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d17=d17+n;
								}
								}while(n>d17);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14202"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 18
							}else if(productos==18){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Fluimucil N Acetilcisteina 1 Caja x10Sobrs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d18<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d18=d18-n;
								valor=28950*n;
								if(n>d18){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d18=d18+n;
								}
								}while(n>d18);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $28950"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 19
							}else if(productos==19){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Vitamina C 1 Fraccion x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d19<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d19=d19-n;
								valor=4400*n;
								if(n>d19){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d19=d19+n;
								}
								}while(n>19);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $4400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 20
							}else if(productos==20){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Omeprazol Genfar 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d20<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d20=d20-n;
								valor=4450*n;
								if(n>d20){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d20=d20+n;
								}
								}while(n>d20);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $4450"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
							}else
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"oprime cualquier tecla: ";
							cin>>w;
							system("cls");
							//fin facturacion zona sur
							break;
							case 2:
							system("cls");
							//inicio lista de productos zona norte
							cout<<"\n\t\t\t\tESTA ES NUESTRA TIENDA VIRTUAL DE MEDELLIN ZONA NORTE"<<endl;
							cout<<"\t\t\tENSEGUIDA TE MOSTRAREMOS LA LISTA DE PRODUCTOS DE NUESTRA TIENDA"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nCOD   UDS   NOMB.PROD\t\t\t    CANT\t       CONT.NET\t      VALxUDS"<<endl;
							cout<<"1."<<"    "<<d1<<"    Dolex Gripa                     1 Caja             X12tabs\t      16.500"<<endl;
							cout<<"2."<<"    "<<d2<<"    Mieltertos Masticable           1 Paquete          x4Past         2.450"<<endl;
							cout<<"3."<<"    "<<d3<<"    Strepsils Intensive Miel        1 Caja             x16tabs\t      26.400"<<endl;
							cout<<"4."<<"    "<<d4<<"    Electrolit Suero Rehidratante   1 Frasco           x625ml\t      8.400"<<endl;
							cout<<"5."<<"    "<<d5<<"    Engystol Heel                   1 caja             x50Cpmds\t      79.400"<<endl;
							cout<<"6."<<"    "<<d6<<"    Dolorsin Fem Ibuprofeno         1 caja             x4Capls\t      7.950"<<endl;
							cout<<"7."<<"    "<<d7<<"    Congestex Gripa 12h             1 Caja             x10Capls\t      16.150"<<endl;
							cout<<"8."<<"    "<<d8<<"    Postday Levonorgestrel          1 Caja             x1tabs\t      14.670"<<endl;
							cout<<"9."<<"    "<<d9<<"    Azitromicina MK                 1 Caja             x3tabs\t      14.250"<<endl;
							cout<<"10."<<"   "<<d10<<"    Amoxicilina MK                  1 Caja             x10Capls\t      6.250"<<endl;
							cout<<"11."<<"   "<<d11<<"    Allegra Pediatrico              1 Frasco           x150ml\t      59.605"<<endl;
							cout<<"12."<<"   "<<d12<<"    Acetaminofen Ag                 1 Caja             x20tabs\t      5.160"<<endl;
							cout<<"13."<<"   "<<d13<<"    Cetirizina MK                   1 Fraccion         x10tabs\t      7.550"<<endl;
							cout<<"14."<<"   "<<d14<<"    Ibuprofeno Genfar               1 Fraccion         x10tabs\t      3.400"<<endl;
							cout<<"15."<<"   "<<d15<<"    Loratadina MK                   1 Caja             x10tabs\t      4.650"<<endl;
							cout<<"16."<<"   "<<d16<<"    Naproxeno Genfar                1 Caja             x10tabs\t      8.457"<<endl;
							cout<<"17."<<"   "<<d17<<"    Bellaface Dienogest             1 Caja             x21tabs\t      14.202"<<endl;
							cout<<"18."<<"   "<<d18<<"    Fluimucil N Acetilcisteina      1 Caja             x10Sobrs       28.950"<<endl;
							cout<<"19."<<"   "<<d19<<"    Vitamina C                      1 Fraccion         x10tabs\t      4.400"<<endl;
							cout<<"20."<<"   "<<d20<<"    Omeprazol Genfar                1 Caja             x10Capls\t      4.450"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nDIGITA EL NUMERO DEL PRODUCTO QUE DESEAS ADQUIRIR ";
							cin>>productos;
							//final de los productos zona norte
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							//inicio de la facturacion zona norte
							if(productos==1){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolex Gripa 1 Caja X12tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d1<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d1=d1-n;
								valor=16500*n;
								if(n>d1){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d1=d1+n;
								}
								}while(n>d1);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16500"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 2
							}else if(productos==2){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Mieltertos Masticable 1 Paquete x4Past"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d2<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d2=d2-n;
								valor=2450*n;
								if(n>d2){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d2=d2+n;
								}
								}while(n>d2);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $2450"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 3
							}else if(productos==3){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Strepsils Intensive Miel 1 Caja x16tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d3<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d3=d3-n;
								valor=26400*n;
								if(n>d3){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d3=d3+n;
								}
								}while(n>d3);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $26400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 4
							}else if(productos==4){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Suero Rehidratante 1 Frasco x625ml"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d4<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d4=d4-n;
								valor=8400*n;
								if(n>d4){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d4=d4+n;
								}
								}while(n>d4);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $8400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 5
							}else if(productos==5){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Engystol Heel 1 caja x50Cpmds"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d5<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d5=d5-n;
								valor=79400*n;
								if(n>d5){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d5=d5+n;
								}
								}while(n>d5);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $79400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 6
							}else if(productos==6){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolorsin Fem Ibuprofeno 1 caja x4Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d6<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d6=d6-n;
								valor=7950*n;
								if(n>d6){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d6=d6+n;
								}
								}while(n>d6);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $7950"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 7
							}else if(productos==7){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Congestex Gripa 12h 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d7<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{						
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d7=d7-n;
								valor=16150*n;
								if(n>d7){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d7=d7+n;
								}
								}while(n>d7);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16150"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 8
							}else if(productos==8){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Postday Levonorgestrel 1 Caja x1tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d8<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d8=d8-n;
								valor=14670*n;
								if(n>d8){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d8=d8+n;
								}
								}while(n>d8);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14670"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 9
							}else if(productos==9){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Azitromicina MK 1 Caja x3tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d9<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d9=d9-n;
								valor=14250*n;
								if(n>d9){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d9=d9+n;
								}
								}while(n>d9);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 10
							}else if(productos==10){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Amoxicilina MK 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d10<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d10=d10-n;
								valor=6250*n;
								if(n>d10){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d10=d10+n;
								}
								}while(n>d10);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $6250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 11
							}else if(productos==11){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Allegra Pediatrico 1 Frasco x150ml"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d11<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d11=d11-n;
								valor=59605*n;
								if(n>d11){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d11=d11+n;
								}
								}while(n>d11);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $59605"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 12
							}else if(productos==12){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Acetaminofen Ag 1 Caja x20tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d12<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d12=d12-n;
								valor=5160*n;
								if(n>d12){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d12=d12+n;
								}
								}while(n>d12);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $5160"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 13
							}else if(productos==13){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Cetirizina MK 1 Fraccion x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d13<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d13=d13-n;
								valor=7550*n;
								if(n>d13){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d13=d13+n;
								}
								}while(n>d13);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $7550"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//prosucto numero 14
							}else if(productos==14){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Ibuprofeno Genfar 1 Fraccion x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d14<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d14=d14-n;
								valor=3400*n;
								if(n>d14){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d14=d14+n;
								}
								}while(n<d14);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $3400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 15
							}else if(productos==15){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Loratadina MK 1 Caja x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d15<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d15=d15-n;
								valor=4650*n;
								if(n>d15){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d15=d15+n;
								}
								}while(n>d15);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $4650"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 16
							}else if(productos==16){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Naproxeno Genfar 1 Caja x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d16<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d16=d16-n;
								valor=8457*n;
								if(n>d16){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d16=d16+n;
								}
								}while(n>d16);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $8457"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 17
							}else if(productos==17){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Bellaface Dienogest 1 Caja x21tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d17<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d17=d17-n;
								valor=14202*n;
								if(n>d17){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d17=d17+n;
								}
								}while(n>d17);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14202"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 18
							}else if(productos==18){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Fluimucil N Acetilcisteina 1 Caja x10Sobrs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d18<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d18=d18-n;
								valor=28950*n;
								if(n>d18){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d18=d18+n;
								}
								}while(n>d18);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $28950"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 19
							}else if(productos==19){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Vitamina C 1 Fraccion x10tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d19<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d19=d19-n;
								valor=4400*n;
								if(n>d19){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d19=d19+n;
								}
								}while(n>19);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $4400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 20
							}else if(productos==20){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Omeprazol Genfar 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d20<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d20=d20-n;
								valor=4450*n;
								if(n>d20){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d20=d20+n;
								}
								}while(n>d20);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $4450"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
							}else
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"oprime cualquier tecla: ";
							cin>>w;
							system("cls");
							break;
						}
							
			break;
			case 3:
				cout<<"\n\t\t\t\t\tACABAS DE ELEGIR LA CIUDAD DE BARRANQUILLA"<<endl;
				cout<<"\t\tPORFAVOR DIGITA CUALQUIERA DE LAS DOS OPCIONES QUE TENEMOS DISPONIBLES AHORAMISMO"<<endl;
				cout<<"\tESTAS OPCIONES TE LLEVARAN A NUETRA TIENDA VIRTUAL, EN LA CUAL PODRAS HACER LA COMPRA QUE NECESITES"<<endl;
				cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
				cout<<"\n1.ZONA SUR"<<endl;
				cout<<"2.ZONA NORTE"<<endl;
				cout<<"0.SALIR"<<endl;
				cout<<"\n------------------------------------------------------------------------------------------------------------------------"<<endl;
				cin>>opc2;
				system("cls");
				switch(opc2){
					//inicio ciudad de barranquilla
					case 1:
						//inicio lista de productos zona sur
						cout<<"\n\t\t\t\tESTA ES NUESTRA TIENDA VIRTUAL DE BARRANQUILLA ZONA SUR"<<endl;
							cout<<"\t\t\tENSEGUIDA TE MOSTRAREMOS LA LISTA DE PRODUCTOS DE NUESTRA TIENDA"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nCOD   UDS   NOMB.PROD\t\t\t    CANT\t       CONT.NET\t      VALxUDS"<<endl;
							cout<<"1."<<"    "<<d1<<"    Dolex Gripa                     1 Caja             X12tabs\t      16.500"<<endl;
							cout<<"2."<<"    "<<d2<<"    Mieltertos Masticable           1 Paquete          x4Past         2.450"<<endl;
							cout<<"3."<<"    "<<d3<<"    Strepsils Intensive Miel        1 Caja             x16tabs\t      26.400"<<endl;
							cout<<"4."<<"    "<<d4<<"    Electrolit Suero Rehidratante   1 Frasco           x625ml\t      8.400"<<endl;
							cout<<"5."<<"    "<<d5<<"    Engystol Heel                   1 caja             x50Cpmds\t      79.400"<<endl;
							cout<<"6."<<"    "<<d6<<"    Dolorsin Fem Ibuprofeno         1 caja             x4Capls\t      7.950"<<endl;
							cout<<"7."<<"    "<<d7<<"    Congestex Gripa 12h             1 Caja             x10Capls\t      16.150"<<endl;
							cout<<"8."<<"    "<<d8<<"    Postday Levonorgestrel          1 Caja             x1tabs\t      14.670"<<endl;
							cout<<"9."<<"    "<<d9<<"    Azitromicina MK                 1 Caja             x3tabs\t      14.250"<<endl;
							cout<<"10."<<"   "<<d10<<"    Amoxicilina MK                  1 Caja             x10Capls\t      6.250"<<endl;
							cout<<"11."<<"   "<<d11<<"    Allegra Pediatrico              1 Frasco           x150ml\t      59.605"<<endl;
							cout<<"12."<<"   "<<d12<<"    Acetaminofen Ag                 1 Caja             x20tabs\t      5.160"<<endl;
							cout<<"13."<<"   "<<d13<<"    Cetirizina MK                   1 Fraccion         x10tabs\t      7.550"<<endl;
							cout<<"14."<<"   "<<d14<<"    Ibuprofeno Genfar               1 Fraccion         x10tabs\t      3.400"<<endl;
							cout<<"15."<<"   "<<d15<<"    Loratadina MK                   1 Caja             x10tabs\t      4.650"<<endl;
							cout<<"16."<<"   "<<d16<<"    Naproxeno Genfar                1 Caja             x10tabs\t      8.457"<<endl;
							cout<<"17."<<"   "<<d17<<"    Bellaface Dienogest             1 Caja             x21tabs\t      14.202"<<endl;
							cout<<"18."<<"   "<<d18<<"    Fluimucil N Acetilcisteina      1 Caja             x10Sobrs       28.950"<<endl;
							cout<<"19."<<"   "<<d19<<"    Vitamina C                      1 Fraccion         x10tabs\t      4.400"<<endl;
							cout<<"20."<<"   "<<d20<<"    Omeprazol Genfar                1 Caja             x10Capls\t      4.450"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nDIGITA EL NUMERO DEL PRODUCTO QUE DESEAS ADQUIRIR ";
							cin>>productos;
							//final de los productos zona sur
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							//inicio de la facturacion zona sur
							if(productos==1){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolex Gripa 1 Caja X12tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d1<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d1=d1-n;
								valor=16500*n;
								if(n>d1){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d1=d1+n;
								}
								}while(n>d1);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16500"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 2
							}else if(productos==2){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Mieltertos Masticable 1 Paquete x4Past"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d2<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d2=d2-n;
								valor=2450*n;
								if(n>d2){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d2=d2+n;
								}
								}while(n>d2);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $2450"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 3
							}else if(productos==3){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Strepsils Intensive Miel 1 Caja x16tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d3<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d3=d3-n;
								valor=26400*n;
								if(n>d3){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d3=d3+n;
								}
								}while(n>d3);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $26400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 4
							}else if(productos==4){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Suero Rehidratante 1 Frasco x625ml"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d4<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d4=d4-n;
								valor=8400*n;
								if(n>d4){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d4=d4+n;
								}
								}while(n>d4);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $8400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 5
							}else if(productos==5){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Engystol Heel 1 caja x50Cpmds"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d5<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d5=d5-n;
								valor=79400*n;
								if(n>d5){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d5=d5+n;
								}
								}while(n>d5);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $79400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 6
							}else if(productos==6){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolorsin Fem Ibuprofeno 1 caja x4Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d6<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d6=d6-n;
								valor=7950*n;
								if(n>d6){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d6=d6+n;
								}
								}while(n>d6);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $7950"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 7
							}else if(productos==7){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Congestex Gripa 12h 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d7<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{						
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d7=d7-n;
								valor=16150*n;
								if(n>d7){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d7=d7+n;
								}
								}while(n>d7);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16150"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 8
							}else if(productos==8){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Postday Levonorgestrel 1 Caja x1tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d8<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d8=d8-n;
								valor=14670*n;
								if(n>d8){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d8=d8+n;
								}
								}while(n>d8);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14670"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 9
							}else if(productos==9){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Azitromicina MK 1 Caja x3tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d9<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d9=d9-n;
								valor=14250*n;
								if(n>d9){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d9=d9+n;
								}
								}while(n>d9);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 10
							}else if(productos==10){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Amoxicilina MK 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d10<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d10=d10-n;
								valor=6250*n;
								if(n>d10){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d10=d10+n;
								}
								}while(n>d10);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $6250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 11
							}else if(productos==11){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema para Peinar Johnsons 1 Frasco x200 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p11<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p11=p11-n;
							valor=12835*n;
							if(n>p11){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p11=p11+n;
							}
							}while(n>p11);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $12835"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 12
						}else if(productos==12){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Defender LOreal Paris 1 Frasco x40 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p12<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p12=p12-n;
							valor=42976*n;
							if(n>p12){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p12=p12+n;
							}
							}while(n>p12);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $42976"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 13
						}else if(productos==13){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Acido Hialuronico Revitalift 1.5% Gotero x30 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p13<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{								
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p13=p13-n;
							valor=62000*n;
							if(n>p13){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p13=p13+n;
							}
							}while(n>p13);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $62000"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 14
						}else if(productos==14){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x400 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p14<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p14=p14-n;
							valor=16320*n;
							if(n>p14){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p14=p14+n;
							}
							}while(n>p14);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $16320"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 15
						}else if(productos==15){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x100 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p15<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p15=p15-n;
							valor=8128*n;
							if(n>p15){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p15=p15+n;
							}
							}while(n>p15);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $8128"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
						
							//producto numero 15
						}else if(productos==16){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Facial Revitalift 1 Tubo x25 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p16<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p16=p16-n;
							valor=26560*n;
							if(n>p16){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p16=p16+n;
							}
							}while(n>p16);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $26560"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 17
						}else if(productos==17){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Caladerm Clear Plus 1 Frasco x120 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p17<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p17=p17-n;
							valor=9840*n;
							if(n>p17){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p17=p17+n;
							}
							}while(n>p17);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $9840"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 18
						}else if(productos==18){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Protector Solar Cetaphil 1 Tubo X50 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p18<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p18=p18-n;
							valor=82400*n;
							if(n>p18){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p18=p18+n;
							}
							}while(n>p18);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $82400"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 19
						}else if(productos==19){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Caladerm 1 Frasco X120 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p19<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p19=p19-n;
							valor=15920*n;
							if(n>p19){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p19=p19+n;
							}
							}while(n>19);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $15920"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 20
						}else if(productos==20){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Corporal Cetaphil 1 Frasco0 X473 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p20<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p20=p20-n;
							valor=118960*n;
							if(n>p20){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p20=p20+n;
							}
							}while(n>p20);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $118960"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
						}else
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"oprime cualquier tecla: ";
						cin>>w;
						system("cls");
							//fin facturacion zona sur
					break;
					case 2:
						//inicio lista de productos zona norte
						cout<<"\n\t\t\t\tESTA ES NUESTRA TIENDA VIRTUAL DE BARRANQUILLA ZONA NORTE"<<endl;
							cout<<"\t\t\tENSEGUIDA TE MOSTRAREMOS LA LISTA DE PRODUCTOS DE NUESTRA TIENDA"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nCOD   UDS   NOMB.PROD\t\t\t    CANT\t       CONT.NET\t      VALxUDS"<<endl;
							cout<<"1."<<"    "<<d1<<"    Dolex Gripa                     1 Caja             X12tabs\t      16.500"<<endl;
							cout<<"2."<<"    "<<d2<<"    Mieltertos Masticable           1 Paquete          x4Past         2.450"<<endl;
							cout<<"3."<<"    "<<d3<<"    Strepsils Intensive Miel        1 Caja             x16tabs\t      26.400"<<endl;
							cout<<"4."<<"    "<<d4<<"    Electrolit Suero Rehidratante   1 Frasco           x625ml\t      8.400"<<endl;
							cout<<"5."<<"    "<<d5<<"    Engystol Heel                   1 caja             x50Cpmds\t      79.400"<<endl;
							cout<<"6."<<"    "<<d6<<"    Dolorsin Fem Ibuprofeno         1 caja             x4Capls\t      7.950"<<endl;
							cout<<"7."<<"    "<<d7<<"    Congestex Gripa 12h             1 Caja             x10Capls\t      16.150"<<endl;
							cout<<"8."<<"    "<<d8<<"    Postday Levonorgestrel          1 Caja             x1tabs\t      14.670"<<endl;
							cout<<"9."<<"    "<<d9<<"    Azitromicina MK                 1 Caja             x3tabs\t      14.250"<<endl;
							cout<<"10."<<"   "<<d10<<"    Amoxicilina MK                  1 Caja             x10Capls\t      6.250"<<endl;
							cout<<"11."<<"   "<<d11<<"    Allegra Pediatrico              1 Frasco           x150ml\t      59.605"<<endl;
							cout<<"12."<<"   "<<d12<<"    Acetaminofen Ag                 1 Caja             x20tabs\t      5.160"<<endl;
							cout<<"13."<<"   "<<d13<<"    Cetirizina MK                   1 Fraccion         x10tabs\t      7.550"<<endl;
							cout<<"14."<<"   "<<d14<<"    Ibuprofeno Genfar               1 Fraccion         x10tabs\t      3.400"<<endl;
							cout<<"15."<<"   "<<d15<<"    Loratadina MK                   1 Caja             x10tabs\t      4.650"<<endl;
							cout<<"16."<<"   "<<d16<<"    Naproxeno Genfar                1 Caja             x10tabs\t      8.457"<<endl;
							cout<<"17."<<"   "<<d17<<"    Bellaface Dienogest             1 Caja             x21tabs\t      14.202"<<endl;
							cout<<"18."<<"   "<<d18<<"    Fluimucil N Acetilcisteina      1 Caja             x10Sobrs       28.950"<<endl;
							cout<<"19."<<"   "<<d19<<"    Vitamina C                      1 Fraccion         x10tabs\t      4.400"<<endl;
							cout<<"20."<<"   "<<d20<<"    Omeprazol Genfar                1 Caja             x10Capls\t      4.450"<<endl;
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nDIGITA EL NUMERO DEL PRODUCTO QUE DESEAS ADQUIRIR ";
							cin>>productos;
							//final de los productos zona norte
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							//inicio de la facturacion zona norte
							if(productos==1){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolex Gripa 1 Caja X12tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d1<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d1=d1-n;
								valor=16500*n;
								if(n>d1){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d1=d1+n;
								}
								}while(n>d1);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16500"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 2
							}else if(productos==2){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Mieltertos Masticable 1 Paquete x4Past"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d2<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d2=d2-n;
								valor=2450*n;
								if(n>d2){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d2=d2+n;
								}
								}while(n>d2);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $2450"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 3
							}else if(productos==3){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Strepsils Intensive Miel 1 Caja x16tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d3<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d3=d3-n;
								valor=26400*n;
								if(n>d3){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d3=d3+n;
								}
								}while(n>d3);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $26400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 4
							}else if(productos==4){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Electrolit Suero Rehidratante 1 Frasco x625ml"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d4<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d4=d4-n;
								valor=8400*n;
								if(n>d4){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d4=d4+n;
								}
								}while(n>d4);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $8400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 5
							}else if(productos==5){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Engystol Heel 1 caja x50Cpmds"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d5<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d5=d5-n;
								valor=79400*n;
								if(n>d5){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d5=d5+n;
								}
								}while(n>d5);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $79400"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 6
							}else if(productos==6){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Dolorsin Fem Ibuprofeno 1 caja x4Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d6<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d6=d6-n;
								valor=7950*n;
								if(n>d6){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d6=d6+n;
								}
								}while(n>d6);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $7950"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 7
							}else if(productos==7){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Congestex Gripa 12h 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d7<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{						
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d7=d7-n;
								valor=16150*n;
								if(n>d7){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d7=d7+n;
								}
								}while(n>d7);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $16150"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 8
							}else if(productos==8){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Postday Levonorgestrel 1 Caja x1tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d8<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d8=d8-n;
								valor=14670*n;
								if(n>d8){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d8=d8+n;
								}
								}while(n>d8);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14670"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 9
							}else if(productos==9){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Azitromicina MK 1 Caja x3tabs"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d9<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d9=d9-n;
								valor=14250*n;
								if(n>d9){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d9=d9+n;
								}
								}while(n>d9);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $14250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 10
							}else if(productos==10){
								cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Amoxicilina MK 1 Caja x10Capls"<<endl;
								cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<d10<<endl;
								cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
								cin>>nom;
								cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
								cin>>ced;
								do{							
								cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
								cin>>n;
								d10=d10-n;
								valor=6250*n;
								if(n>d10){
									cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
									d10=d10+n;
								}
								}while(n>d10);
								cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
								cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
								cout<<"La Cedula Ingresada es: "<<ced<<endl;
								cout<<"El Valor por unidad del produto es de: $6250"<<endl;
								cout<<"El valor de tu compra total es de: $"<<valor<<endl;
								
								//producto numero 11
							}else if(productos==11){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema para Peinar Johnsons 1 Frasco x200 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p11<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p11=p11-n;
							valor=12835*n;
							if(n>p11){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p11=p11+n;
							}
							}while(n>p11);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $12835"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 12
						}else if(productos==12){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Defender LOreal Paris 1 Frasco x40 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p12<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p12=p12-n;
							valor=42976*n;
							if(n>p12){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p12=p12+n;
							}
							}while(n>p12);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $42976"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 13
						}else if(productos==13){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Acido Hialuronico Revitalift 1.5% Gotero x30 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p13<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{								
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p13=p13-n;
							valor=62000*n;
							if(n>p13){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p13=p13+n;
							}
							}while(n>p13);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $62000"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 14
						}else if(productos==14){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x400 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p14<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p14=p14-n;
							valor=16320*n;
							if(n>p14){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p14=p14+n;
							}
							}while(n>p14);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $16320"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 15
						}else if(productos==15){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Agua Micelar Garnier 1 Frasco x100 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p15<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p15=p15-n;
							valor=8128*n;
							if(n>p15){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p15=p15+n;
							}
							}while(n>p15);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $8128"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 15
						}else if(productos==16){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Crema Facial Revitalift 1 Tubo x25 mL"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p16<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p16=p16-n;
							valor=26560*n;
							if(n>p16){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p16=p16+n;
							}
							}while(n>p16);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $26560"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 17
						}else if(productos==17){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Caladerm Clear Plus 1 Frasco x120 g"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p17<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p17=p17-n;
							valor=9840*n;
							if(n>p17){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p17=p17+n;
							}
							}while(n>p17);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $9840"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 18
						}else if(productos==18){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Protector Solar Cetaphil 1 Tubo X50 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p18<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p18=p18-n;
							valor=82400*n;
							if(n>p18){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p18=p18+n;
							}
							}while(n>p18);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $82400"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 19
						}else if(productos==19){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Caladerm 1 Frasco X120 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p19<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p19=p19-n;
							valor=15920*n;
							if(n>p19){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p19=p19+n;
							}
							}while(n>19);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $15920"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
							//producto numero 20
						}else if(productos==20){
							cout<<"ELPRODUCTO QUE ACABAS DE ELEGIR ES: Locion Corporal Cetaphil 1 Frasco0 X473 Ml"<<endl;
							cout<<"EN ESTE MOMENTO DE ESTE PRODUCTO CONTAMOS CON UNA EXISTENCIA DE: "<<p20<<endl;
							cout<<"PORFAVOR DIGITA TU NOMBRE COMPLETO(Porfavor rellenar los espacios con _ ): ";
							cin>>nom;
							cout<<"PORFAVOR DIGITA TU NUMERO DE CEDULA: "<<endl;
							cin>>ced;
							do{						
							cout<<"PORFAVOR DIGITA EL NUMERO DE ESTE PRODUCTO QUE DESEAS LLEVAR: ";
							cin>>n;
							p20=p20-n;
							valor=118960*n;
							if(n>p20){
								cout<<"El numero ingresado de productos que quieres llevar supera el stock de este"<<endl;
								p20=p20+n;
							}
							}while(n>p20);
							cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
							cout<<"\nEl Nombre Digitado es: "<<nom<<endl;
							cout<<"La Cedula Ingresada es: "<<ced<<endl;
							cout<<"El Valor por unidad del produto es de: $118960"<<endl;
							cout<<"El valor de tu compra total es de: $"<<valor<<endl;
							
						}else
						cout<<"------------------------------------------------------------------------------------------------------------------------"<<endl;
						cout<<"oprime cualquier tecla: ";
						cin>>w;
						system("cls");
							//fin facturacion zona norte
					break;
				}
			break;
		}
	}while(opc!=0);
	return 0;
}