#include <stdio.h>
#include <stdlib.h>
#include "calculator.h"

#define MAXOP 100
#define NUMBER '0'

int main()
{
    int type;
    double op2;
    char s[MAXOP];

    while ((type = getop(s)) != EOF)
    {
        switch (type)
	{
	    case NUMBER:
	         push(atof(s));
		 break;
            
	    case '+':
	         push(pop() + pop());
		 break;
            
	    case '-':
	         op2 = pop();
		 push(pop() - op2);
		 break;
	     
	    case '*':
	         push(pop() * pop());
		 break;
         
            case '/':
	         op2 = pop();
		 push(pop() / op2);
		 break;

	    case '\n':
	         printf("\t%.8g\n",pop());
		 break;
	    
            default:
	         printf("error");
		 break;
	}
    }
    return 0;
}

