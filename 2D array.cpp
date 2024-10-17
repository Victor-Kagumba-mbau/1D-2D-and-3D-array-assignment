/*
Program Name: 2D array
Author: Victor Kagumba
Reg No: CT101/G/23670/24
*/
#include <stdio.h>
int main(){
	int b,s;
	int bill [2][3] = {{100,200}, {500,600,700}};
	for(b=0; b<2; b++){
		for(s=0; s<3; s++){
			printf("bills [%d][%d] %d \n",b,s, bill[b][s]);
		}
	}
	return 0;
}