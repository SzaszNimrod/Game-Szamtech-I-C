#include "Player.h"
#define _CRT_SECURE_NO_WARNINGS
#define _CRT_NONSTDC_NO_DEPRECATE
#define WIN32_LEAN_AND_MEAN
#include<stdio.h>
#include<stdlib.h>

int main() {
	/*char** level1;
	level1 = BeolvasPalya("be1.txt");
	printf("Egyes szint:\n");
	KiirPalya(level1);*/
	Hos* j1;
	j1=Create();
	BeolvasHosAdatait(j1);
	KiirHosStatistica(j1);
	Hos * gb;
	gb = Create();
	BeolvasEllensegAdataitG(gb);
	KiirEllensegStatisticaG(gb);
	Harc(j1, gb);


	return 0;
}