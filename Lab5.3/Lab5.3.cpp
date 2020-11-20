// Lab5.3.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <math.h>
/* *****************************************************************
Area is limited by 4 lines as following:
1. y = a * x + b = x + 7 (a=1; b=7)
2. y = -x + 7 (a=-1; b=7)
3. y = x - 7 (a=1; b=-7)
4. y = -x -7 (a=-1; b=-7)
***************************************************************** */
int main() {   
	char c;
	short 
		belongs = 0;
	float 
		x,
		y,
		a_bord, //coef a of a border line
		b_bord, //coef b of a border line
		a,  //
		b;
	//
	printf_s("Input coordinates of a dot\nx=");
	scanf_s("%f", &x);
	printf("y=");
	scanf_s("%f", &y);
	printf("\n");
	//determining quadrant:
	if (x >= 0 && y >= 0) {
		a_bord = -1.0;
		b_bord = 7.0;
	}
	else if (x>=0 && y<0) {
		a_bord = 1.0;
		b_bord = -7.0;
	}
	else if (x < 0 && y < 0) {
		a_bord = -1.0;
		b_bord = -7.0;
	}
	else {
		a_bord = 1.0;
		b_bord = 7.0;
	}
	a = a_bord;
	b = y - a*x;
	if (fabs(b) <= fabs(b_bord)) {
		belongs = 1;
	}
	
	//printf("Dot %s belongs the defined area", belongs ? "" : "doesn't");
	if (belongs)
		printf("Dot belongs the defined area");
	else
		printf("Dot doesn't belong the defined area");

	scanf_s("%c", &c);
	scanf_s("%c", &c);
}

 