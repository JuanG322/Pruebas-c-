#include <iostream>
#include <cmath>
#include <time.h>>
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

        case 16:
            int num;
            cout<<"Ingrese el numero: ";cin>>num;
            for(int i = 0; i <= 10;i++){
                cout<<num<<" x "<<i<<" = "<<num*i<<endl;
            }
            break;

        case 17:
            int suma,cuadrado;
            suma = 0;

            for(int i = 1; i<=10;i++){
                cuadrado = i*i;
                suma += cuadrado;//Esto es igual que decir suma = suma+cuadrado
            }
            cout<<"La suma de los 10 primeros cuadrados es: "<<suma<<endl;
            break;

        case 18:
            cout<<"Hello World"<<endl;

            float tempA,tempM,tempB,Media,Max,Min;
            Min = 100,Media=0;
            for(int i=1; i<=24;i++){
                if(i % 4 == 0){
                    cout<<"Cual el la temeperatura mas alta registrada: ";cin>>tempA;
                    cout<<"Cual el la temeperatura media registrada: ";cin>>tempM;
                    cout<<"Cual el la temeperatura mas baja registrada: ";cin>>tempB;
                    cout<<endl;

                    Media += tempM;
                    if(tempM > Max)Max= tempA;
                    if(tempB < Min)Min = tempB;
                }
            }
            cout<<"La temperatura media en el dia fue de:"<<Media/6<<endl;
            cout<<"La temperatura Maxima fue de: "<<Max<<endl;
            cout<<"La temaperatura minima fue de: "<<Min<<endl;
            break;
        case 19:
            int num19,aux,suma19;
            aux=1;suma19 = 0;

            while(aux != 0){
                cout<<"Digite un numero: ";cin>>num19;
                if((num19 != 0 && ((num19>30) || (num19<20))))suma19 += num19;
                else aux=0;
            }
            cout<<"la suma de los valores mayores a 0 es: "<<suma19<<endl;
            break;

         case 20:
            int a20, b20,sum20;
            cout<<"Ingrese un valor par a y b: ";cin>>a20>>b20;
            sum20 = a20;
            for(int i = 0; i<b20;i++){
                sum20 = sum20*a20;
            }
            cout<<"A^B es igual a: "<<sum20<<endl;
            break;

        case 21:
            int num21,suma21;
            suma21= 0;
            cout<<"Digite un numero: ";cin>>num21;

            for(int i = 1;i<=num21;i++){
                suma21 += i;
            }
            cout<<"La suma de los n numeros es: "<<suma21<<endl;
            break;

        case 22:
            int num22,suma22;
            suma22= 0;
            cout<<"Digite un numero: ";cin>>num22;

            for(int i= 1;i<num22 && i%2 != 0;i+=2){
                suma22 += i;
            }
            cout<<"La suma de los n numeros impares +2n-1 es: "<<suma22+((2*num22)-1)<<endl;
            break;

        case 23:
            int num23,mul23;
            mul23=1;
            cout<<"Digite el numero: ";cin>>num23;

            for(int i = 1;i <= num23;i++ ){
                mul23 *= i;//mul23 = mul23*i es lo mismo
            }
            cout<<"El factorial de "<<num23<<" es: "<<mul23<<endl;

        case 24:
            int num24,mul24,factorial;
            mul24=1;
            cout<<"Digite el numero: ";cin>>num24;

            for(int i = 1;i <= num24;i++ ){
                mul24 *= i;
                factorial += mul24;
            }
            cout<<"La suma de los factoriales es: "<<factorial<<endl;
            break;

        case 25:
            int num25,elevacion,sum;
            sum=0;elevacion = 0;
            cout<<"Ingrese un numero: ";cin>>num25;

            for(int i=1;i<=num25;i++ ){
            elevacion = pow(2, i);
            sum += elevacion;
            }
            cout<<"La suma de la serie de suma de numeros es: "<<sum<<endl;
            break;

        case 26:
            int num26,var;
            bool flag;
            var = 0;
            flag = true;

            cout<<"Ingrese un numero: ";cin>>num26;

            for(int i = 1;i<=num26;i++){
                if(flag){
                    var += i;
                    flag = false;
                }
                else{
                    var -= i;
                    flag = true;
                }
            }
            cout<<"El resultado de la suma y resta de numeros es: "<<var<<endl;
            break;

        case 27:
            int num27,x27,y27,z27;
            x27=0;y27=1;z27=1;
            cout<<"Ingrese un numero para la serie fibonacci: ";cin>>num27;

            for(int i=0;i<num27;i++){
            z27 = x27+y27;
            cout<<z27<<" ";
            x27 = y27;
            y27 = z27;
            }
            break;

        case 28:
            int e1,e2,e3,contador1,contador2,contador3;
            contador1=0;contador2=0;contador3=0;
            for(int A=0; A < 5; A++){
                cout<<"Ingres los 3 resultado del alumno "<<A<<" : ";cin>>e1>>e2>>e3;
                if(e1 >= 3 && e2>= 3 && e3>=3)contador1++;
                else if(e1 >= 3 || e2>= 3 || e3>=3)contador2++;
                else if(e3>=3 && e2<3 && e1 <3)contador3++;
            }
            cout<<contador1<<" alumnos aprobaron todos los examenes"<<endl;
            cout<<contador2<<" alumnos aprobaron al menos uno de los examenes"<<endl;
            cout<<contador3<<" alumnos aprobaron solo el ultimo examenen"<<endl;

            break;

        case 29:
            int num29,dato,contador;
            contador=0;


                srand(time(NULL));
                dato = 1+rand()%(100);

                do{
                    cout<<"Digite un numero del 1 al 100: ";cin>>num29;

                    if(num29>dato)cout<<"Digite un numero menor:"<<endl;
                    else if(num29<dato)cout<<"Digite un numero mayor: "<<endl;
                    contador++;
                }while(num29 != dato);
                cout<<"Adivinaste el numero te tomo "<<contador<<" intententos"<<endl;
            break;

        case 30:
            int num30,i;
            i=2;
            cout<<"Ingres un numero: ";cin>>num30;
            while(i<=num30){
                if(num30%i==0){
                    num30 = num30/i;
                    cout<<i<<" ";
                    i=2;
                }
                else i++;
                }
            cout<<endl;
            break;

        default:
            i = 0;
            break;
        }

    }



    return 0;
}
