#include <iostream>
#include <cmath>

using namespace std;

int main()
{
    int i=1;

    while(i != 0){

        cout << "Ingrese el ejercicio que desea probar: ";cin >> i;

        switch (i) {
        case 1:
            int edad1;
            char sexo1[10];
            float altura1;

            cout << "Ingres su edad: ";cin >> edad1;
            cout << "Ingres su sexo: ";cin >> sexo1;
            cout << "Ingres su altura: ";cin >> altura1;

            cout << "Edad: "<<edad1 << endl;
            cout << "Sexo: "<< sexo1 << endl;
            cout << "Altura: " << altura1 <<endl;
            break;

        case 2:
            float a2,b2,c2,d2,/*e2,f2,*/resultado2;

            cout<<"Ingrese el valor de a:";cin >> a2;
            cout<<"Ingrese el valor de b:";cin >> b2;
            cout<<"Ingrese el valor de c:";cin >> c2;
            cout<<"Ingrese el valor de d:";cin >> d2;
            /*cout<<"Ingrese el valor de e:";cin >> e;
            cout<<"Ingrese el valor de f:";cin >> f;*/

            resultado2 = a2+(b2/(c2-d2));

            cout.precision(3);//Esto redondea el resultado
            cout << "El total es de: "<<resultado2<<endl;

            break;

        case 3:
            int x3,y3,aux3;

            cout << " Digite el valor de x: ";cin>> x3;
            cout << " Digite el valor de y: ";cin>> y3;

            aux3 = x3;
            x3 = y3;
            y3 = aux3;

            cout << " El valor de x es "<<x3<<" y el valor de y es de: "<<y3<<endl;
            break;

        case 4:
            float nota1,nota2,nota3,nota4,resultado4;

            cout<<"Ingrese la nota de los 4 alumnos: ";cin>>nota1>>nota2>>nota3>>nota4;
            resultado4 = (nota1+nota2+nota3+nota4)/4;
            cout<<"la nota media de los 4 alumnos es de: "<<resultado4<<endl;
            break;

        case 5:
            float practica,teorica,partici;

            cout<<"Nota practica: ";cin>>practica;cout<<"Nota Teorica: ";cin>>teorica;
            cout<<"Nota participativa: ";cin>>partici;

            practica = practica*0.30;
            teorica = teorica*0.60;
            partici = partici*0.10;

            cout <<"La nota del estudiante es de : "<<practica+teorica+partici<<endl;
            break;

        case 6:

            int cateto1,cateto2,hipo;

            cout<<"Ingrese el cateto 1: ";cin>>cateto1;cout<<"Ingrese el cateto 2: ";cin>>cateto2;
            hipo =sqrt(pow(cateto1, 2)+pow(cateto2, 2));
            cout<<"la hipotenusa es: "<<hipo<<endl;
            break;

        case 7:
            float x,y,resultado7;
            cout<<"Ingrese el x: ";cin>>x;cout<<"Ingrese y: ";cin>>y;
            resultado7 = (sqrt(x))/(pow(y, 2)-1);
            cout<<"Resultado: "<<resultado7<<endl;

            break;

        case 8:
            int a,b,c;

            cout <<"Ingrese el valor de a,b y C: ";cin>>a>>b>>c;

            if(a == b && c == b)cout<<"A,B y C son iguales"<<endl;
            else if(a>b && a>c)cout<<"A es el numero mayor"<<endl;
            else if(b>a && b>c)cout<<"B es el numero mayor"<<endl;
            else cout<<"C es el numero mayor"<<endl;

            break;

        case 9:
            int a9;
            cout<<"Ingrese un numero: ";cin>>a9;
            if(a9 == 0)cout<<"El numero es 0";
            else if(a9 % 2 == 0)cout<<"El numero es par"<<endl;
            else cout<<"El numero es impar"<<endl;

            if(a9>0)cout<<"El numero es positivo"<<endl;
            else if(a9 == 0)cout<<"Es 0";
            else cout<<"El numero es negativo"<<endl;
            break;

        case 10:
            char letra;
            cout<<"Digite un caracter: ";cin>>letra;

            switch (letra) {
            case 'a' : cout<<"Es una vocal Minuscula"<<endl;
            case 'e': cout<<"Es una vocal Minuscula"<<endl;
            case 'i': cout<<"Es una vocal Minuscula"<<endl;
            case 'o': cout<<"Es una vocal Minuscula"<<endl;
            case 'u': cout<<"Es una vocal Minuscula"<<endl;
            case 'A' : cout<<"Es una vocal Minuscula"<<endl;
            case 'E': cout<<"Es una vocal Minuscula"<<endl;
            case 'I': cout<<"Es una vocal Minuscula"<<endl;
            case 'O': cout<<"Es una vocal Minuscula"<<endl;
            case 'U': cout<<"Es una vocal Minuscula"<<endl;
            default: cout<<"NO es una vocal"<<endl;
            }
            break;

        case 11:
            int edad;
            cout<<"Digite su edad: ";cin>>edad;

            if(edad>=18 && edad<=25)cout<<"Su edad si esta entre los 25 y 18"<<endl;
            else cout<<"Su edad no esta entre los 28 y 18"<<endl;
            break;

        case 12:
            int num1,num2,num3,num4;
            cout<<"Digite los 3 Numeros: ";cin>>num1>>num2>>num3;
            cout<<"Ingrese el 4to numero: ";cin>>num4;

            if(num1 == num4 || num2 == num4 || num3 == num4)cout<<"El numero 4 coincide con uno de los 3 anteriores"<<endl;
            else cout<<"El numero 4 no coincide con ninguno de los anteriores"<<endl;

            break;

        case 13:
            int numero,unidades,centenas,decenas,millar;
            cout <<"Digite un numero: ";cin>>numero;
            unidades = numero%10; numero /= 10;
            decenas = numero%10; numero /= 10;
            centenas = numero%10; numero /= 10;
            millar = numero%10; numero /= 10;

            switch (millar) {
            case 1: cout <<"M"; break;
            case 2: cout <<"MM"; break;
            case 3: cout <<"MMM"; break;
            }

            switch (centenas){
            case 1: cout<<"C"; break;
            case 2: cout<<"CC"; break;
            case 3: cout<<"CCC"; break;
            case 4: cout<<"CD"; break;
            case 5: cout<<"D"; break;
            case 6: cout<<"DC"; break;
            case 7: cout<<"DCC"; break;
            case 8: cout<<"DCCC"; break;
            case 9: cout<<"CM"; break;
            }
            switch (decenas){
            case 1: cout<<"X"; break;
            case 2: cout<<"XX"; break;
            case 3: cout<<"XXX"; break;
            case 4: cout<<"XL"; break;
            case 5: cout<<"L"; break;
            case 6: cout<<"LX"; break;
            case 7: cout<<"LXX"; break;
            case 8: cout<<"LXXX"; break;
            case 9: cout<<"XC"; break;
            }
            switch (unidades){
            case 1: cout<<"I"; break;
            case 2: cout<<"II"; break;
            case 3: cout<<"III"; break;
            case 4: cout<<"IV"; break;
            case 5: cout<<"V"; break;
            case 6: cout<<"VI"; break;
            case 7: cout<<"VII"; break;
            case 8: cout<<"VIII"; break;
            case 9: cout<<"IX"; break;
            }
            cout<<endl;
            break;

        case 14:
            int mes;
            cout<<"Ingrese el numero del mes: ";cin>>mes;
            switch (mes) {
            case 1:cout<<"Enero"<<endl;break;
            case 2:cout<<"Febrero"<<endl;break;
            case 3:cout<<"Marzo"<<endl;break;
            case 4:cout<<"Abril"<<endl;break;
            case 5:cout<<"Mayo"<<endl;break;
            case 6:cout<<"Junio"<<endl;break;
            case 7:cout<<"Julio"<<endl;break;
            case 8:cout<<"Agosto"<<endl;break;
            case 9:cout<<"Septiembre"<<endl;break;
            case 10:cout<<"Octubre"<<endl;break;
            case 11:cout<<"Noviembre"<<endl;break;
            case 12:cout<<"Diciembre"<<endl;break;
            default:cout<<"Numero incorrecto (Los mese van del 1 al 12"<<endl;break;
            }
            break;
        case 15:
            int saldo_inicial,opcion,dinero,retirar;
            saldo_inicial = 1000;
            cout<<"\t Bienvenido a su cajero vitual"<<endl;
            cout<<"1.Ingresar dinero a la cuenta"<<endl;
            cout<<"2:Retirar dinero"<<endl;
            cout<<"3. Salir"<<endl;
            cout<<"Opcion: "<<endl;
            cin>>opcion;

            switch (opcion) {
            case 1:
                cout<<"Ingrese la cantidad de dinero que desea ingresar: ";cin>>dinero;
                saldo_inicial = saldo_inicial+dinero;
                cout<<"Saldo actual: "<<saldo_inicial<<endl;
                break;
            case 2:
                cout<<"Cuanto desea retirar: ";cin>>retirar;
                if(retirar>saldo_inicial)cout<<"Saldo actual insuficiente"<<endl;
                else{
                    saldo_inicial = saldo_inicial-retirar;
                    cout<<"Su saldo restante es de "<<saldo_inicial<<endl;
                }
                break;
            case 3:cout<<"Hasta luego "<<endl;break;
            }
            break;
        default:
            i = 0;
            break;
        }

    }



    return 0;
}
