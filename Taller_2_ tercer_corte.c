#include <stdio.h>
#include <math.h>
#define PI 3.14159265

float radio, altura, resultado, pi;
float fahrenheit, celsius;
int segundos, horas, minutos, resto;
int examenes;
float calificacion;
float r, a, b, c, d, total;
int x, y;
float sigma, lambda, alfa, f ;
float calcularAreaTriangulo (float lado1, float lado2, float angulo);
  float lado1, lado2, angulo, area;
 
int main()
{
    {    printf ("\n PRIMER PUNTO");
        printf("\n Volumen de un cono ");
        
        
        
        pi = 3,141592;
        radio = 14,5;
        altura = 26,79;
    
        resultado = pi*(pow(radio,2))*altura/3;
        
        printf("\n El resultado es: %f", resultado);
        
    }
    
    
    
     {
        printf("\n\n SEGUNDO EJERCICIO");
        printf("\n Convertidor a Fahrenheit");
        
        printf("\n Escribe el valor en Fahrenheit que quieras convertir ");
        scanf("%f", &fahrenheit); 
    
        celsius = (fahrenheit-32)*5/9;
        printf("\n Equivale a: %f", celsius);
        
    }
    
    
    {
        printf("\n\n TERCER EJERCICIO");
        printf("\n Ingrese el tiempo transcurrido en segundos: ");
        scanf("%d", &segundos);
    
        horas = segundos / 3600; // 1 hora = 3600 segundos
        resto = segundos % 3600;
        minutos = resto / 60; // 1 minuto = 60 segundos
        segundos = resto % 60;
    
        printf("Tiempo equivalente: %d horas, %d minutos, %d segundos\n", horas, minutos, segundos);
    
    }
      float notaFinal(int examenes) {
        float sumaNotas = 0.0;
        float nota, calificacion;
    
        for (int i = 1; i <= examenes; i++) {
            printf("Ingrese la nota del examen %d: ", i);
            scanf("%f", &nota);
            sumaNotas += nota;
        }
    
        calificacion = sumaNotas / examenes;
        return calificacion;
    }
    
     {
      
    printf("\n\n CUARTO EJERCICIO");
        printf("\n CALCULADORA DE NOTA FINAL\n");
        printf("Ingrese el número de exámenes realizados: ");
        scanf("%d", &examenes);
    
        calificacion = notaFinal(examenes);
        printf("La nota final es: %.2f\n", calificacion);
    
    }
    {
        printf("\n\n QUINTO EJERCICIO");
        printf("\n Escribe el valor de r: ");
        scanf("%f", &r);
        printf("Escribe el valor de a: ");
        scanf("%f", &a);
        printf("Escribe el valor de b: ");
        scanf("%f", &b);
        printf("Escribe el valor de c: ");
        scanf("%f", &c);
        printf("Escribe el valor de d: ");
        scanf("%f", &d);
        total = 4/(3*r+34)-9*(a+(b*c))+(3+d*(2+a))/(a+(b*d));
        printf("\nEl total es: %.2f", total);
    }
     {
       printf("\n\n SEXTO PUNTO");
        x = 12;
        sigma = 2.1836;
         y = 3;
        lambda = 1.11695;
        alfa = 328.67;
    
        f = 3 * ((x + sigma * y) / (x * x * -y * y)) - lambda * (alfa - 13.7);
    
        printf("\nEl valor de f es: %f", f);
    }
    
        // Declaración de variables
        float sueldo_base, complemento_destino, complemento_cargo, sueldo_bruto, impuestos, sueldo_neto;
        int horas_extra, hijos, mayores_dependientes;
        float porcentaje_irpf = 24; 
        float retencion_irpf;
        {
        printf("\n\n SEPTIMO EJERCICIO");
        printf("\nCálculo de la nómina\n");
        // Solicitar datos al usuario
        printf("Sueldo base: ");
        scanf("%f", &sueldo_base);
        
        printf("Complemento de destino: ");
        scanf("%f", &complemento_destino);
        
        printf("Complemento de cargo academico: ");
        scanf("%f", &complemento_cargo);
        
        printf("Horas extra realizadas: ");
        scanf("%d", &horas_extra);
        
        printf("Hijos: ");
        scanf("%d", &hijos);
        
        printf("Mayores dependientes: ");
        scanf("%d", &mayores_dependientes);
        
        // sueldo bruto
        sueldo_bruto = sueldo_base + complemento_destino + complemento_cargo + (horas_extra * 23);
        
        // porcentaje de IRPF
        porcentaje_irpf -= (2 * hijos) + mayores_dependientes;
        
        // impuestos (retención IRPF)
        impuestos = sueldo_bruto * (porcentaje_irpf / 100);
        
        // sueldo neto
        sueldo_neto = sueldo_bruto - impuestos;
        
        // resultados
       
        printf("\nSueldo base: %.2f $\n", sueldo_base);
        printf("Complemento de destino: %.2f $\n", complemento_destino);
        printf("Complemento de cargo académico: %.2f $\n", complemento_cargo);
        printf("Horas extra realizadas: %d\n", horas_extra);
        printf("Hijos: %d\n", hijos);
        printf("Mayores dependientes: %d\n", mayores_dependientes);
        printf("Sueldo bruto: %.2f $\n", sueldo_bruto);
        printf("Porcentaje de IRPF: %.0f%%\n", porcentaje_irpf);
        printf("Retención por IRPF: %.2f $\n", impuestos);
        printf("Sueldo neto: %.2f $\n", sueldo_neto);
        
    }
    {
        
        int a = 1;
        double d = 1.0;
        printf("\n\n OCTAVO EJERCICIO");
    
        // 1
        a = 46 % 9 + 4 * 4 - 2;
        printf("\n 1. a = %d\n", a);
    
        // 2
        a = 45 + 43 % 5 * (23 * 3 % 2);
        printf("2. a = %d\n", a);
    
        // 3
        a = 45 + 45 * 50 % --a;
        printf("3. a = %d\n", a);
    
        // 4
        d = 1.5 * 3 + (++d);
        printf("4. d = %.2f\n", d);
    
        // 5
        d = 1.5 * 3 + d++;
        printf("5. d = %.2f\n", d);
    
        // 6
        a %= 3 / a + 3;
        printf("6. a = %d\n", a);
    }
     
    calcular();
     
    {
        double lado1, lado2, angulo, area;
        printf("\n\n DECIMO EJERCICIO");
    
        // Solicitar al usuario los valores de los lados y el ángulo
        printf("\n Ingrese el primer lado del triángulo: ");
        scanf("%lf", &lado1);
    
        printf("Ingrese el segundo lado del triángulo: ");
        scanf("%lf", &lado2);
    
        printf("Ingrese el ángulo en grados: ");
        scanf("%lf", &angulo);
    
        // Convertir el ángulo de grados a radianes
        double angulo_radianes = angulo * M_PI / 180.0;
    
        // Calcular el área del triángulo
        area = 0.5 * lado1 * lado2 * sin(angulo_radianes);
    
        // Imprimir el resultado
        printf("El área del triángulo es: %lf\n", area);
    
    }
    {
        float capital, interes_anual, cuota_mensual, interes_mensual, total_pagado, cantidad_amortizacion, cantidad_intereses;
        int anios, plazo_meses;
        
    printf("\n\n ONCEAVO EJERCICIO");
    
        // Solicitar los datos al usuario
        printf("\nIngrese el capital prestado: ");
        scanf("%f", &capital);
    
        printf("Ingrese el interés anual: ");
        scanf("%f", &interes_anual);
    
        printf("Ingrese el número de años: ");
        scanf("%d", &anios);
    
        // Calcular el plazo en meses
        plazo_meses = anios * 12;
    
        // Calcular el interés mensual
        interes_mensual = interes_anual / 12 / 100;
    
        // Calcular la cuota mensual
        cuota_mensual = capital * interes_mensual / (100 * (1 - pow(1 + (interes_mensual / 100), -plazo_meses)));
    
        // Calcular el total pagado
        total_pagado = cuota_mensual * plazo_meses;
    
        // Calcular la cantidad de amortización
        cantidad_amortizacion = capital;
    
        // Calcular la cantidad de intereses
        cantidad_intereses = total_pagado - cantidad_amortizacion;
    
        // Mostrar los resultados
        printf("\nCuota mensual: %.2f\n", cuota_mensual);
        printf("Total pagado: %.2f\n", total_pagado);
        printf("Cantidad de amortización: %.2f\n", cantidad_amortizacion);
        printf("Cantidad de intereses: %.2f\n", cantidad_intereses);
    
        return 0;
    }
    
    
        
}


void calcular() {
        float lado1, lado2, angulo, area;
    
        printf("Ingrese el lado 1 del triángulo: ");
        scanf("%f", &lado1);
        
        printf("Ingrese el lado 2 del triángulo: ");
        scanf("%f", &lado2);
        
        printf("Ingrese el ángulo (en grados) entre los dos lados: ");
        scanf("%f", &angulo);
        
        area = calcularAreaTriangulo(lado1, lado2, angulo);
        
        printf("El área del triángulo es: %.2f\n", area);
        
        return 0;    
    }

    float calcularAreaTriangulo(float lado1, float lado2, float angulo) {
        float radianes, seno, area;
        radianes = angulo * (PI / 180.0);
         seno = sin(radianes);
        
         area = 0.5 * lado1 * lado2 * seno;
        
        return area; 
        
    }
