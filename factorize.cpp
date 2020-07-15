#include<stdio.h>
main()
{
	int a,b,i,j,ax[40],bx[40],m=0,n=0,max,ay,by,hcf=1,lcm;
	printf("Enter a number: ");
	scanf("%d",&a);
	ay=a;
	printf("Enter another number: ");
	scanf("%d",&b);
	by=b;
	printf("Factors of %d is: \n",a);
	for(int i=2;i<=a;i++)
	{
		if(a%i==0)
		{
			printf("%d, ",i);
			a=a/i;
			ax[m]=i;
			m++;
			i--;
			
		}
					
	}
	printf("\n");
	printf("Factors of %d is: \n",b);
	for(int j=2;j<=b;j++)
	{
		if(b%j==0)
		{
			printf("%d, ",j);
			b=b/j;
			bx[n]=j;
			n++;
			j--;
		}
    }
    a=ay;
	b=by;
    printf("\n");
    int x=2;
    for(int x=2;x<=a&&x<=b;x++)
    {
    	if(a%x==0)
    	{
    		if(b%x==0)
			{
				hcf=hcf*x;
    		    a=a/x;b=b/x;
    		    x=x-1;		
			}	
		}
		else
		{
			continue;
		}
	}
    printf("\nHCF is: %d\n",hcf);
    lcm =(ay*by)/hcf;
    printf("LCM is: %d", lcm);
}
