#include <stdio.h>

int main()
{   int a,b,c,d;
	printf("Enter value of a : ");
	scanf("%d",&a);
	printf("Enter value of b : ");
	scanf("%d",&b);
 	printf("Enter value of c : ");
	scanf("%d",&c);
	printf("Enter value of d : ");
	scanf("%d",&d);
	if(a>b)
	{   if(a>c)
		{   if(a>d)
			{   printf("Max =%d",a);
			}
			else
			{   printf("Max =%d",d);
			}	
		}
		else
		{   if(c>d)
			{   printf("Max =%d",c);
		    }
		    else
		    {   printf("Max =%d",d);
		    }
		}	
	}
	else
	{   if(b>c)
		{   if(b>d)
			{printf("Max =%d",b);
		    }
		    else
		    {   printf("Max =%d",d);
		    }	
		}
		else
		{   if(c>d)
			{   printf("Max =%d",c);
			}
			else
			{   printf("Max =%d",d);
			}
		}
	}	
	return 0;
}