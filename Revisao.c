
#include "stdio.h"
#define minha_dir 5

#ifdef minha_dir 
	//....
#endif

//#undef minha_dir 

#if minha_dir == 3 
	#define minha_dir_2 2
#elif minha_dir == 4
	#include "stdlib.h"
#else 
	#define minha_dir_3 3
#endif 


int Global
void meuOutroMetodo()
{
	Global = Global + 1
}

void Estatico()
{
	int static VarEstatica = 10;
	
	VarEstatica++;

	printf("%d", VarEstatica);

}

int main ()
{
	char *c;

	int volatile meuInt = 10;
	
	double meuDouble = 25.75;
	char meuChar = "d";
	float meuFloat = 10.15;
	int a, b;
	enum estacoes { verao, outono, inverno, primavera};
	enum estacoes minhaEstacao;

	printf("%d ", meuInt);
	printf("%f ", meuDouble);
	printf("%c ", meuChar);
	printf("%f ", meuFloat);

	meuOutroMetodo();
	printf("%d \n" , Global);

	a = b = 10;
	printf("a: %d, b: %d \n", a, b);


	VarEstatica();
	estacao = verao;
	if(estacao == verao)
	{
		printf("calor \n");
	}

	#line 5
	printf("Linha %d do arquivo %s", __LINE__, __FILE__);

	#error CODIGO INCOMPLETO(NeoArraze)

	scanf("%c", &c);
	return 0;
}

void mathematique()
{
	int a, b;
	a = 10;
	b = 20;
	
	c = a + b * (3 + 3);
	printf("%d", c);

	meuFloat = (float) 48 / 5;
	printf("%f \n", meuFloat);
	meuFloat *= minha_dir;
	printf("%f \n", minha_dir);

	scanf("%c", &c);
	return 0;
}
