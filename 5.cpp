#include <stdio.h>
#include <math.h>
#include <windows.h>
int main()
{
      
		int one,two,three;
		int y;
		int x=0;


        
	
	    for(x=100;x<=999;x++)
		{
			
			
			  one=x*0.01;

			  two=x*0.1;
			  two=two%10;

			  three=x%10;
			  three=three%10;

              y=pow(one,3)+pow(two,3)+pow(three,3);

			  if(y!=x)
			  {
			  
                continue;
			  }
			  else
			  {   printf("Ë®ÏÉ»¨ÊÇ%d\n\n",y);
			      Sleep(200);
			  }
       

		
		Sleep(2000);


		}







     return 0;
}