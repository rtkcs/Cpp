/*
 ============================================================================
 Name        : VelkePismena.c
 Author      : rtakacs
 Version     :
 Copyright   : Some Rights Reserved
  ============================================================================
 */

int main3(void){

	//delenie
	int i = 10;
	int j = 3;
	float f = 2.5;

	int   result1 = i / i; 	// int / int = int
	int   result11 = i / j; 	// int / int = int, 3
	float result2 = i / f;	// int / float = float
	float result3 = f / i;	// float / int = float
	float result4 = f / f;	// float / float = float

	printf("\n");
	printf("int 10 / int 3 = int %d",result11);
	//modulo

	int im = 10;
	int modResult1 = 10 % 3;
	printf("\n");
	printf("int 10 %% int 3 = %d", modResult1);

	printf("\n");
}

