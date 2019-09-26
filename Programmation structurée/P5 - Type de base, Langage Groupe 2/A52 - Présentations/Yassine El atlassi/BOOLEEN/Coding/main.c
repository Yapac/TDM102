#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int A;
	printf("1 is True AND 0 is false: ");
	scanf("%d",&A);
	if(A==1)	
	{printf("TRUE");
	}
	else if (A==0)
	{printf("FALSE");
	}
	else 
	{ printf("EROR");
	}
	
	return 0;
}

