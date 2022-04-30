#include<stdio.h>
#include<math.h>
#include<conio.h>

void main(){
   int i,j,n;
   clrscr();
     n=5;
    for( i=-3*n/2; i<=n;i++){
       for( j=-3*n/2;j<=3*n/2; j++){

	    if( (abs(i) + abs(j) < n)
	       || ((-n/2-i) * (-n/2-i) +(n/2-j)*(n/2-j) <=n*n/2)
	       || ((-n/2-i) * (-n/2-i) +(-n/2-j) *(-n/2-j) <=n*n/2)
	    ){
		printf("* ");
	    }
	    else{
		printf(". ");
	    }
       }
	printf("\n");
   }
   getch
   ();
}