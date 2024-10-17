/*
Program Name: 3D Array
Author:Victor Kagumba
Reg No:CT101/G/23670/24
*/
#include <stdio.h>
int main(){
	int b,s,z;
	int bill[2][2][3] = {{{100,200,900},{400,300,400}},{{100,700,200},{500,200,100}}};
	for(b=0; b<2;b++){
		for(s=0;s<2;s++){
			for(z=0;z<3;z++){
				printf("bill[%d][%d][%d] = %d \n",b,s,z, bill[b][s][z]);
			}
		}
	}
	return 0;
}