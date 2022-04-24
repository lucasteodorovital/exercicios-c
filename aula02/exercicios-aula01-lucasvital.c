#include <stdio.h>
#include <stdlib.h>
/*
 Lucas Teodoro Vital

*/


void exercicio_1(void)
{
	float salario;
	
	//T�tulo da rotina
	printf("Calculadora de novo salario \n \n Digite o salario base: \n");
	
	//Captura o sal�rio base
	scanf("%f" , &salario);
	
	//Condicionais de novo sal�rio
	if(salario <= 2000) salario *= 1.12;
	else if(salario > 2000 && salario <= 3500) salario *= 1.08;
	else if(salario > 3500) salario *= 1.06;
		
	//Exibe novo sal�rio
	printf("O novo salario e: %4.2f \n", salario);
}

void exercicio_2(void)
{
	int inicio, fim, incremento;
		
	//T�tulo da rotina
	printf("Exercicio de loops \n \n Digite o valor de inicio: \n");
	
	//Captura o inicio
	scanf("%i" , &inicio);
	
	//Captura o fim
	printf("Digite o fim do range: \n");
	scanf("%i" , &fim);
	
	//Captura o incremento
	printf("Digite o incremento: \n");
	scanf("%i" , &incremento);
	
	while(inicio <= fim)
	{
		printf("%i \n", inicio);
		inicio += incremento;
	}
}

void exercicio_3(void)
{
	int array[10], second_array[10], i=0;
	
	for(i=0; i<10; i++)
	{
		printf("Digite a posicao %i do vetor \n", i);
		scanf("%i", &array[i]);
		second_array[i] = array[i] * 4;
	}
	
	printf("Resultado: \n");
	for(i=0; i<10; i++)
	{
		printf("%i \n", second_array[i]);
	}
	
}


int main(void) {
	
	//Executa o primeiro exerc�cio
	exercicio_1();
	
	//Executa o segundo exerc�cio
	exercicio_3();
	
	//Executa o terceiro exerc�cio
	exercicio_3();
	
	//Pausa a execu��o
	system("PAUSE");
	return 0;
}
