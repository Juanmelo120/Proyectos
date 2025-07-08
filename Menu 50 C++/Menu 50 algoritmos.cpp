#include<iostream>
#include<math.h>
using namespace std;
int main(){
	//variables globales
	long int opc,numeros[100],a,b,c,n;
	double n1,n2,n3,n4,res,res1,res2,res3,res4,res5,dll,eu,ps,f,lib,kilos,fac,R,H,v,y,ca,co,h,ed,ed2,ed3,mayor,menor,cont,cont1,cont2,cont3,nota[100],r,M,S,suma;
	//inicio del menu
	do{
		//inicio de opciones
		cout<<"1.Porcentaje de 3 notas y nota final"<<endl;
		cout<<"2.Porcentaje de 4 notas y nota final"<<endl;
		cout<<"3.Ciclo For del 100 al -2"<<endl;
		cout<<"4.Area y Volumen de un Cilindro"<<endl;
		cout<<"5.de 10 numeros ingresados solo mostrar positivos"<<endl;
		cout<<"6.de celsius a Fahrenheit"<<endl;
		cout<<"7.de centimetros a pulgadas"<<endl;
		cout<<"8.de dolares a euros"<<endl;
		cout<<"9.de dolares a pesos"<<endl;
		cout<<"10.de euros a dolares"<<endl;
		cout<<"11.de Fahrenheit a Celsius"<<endl;
		cout<<"12.de Km a Mtrs"<<endl;
		cout<<"13.de libras a kilogramos"<<endl;
		cout<<"14.de numeros a romanos"<<endl;
		cout<<"15.de pesos a dolares"<<endl;
		cout<<"16.del 0 al 100 con salto de 2"<<endl;
		cout<<"17.factorial de un numero"<<endl;
		cout<<"18.funcion y=5/3x+3/2x+8"<<endl;
		cout<<"19.hipotenusa de un triangulo rectangulo segun sus catetos"<<endl;
		cout<<"20.los meses del año segun su numero"<<endl;
		cout<<"21.mayor de dos numeros"<<endl;
		cout<<"22.mayor de edad con la fecha de nacimiento"<<endl;
		cout<<"23.mayor y menor de 5 numeros ingresados"<<endl;
		cout<<"24.mayor,menor o igual a 0"<<endl;
		cout<<"25.menor de dos numeros"<<endl;
		cout<<"26.multiplos del 2 y 3 del 1 al 100"<<endl;
		cout<<"27.Promedio de las notas que quiera ingresar el usuario"<<endl;
		cout<<"28.numeros impares del 1 al 100"<<endl;
		cout<<"29.numeros que hay entre 1 y el numero ingresado por el usuario"<<endl;
		cout<<"30.ordenar 3 numeros de mayor a menor"<<endl;
		cout<<"31.ordenar 3 numeros de menor a mayor"<<endl;
		cout<<"32.par o impar"<<endl;
		cout<<"33.perimetro y area de un circulo segun su radio"<<endl;
		cout<<"34.Porcentaje de gusto colores RGB"<<endl;
		cout<<"35.promedio de edades"<<endl;
		cout<<"36.residuo de divisiones entre 1 y 10 con el numero ingresado"<<endl;
		cout<<"37.Segundos, Minutos y Horas"<<endl;
		cout<<"38.Signos del zodiaco segun mes y dia"<<endl;
		cout<<"39.suma de los numeros entre el 1 y el numero ingresado"<<endl;
		cout<<"40.suma de numeros cualquiera"<<endl;
		cout<<"41.suma de numeros impares del 1 al 100"<<endl;
		cout<<"42.suma de todos los numeros pares del 1 al 100"<<endl;
		cout<<"43.suma del 20 al 50"<<endl;
		cout<<"44.Ultimo digito de un numero ingresado"<<endl;
		cout<<"45.volumen de una esfera segun su radio"<<endl;
		cin>>opc;
		cout<<"---------------------------------------------------------------------------------------------"<<endl;
		//final opciones
		switch(opc){
		//inicio de los casos
			case 1:
				cout<<"Digita tu primer nota: "<<endl;
				cin>>n1;
				cout<<"Digita tu segunda nota: "<<endl;
				cin>>n2;
				cout<<"Digita tu tercera nota: "<<endl;
				cin>>n3;
				res=n1*0.30;
				res2=n2*0.30;
				res3=n3*0.40;
				res4=res+res2+res3;
				cout<<"Tu nota final es de: "<<res4<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 2:
				cout<<"Digita tu primer nota: "<<endl;
				cin>>n1;
				cout<<"Digita tu segunda nota: "<<endl;
				cin>>n2;
				cout<<"Digita tu tercera nota: "<<endl;
				cin>>n3;
				cout<<"Digita tu cuarta nota: "<<endl;
				cin>>n4;
				res=n1*0.20;
				res2=n2*0.20;
				res3=n3*0.10;
				res5=n4*0.50;
				res4=res+res2+res3+res5;
				cout<<"Tu nota final es de: "<<res4<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 3:
				for(int i=100;i>=-2;i--){
				cout<<i<<endl;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 4:
				cout<<"Este programa te determina el area y volumen de un Cilindro"<<endl;
				cout<<"Digita el radio de tu cilindro: "<<endl;
				cin>>R;
				cout<<"Digita la altura de tu cilindro: "<<endl;
				cin>>H;
				a=(2*3.1416)*R*(H+R);
				v=(3.1416)*(pow(R,2))*H;
				cout<<"El Area de tu Cilindro es: "<<a<<endl;
				cout<<"El Volumen de tu Cilindro es: "<<v<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 5:
				for(int i=1;i<=10;i++){
				cout<<"digita 10 numeros para decirte cual es positivo: "<<endl;
				cin>>n;
				if(n>0){
					cout<<"--------------------------------------------------------------"<<endl;
					cout<<"el "<<n<<" es un numero positivo"<<endl;
					cout<<"--------------------------------------------------------------"<<endl;
				}
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 6:
				cout<<"Digita los grados en Celcius: ";
				cin>>c;
				res=(1.8*c)+32;
				cout<<"Tus grados en Fahrenheit son: "<<res<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 7:
				cout<<"Digita los centimetros que quieras: ";
    			cin>>n;
    			res=n/2.54;
    			cout<<"Tus centimetros ingresados, expresados en pulgadas es:  "<<res<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 8:
				cout<<"Digita los dolares que quieres pasar a euros: "<<endl;
				cin>>dll;
				eu=dll/1.08;
				cout<<"los euros son: "<<eu;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 9:
				cout<<"digita la cantidad en dolares para saber cuntos pesos son: "<<endl;
				cin>>dll;
				ps=dll*3800;
				cout<<"la cantidad en pesos es: "<<ps;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 10:
				cout<<"Digita los euros que quieres pasar a dolares: "<<endl;
				cin>>eu;
				dll=eu*1.08;
				cout<<"los dolares son: "<<dll;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 11:
				cout<<"Digita tus grados Fahrenheit: ";
				cin>>f;
				res=(f-32)/1.8;
				cout<<"Los grados pasados a celcius son: "<<res<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 12:
				cout<<"digita la velocidad en Km/h para comvertirla en M/s: "<<endl;
				cin>>v;
				res=v*1000;
				cout<<"la velocidad es: "<<res<<"M/s"<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 13:
				cout<<"Digita las libras que quiere pasar a kilogramos: "<<endl;
				cin>>lib;
				kilos=lib/2.205;
				cout<<"los kilogramos son: "<<kilos;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 14:
				cout<<"digita un numero: ";
				cin>>n;
				if(n == 1){
					cout<<n<<" = I"<<endl;
				}else if(n == 2){
					cout<<n<<" = II"<<endl;
				}else if(n == 3){
					cout<<n<<" = III"<<endl;
				}else if(n == 4){
					cout<<n<<" = IV"<<endl;
				}else if(n == 5){
					cout<<n<<" = V"<<endl;
				}else if(n == 6){
					cout<<n<<" = VI"<<endl;
				}else if(n == 7){
					cout<<n<<" = VII"<<endl;
				}else if(n == 8){
					cout<<n<<" = VIII"<<endl;
				}else if(n == 9){
					cout<<n<<" = IX"<<endl;
				}else if(n == 10){
					cout<<n<<" = X"<<endl;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 15:
				cout<<"digita la cantidad en pesos para pasarlo a dolares: "<<endl;
				cin>>ps;
				dll=ps/3800;
				cout<<"la cantidad en dolares es: "<<dll;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 16:
				for(int i=0;i<=100;i+=2){
					cout<<i<<endl;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 17:
				cout<<"digita el numero que quieras sacarle el factorial: ";
				cin>>n;
				fac=1;
				for(int i=1;i<=n;i++){
					fac=fac*i;
				}
				cout<<"el factorial de "<<n<<" es "<<fac;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 18:
				for(int x=-5;x<=20;x++){
					y=5/3*(x)+3/2*(x)+8;
					cout<<x<<" = "<<y<<endl;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 19:
				cout<<"Digita un lado de un cateto: "<<endl;
    			cin>>ca;
    			cout<<"Digita un lado de un cateto: "<<endl;
    			cin>>co;
    			res=(ca*ca)+(co*co);
    			res2=sqrt(res);
    			cout<<"la hipotenusa de tu triangulo rectangulo es: "<<res2<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 20:
				cout<<"Digita del 1 al 12 y te mostramos el mes del ano que corresponde tu numero: ";
    			cin>>n;
    			if(n == 1){
       				cout<<"El mes correspondiente a este numero es: Enero";
   				}else if(n == 2){
        			cout<<"El mes correspondiente a este numero es: Febrero";
    			}else if(n == 3){
        			cout<<"El mes correspondiente a este numero es: Marzo";
    			}else if(n == 4){
        			cout<<"El mes correspondiente a este numero es: Abril";
    			}else if(n == 5){
        			cout<<"El mes correspondiente a este numero es: Mayo";
    			}else if(n == 6){
        			cout<<"El mes correspondiente a este numero es: Junio";
    			}else if(n == 7){
        			cout<<"El mes correspondiente a este numero es: Julio";
    			}else if(n == 8){
        			cout<<"El mes correspondiente a este numero es: Agosto";
    			}else if(n == 9){
        			cout<<"El mes correspondiente a este numero es: Septiembre";
    			}else if(n == 10){
        			cout<<"El mes correspondiente a este numero es: Octubre";
    			}else if(n == 11){
        			cout<<"El mes correspondiente a este numero es: Noviembre";
    			}else if(n == 12){
        			cout<<"El mes correspondiente a este numero es: Diciembre";
    			}
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 21:
				cout<<"digita un numero: "<<endl;
				cin>>n;
				cout<<"digita un numero: "<<endl;
				cin>>n1;
				if(n<n1){
					cout<<"el numero "<<n<<"es mayor que "<<n1<<endl;
				}else{
					cout<<"el numero "<<n1<<"es mayor que "<<n<<endl;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 22:
				cout<<"digita tu fecha de nacimiento: ";
				cin>>ed;
				res=2024-ed;
				if(res>=18){
					cout<<"eres mayor de edad";
				}else{
					cout<<"eres mayor de edad";
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 23:
				for(int i=0;i<=5;i++){
					cout<<"Digita 5 numeros: ";
					cin>>numeros[i];
					if(numeros[i] > mayor){
						mayor=numeros[i];
					}
				}
				for(int i=0;i<=5;i++){
					if(numeros[i] < menor){
						menor=numeros[i];
					}
				}
				cout<<"el numero mayor ingresado es "<<mayor<<" y el numero menor ingresado es "<<menor;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 24:
				cout<<"digita un numero para definir si es Mayor, Menor o Igual a 0: "<<endl;
				cin>>n;
				if(n>0){
					cout<<"El numero "<<n<<" es mayor a 0";	
				}else if(n==0){
					cout<<"El numero "<<n<<" es igual a 0";	
				}else if(n<0){
					cout<<"El numero "<<n<<" es menor a 0";	
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 25:
				cout<<"digita un numero: "<<endl;
				cin>>n;
				cout<<"digita un numero: "<<endl;
				cin>>n1;
				if(n>n1){
					cout<<"el numero "<<n1<<" es menor que "<<n<<endl;
				}else{
					cout<<"el numero "<<n<<" es menor que "<<n1<<endl;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 26:
				for(int i=1;i<=100;i++){
					if(i%2 == 0){
						cont=cont+1;
					} else {
						cont2=cont2+1;
					}
				}
				cout<<"el numero de multiplos del 2 del 1 al 100 es: "<<cont<<endl;
				cout<<"el numero de multiplos del 3 del 1 al 100 es: "<<cont2<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 27:
				cout<<"digite las notas que quieres promediar: ";
				cin>>n;
				for(int i=0;i<n;i++){
					cout<<"digita tu nota "<<endl;
					cin>>nota[i];
					res+=nota[i];
				}
				res2=res/n;
				cout<<"tu nota final es: "<<res2;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 28:
				for(int i=1;i<=100;i++){
					if(i%2 == 1){
						cont=cont+1;
					}	
				}
				cout<<"Del 1 al 100 hay "<<cont<<" numeros impares"<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 29:
				cout<<"Digita un numero: ";
				cin>>n;
				cont=0;
				for(int i=1;i<n;i++){
					cont=cont+1;
				}
				cout<<"los numeros que hay entre 1 y el numero que digitaste que es: "<<n<<" son: "<<cont<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 30:
				cout<<"Digita tu numero 1: ";
				cin>>a;
				cout<<"Digita tu numero 2: ";
				cin>>b;
				cout<<"Digita tu numero 3: ";
				cin>>c;
				if(a>b && b>c){
					cout<<"El orden de tus numero de mayor a menor es: "<<a<<" "<<b<<" "<<c;
				}else if(a>c && c>b){
					cout<<"El orden de tus numero de mayor a menor es: "<<a<<" "<<c<<" "<<b;
				}else if(b>a && a>c){
					cout<<"El orden de tus numero de mayor a menor es: "<<b<<" "<<a<<" "<<c;
				}else if(b>c && c>a){
					cout<<"El orden de tus numero de mayor a menor es: "<<b<<" "<<c<<" "<<a;
				}else if(c>a && a>b){
					cout<<"El orden de tus numero de mayor a menor es: "<<c<<" "<<a<<" "<<b;
				}else if(c>b && b>a){
					cout<<"El orden de tus numero de mayor a menor es: "<<c<<" "<<b<<" "<<a;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 31:
				cout<<"Digita un numero: "<<endl;
				cin>>a;
				cout<<"Digita un numero: "<<endl;
				cin>>b;
				cout<<"Digita un numero: "<<endl;
				cin>>c;
				if(a<b && b<c){
					cout<<"el orden de tus numeros de menor a mayor es: "<<a<<" "<<b<<" "<<c;
				}else if(a<c && c<b){
					cout<<"el orden de tus numeros de menor a mayor es: "<<a<<" "<<c<<" "<<b;
				}else if(b<a && a<c){
					cout<<"el orden de tus numeros de menor a mayor es: "<<b<<" "<<a<<" "<<c;
				}else if(b<c && c<a){
					cout<<"el orden de tus numeros de menor a mayor es: "<<b<<" "<<c<<" "<<a;
				}else if(c<a && a<b){
					cout<<"el orden de tus numeros de menor a mayor es: "<<c<<" "<<a<<" "<<b;
				}else if(c<b && b<a){
					cout<<"el orden de tus numeros de menor a mayor es: "<<c<<" "<<b<<" "<<a;
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 32:
				cout<<"Digite un numero para verificar si es par o impar: "<<endl;
				cin>>n;
				if(n%2 == 0){
					cout<<"el numero que digitaste es par";
				}else{
					cout<<"El numero que digitaste es impar";
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 33:
				cout<<"digita el readio, para calclar el perimetro y area de un circulo: ";
    			cin>>r;
    			res=3.14*(r*r);
    			res2=(2*3.14)*r;
    			cout<<"El area de tu ciculo es: "<<res<<endl;
    			cout<<"El perimetro de tu ciculo es: "<<res2<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 34:
				cout<<"esta es una encuesta para ver cual de los 3 colores luz primarios es el que mas le gusta a la gente"<<endl;
				for(int i=1;i<=10;i++){
				cout<<"1.Rojo"<<endl;
				cout<<"2.Verde"<<endl;
				cout<<"3.Azul"<<endl;
				cin>>n;
				cout<<"-----------------------------------------------------------------------------------------------------------------"<<endl;
				if(n==1){
					cont1=cont1+1;
				}else if(n==2){
					cont2=cont2+1;
				}else if(n==3){
					cont3=cont3+1;
				}
				}
				res1=(cont1/10)*100;
				res2=(cont2/10)*100;
				res3=(cont3/10)*100;
				cout<<"El %"<<res1<<" Dijo que le gusta el Rojo"<<endl;
				cout<<"El %"<<res2<<" Dijo que le gusta el Verde"<<endl;
				cout<<"El %"<<res3<<" Dijo que le gusta el Azul"<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 35:
				cout<<"Digita tres edades: "<<endl;
				cin>>ed;
				cout<<"Digita tres edades: "<<endl;
				cin>>ed2;
				cout<<"Digita tres edades: "<<endl;
				cin>>ed3;
				res=ed+ed2+ed3;
				res2=res/3;
				cout<<"La primera edad que digitaste fue: "<<ed<<" El promedio de edad es de: "<<res2<<endl;
				cout<<"La segunda edad que digitaste fue: "<<ed2<<" El promedio de edad es de: "<<res2<<endl;
				cout<<"La tercera edad que digitaste fue: "<<ed3<<" El promedio de edad es de: "<<res2<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 36:
				cout<<"Digita un numero: ";
    			cin>>n;
    			for(int i=1;i<11;i++){
        			res=n%i;
        			cout<<"el residuo de "<<i<<" % "<<n<<" es: "<<res<<endl;
    			}
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 37:
				cout<<"Digita los minutos que quieras: ";
    			cin>>M;
    			S=M*60;
    			H=M/60;
    			cout<<"Tus minutos expresados en segundos es: "<<S<<endl;
    			cout<<"Tus minutos expresados en Minutos es: "<<M<<endl;
    			cout<<"Tus minutos expresados en horas es: "<<H<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 38:
				cout<<"1. Enero"<<endl;
    			cout<<"2. Febrero"<<endl;
    			cout<<"3. Marzo"<<endl;
    			cout<<"4. Abril"<<endl;
    			cout<<"5. Mayo"<<endl;
    			cout<<"6. Junio"<<endl;
    			cout<<"7. Julio"<<endl;
    			cout<<"8. Agosto"<<endl;
    			cout<<"9. Septiembre"<<endl;
    			cout<<"10. Octubre"<<endl;
    			cout<<"11. Noviembre"<<endl;
    			cout<<"12. Diciembre"<<endl;
    			cout<<"-------------------------------------------------------"<<endl;
    			cin>>opc;
    			switch(opc){
        			case 1:
        			cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=19){
               				cout<<"Tu signo zodiacal es: Capricornio";
            			}
            			if(n>=20 && n<=31){
                			cout<<"Tu signo zodiacal es: Acuario";
            			}
        			break;
        			case 2:
        			cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=18){
                			cout<<"Tu signo zodiacal es: Acuario";
            			}
            			if(n>=19 && n<=29){
                			cout<<"Tu signo zodiacal es: Piscis";
            			}
        			break;
        			case 3:
        			cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=20){
                			cout<<"Tu signo zodiacal es: Piscis";
            			}
            			if(n>=21 && n<=31){
                			cout<<"Tu signo zodiacal es: Aries";
            			}
        			break;
        			case 4:
        			cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=19){
                			cout<<"Tu signo zodiacal es: Aries";
            			}
            			if(n>=20 && n<=30){
               				cout<<"Tu signo zodiacal es: Tauro";
            			}
        			break;
        			case 5:
        			cout<<"Digita el dia: ";
        			cin>>n;
           				if(n>=1 && n<=20){
                			cout<<"Tu signo zodiacal es: Tauro";
            			}
            			if(n>=21 && n<=31){
                			cout<<"Tu signo zodiacal es: Geminis";
            			}
        			break;
        			case 6:
        			cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=20){
                			cout<<"Tu signo zodiacal es: Geminis";
            			}
            			if(n>=21 && n<=30){
               				cout<<"Tu signo zodiacal es: Cancer";
            			}
        			break;
        			case 7:
					cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=22){
                			cout<<"Tu signo zodiacal es: Cancer";
            			}
            			if(n>=23 && n<=31){
                			cout<<"Tu signo zodiacal es: Leo";
            			}
        			break;
        			case 8:
        			cout<<"Digita el dia: ";
        			cin>>n;
            			if(n>=1 && n<=22){
                			cout<<"Tu signo zodiacal es: Leo";
            			}
            			if(n>=23 && n<=31){
                			cout<<"Tu signo zodiacal es: Virgo";
            			}
        			break;
        			case 9:
        			cout<<"Digita el dia: ";
       				cin>>n;
            			if(n>=1 && n<=22){
                			cout<<"Tu signo zodiacal es: Virgo";
            			}
            			if(n>=23 && n<=31){
                			cout<<"Tu signo zodiacal es: Libra";
            			}
        			break;
        			case 10:
        				cout<<"Digita el dia: ";
       				cin>>n;
            			if(n>=1 && n<=22){
                			cout<<"Tu signo zodiacal es: Libra";
            			}
            			if(n>=23 && n<=31){
                			cout<<"Tu signo zodiacal es: Escorpio";
            			}
        			break;
        			case 11:
        			cout<<"Digita el dia: ";
       				cin>>n;
            			if(n>=1 && n<=21){
                			cout<<"Tu signo zodiacal es: Escorpio";
            			}
            			if(n>=22 && n<=30){
                			cout<<"Tu signo zodiacal es: Sagitario";
            			}
        			break;
        			case 12:
        				cout<<"Digita el dia: ";
       				cin>>n;
            			if(n>=1 && n<=21){
                			cout<<"Tu signo zodiacal es: Sagitario";
            			}
				}
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 39:
				cout<<"Digita el numero que quieras: ";
    			cin>>n;
    			cont=0;
    			for(int i=1;i<n;i++){
        			cont=cont+i;
   				}
    			cout<<"la suma de los numeros que estan dentro del rango 1 y "<<n<<" son "<<cont<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 40:
				for(int i=0;i<=15;i++){
					cout<<"digita numeros: ";
					cin>>n;
					suma+=n;	
				}
				cout<<"la suma de los numeros es: "<<suma;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 41:
				for(int i=1;i<=100;i++){
					if(i%2 == 1){
						suma+=i;
					}
				}
				cout<<"la suma de todos los numeros impares del 1 al 100 es: "<<suma<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 42:
				for(int i=1;i<=100;i++){
					if(i%2 == 0){
						suma+=i;
					}
				}
				cout<<"la suma de todos los numeros pares del 1 al 100 es: "<<suma<<endl;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 43:
				for(int i=20;i<=50;i++){
					cont=cont+i;
				}
				cout<<cont;
				cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 44:
				cout<<"digita un numero: ";
    			cin>>n;
    			res=n%10;
    			cout<<"el ultimo digito de tu numero ingresado es: "<<res<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
			case 45:
				cout<<"digita el radio, para calclar el volumen de una esfera: ";
    			cin>>r;
    			res=(4/3)*3.14*(r*r*r);
    			cout<<"el volumen de tu esfera es de: "<<res<<endl;
    			cout<<"---------------------------------------------------------------------------------------------"<<endl;
			break;
		//final de los casos
		}
	}while(opc!=50);
	//final del menu
	return 0;
}