#include <stdio.h>
void main()
{  int p,c,m,t,mp;

   printf("Eligibility Criteria :\n");
   printf("score in Maths >=65\n");
   printf("and score in Phy >=55\n");
   printf("and score in Chem>=50\n");
   printf("and Total in all three subject >=190\n");
   printf("or Total in Maths and Physics >=140\n");
   printf("-------------------------------------\n");

   printf("Input the score obtained in mathematics :");
   scanf("%d",&p);
   printf("Input the score obtained in physics :");
   scanf("%d",&c);
   printf("Input the score obtained in chemistry :");
   scanf("%d",&m);
   printf("Total score of Maths, Physics and Chemistry : %d\n",m+p+c);
   printf("Total score of Maths and  Physics : %d\n",m+p);

   if (m>=65)
         if(p>=55)
             if(c>=50)
	        if((m+p+c)>=190||(m+p)>=140)
	           printf("Oo Good you are eligible for admission.\n");
	        else
	          printf(" Sorry you are not  eligible.\n");
             else
	    printf(" Sorry you are  not eligible.\n");
         else
	   printf(" Sorry you are not eligible.\n");
    else
     printf(" Sorry you are not eligible.\n");

    
}