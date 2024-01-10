#include <stdio.h>

int main(void){
	double a,b,c;
	char s;
	scanf (" %lf\n", &a);
	scanf (" %c\n", &s);
	scanf (" %lf", &b);
	if (s=='+') {
		c=a+b;
		printf ("%lf\n", c);
	}
	else if (s=='-') {
		c=a-b;
		printf ("%lf\n", c);
	}
	else if (s=='x') {
		c=a*b;
		printf ("%lf\n", c);
	}
	else if (s=='*') {
		c=a*b;
		printf ("%lf\n", c);
	}
	else if (s=='/') {
		c=a/b;
		printf ("%lf\n", c);
	}
	else if (s=='%') {
		c=100*(a/b);
		printf ("%lf\n", c);
	}
	else {
		printf ("Error, Terminate\n");
	}
	return 0;
}
