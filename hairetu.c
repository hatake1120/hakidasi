#include <stdio.h>
main(){
	double hairetu[3][3]={{1,2,3},{4,5,6},{6,8,9}};
	double hakidasi[3][3]={{0,0,0},{0,0,0},{0,0,0}},x;
	short i,j,an,b,c,d;
	an=3;
	b=3;
	c=0;
	d=0;
	x=0;
	
	for(i=0;i<an;i++){
		for(j=1;j<b+1;j++){
			hakidasi[i][c]=hairetu[i][j]-((hairetu[i][j]/hairetu[i][c])*hairetu[i][c]);
			c=c+1;
		printf("%f ",hakidasi[i][j]);
		}
		printf("\n");
	}



	
}


