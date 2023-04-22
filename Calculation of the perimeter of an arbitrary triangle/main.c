#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main(int argc, char *argv[])
{
    double AB,BC,CA,X,Y;
    double P,A[2],B[2],C[2],x,y;
  printf(" Ax = ");
  scanf("%lf",&x);
  A[0]=x;
  printf(" Ay = ");
  scanf("%lf",&y);
  A[1]=y;
  
  printf(" Bx = ");
  scanf("%lf",&x);
  B[0]=x;
  printf(" By = ");
  scanf("%lf",&y);
  B[1]=y;
  
  printf(" Cx = ");
  scanf("%lf",&x);
  C[0]=x;
  printf(" Cy = ");
  scanf("%lf",&y);
  C[1]=y;
  
  
  X=A[0]-B[0];
  Y=A[1]-B[1];
  AB=(X*X)+(Y*Y);
  AB=sqrt(AB);
  
  X=B[0]-C[0];
  Y=B[1]-C[1];
  BC=(X*X)+(Y*Y);
  BC=sqrt(BC);
  
  X=C[0]-A[0];
  Y=C[1]-A[1];
  CA=(X*X)+(Y*Y);
  CA=sqrt(CA);
    
    printf(" AB = %f\n",AB);
    printf(" BC = %f\n",BC);
    printf(" CA = %f\n",CA);
    
    P=AB+BC+CA;
    printf(" P = %f\n",P);
  system("PAUSE");	
  return 0;
}
