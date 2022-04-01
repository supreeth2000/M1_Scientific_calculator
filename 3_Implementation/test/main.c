#include<stdio.h>
#include<math.h>
#include<stdlib.h>
int add(int a,int b);
float subtract(float a,float b);
float multiply(float a,float b);
float divide(float a,float b);
int fact(int n);
int npr(int n,int r);
int ncr(int n,int r);
 int power(int x,int y);
 void quadratic_roots(double a_1,double b_1,double c_1);
 //float sq_root(float x);
 float exponential(float x);
 float sine_value(float x);
 float cos_value(float x);
 float tan_value(float x);
int determinant();
float square(float x);
float cube(float x);

int main()
{
    char o;
    float a,b,sum,diff,mul,quotient,s,c,sin_val,cos_val,tan_val,t,sine_val,c_val,square_value,cube_value,sval,cval,exp_value;
    int factorial,n,r,per,com,x,y,pow_res,sq_rt,a_fac,e;
    double a_1,b_1,c_1;
    long det_val;
    printf("Select the operation to be performed\n");
    printf("Enter '1' for addition\nEnter '2' for subtraction\nEnter '3' for multiplication\nEnter '4' for division\n");

   printf("Enter '5' to find factorial\nEnter '6' to find permutation of n and r\nEnter '7' to find combination of n and r\n");
    printf("Enter '8' to find power of a number \nEnter '9' to find roots of a quadratic equation\nEnter '0' to find exponential of a number\n");
    printf("Enter 'A'to find square root of a number\nEnter 'B' to find exponential\nEnter 'C' to find sine(x)\nEnter 'D' to find cos(x)\n");
    printf("Enter 'E' to find tan(x)\nEnter 'F' to find determinant of 3*3 matrix\nEnter 'G' to find square of a number\n");
    printf("Enter 'H' to find cube of a number\n");
    scanf("%c",&o);
    switch(o){
        case '1' :
            printf("Enter two numbers for addition\n");
            scanf("%f %f",&a,&b);
           sum=add(a,b);
            printf("Sum is %f",sum);
            break;

        case '2' :
            printf("Enter two numbers for subtraction\n");
            scanf("%f %f",&a,&b);
           diff=subtract(a,b);
            printf("Difference is %f",diff);
            break;

        case '3':
            printf("Enter two numbers for multiplication\n");
            scanf("%f %f",&a,&b);
            mul=multiply(a,b);
            printf("Product is %f",mul);
            break;

        case '4':
            printf("Enter two numbers for division\n");
            scanf("%f %f",&a,&b);
           quotient=divide(a,b);
            printf("Quotient is %f",quotient);
            break;

        case '5' :
            printf("Enter the number\n");
            scanf("%d",&a_fac);
           factorial=fact(a_fac);
            printf("Factorial of %d is %d",a_fac,factorial);
            break;

        case '6':
            printf("Enter the value of n and r\n");
            scanf("%d %d",&n,&r);
            per=npr(n,r);
            printf("Permutation is %d",per);
            break;

        case '7':
            printf("Enter the value of n and r\n");
            scanf("%d %d",&n,&r);
            com=ncr(n,r);
            printf("Combination is %d",com);
            break;

        case '8':
            printf("Enter the value of base and exponent\n");
            scanf("%d %d",&x,&y);
            pow_res=power(x,y);
            printf("The result is %d",pow_res);
            break;

        case '9':
            quadratic_roots(a_1,b_1,c_1);
            break;

        case 'A':
            printf("Enter the number\n");
            scanf("%f",&a);
            //sq_rt=sq_root(a);
            printf("Square root of %f is %f",a,sqrt(a));
            break;

        case 'B' :
            printf("Enter the exponent\n");
            scanf("%d",&e);
            exp_value=exponential(e);
            printf("Exponential of %d if %f",e,exp_value);
            break;

        case 'C':
            printf("Enter angle value\n");
            scanf("%f",&s);
            sine_val=sine_value(s);
            printf("Sine of the angle %f is %f",s,sine_val);
            break;

        case 'D':
            printf("Enter angle value\n");
            scanf("%f",&c);
            cos_val=cos_value(c);
            printf("Cosine of the angle %f is %f",c,cos_val);
            break;

        case 'E':
            printf("Enter angle value\n");
            scanf("%f",&t);
            tan_val=tan_value(t);
            printf("Tangent of the angle %f is %f",t,tan_val);
            break;

        case'F':
            det_val=determinant();
            printf("\nThe determinant value is %ld",det_val);
            break;

        case 'G':
            printf("Enter the number\n");
            scanf("%f",&sval);
            square_value=square(sval);
            printf("The square of %f is %f",sval,square_value);
            break;

        case 'H':
            printf("Enter the number\n");
            scanf("%f",&cval);
            cube_value=cube(cval);
            printf("The cube of %f is %f",cval,cube_value);
            break;

        default :
            printf("Enter a valid choice");
            break;
             
    }
        return 0;

}

int add(int a,int b)
{
    int s; 
    s=a+b;
    return s;
}
float subtract(float a,float b)
{
    float s;
    s=a-b;
    return s;
}
float multiply(float a,float b)
{
    float s;
    s=a*b;
    return s;
}
float divide(float a,float b)
{
    if (b==0){
        printf("Division by zero\n");
        exit(0);
        }
    float s;
    s=a/b;
    return s;
}
 int fact(int n)
 {
     int i,result=1;
     for(i=1;i<=n;i++)
     {
         result=result*i;
     }
         return result;

     
 }

 int npr(int n,int r){
     int res;
     res=fact(n)/fact(n-r);
     return res;
 }

 int ncr(int n,int r){
     int res_ncr;
     res_ncr=fact(n)/(fact(r)*fact(n-r));
     return res_ncr;
 }

 int power(int x,int y){
     int res_pow;
     res_pow=pow(x,y);
     return res_pow;
 }

 void quadratic_roots(double a_1,double b_1,double c_1){
    
    double  discriminant, root1, root2, realPart, imagPart;
    printf("Enter coefficients a, b and c: ");
    scanf("%lf %lf %lf", &a_1, &b_1, &c_1);

    discriminant = b_1 * b_1- 4 * a_1 * c_1;

    // condition for real and different roots
    if (discriminant > 0) {
        root1 = (-b_1 + sqrt(discriminant)) / (2 * a_1);
        root2 = (-b_1 - sqrt(discriminant)) / (2 * a_1);
        printf("root1 = %.2lf and root2 = %.2lf", root1, root2);
    }

    // condition for real and equal roots
    else if (discriminant == 0) {
        root1 = root2 = -b_1 / (2 * a_1);
        printf("root1 = root2 = %.2lf;", root1);
    }

    // if roots are not real
    else {
        realPart = -b_1/ (2 * a_1);
        imagPart = sqrt(-discriminant) / (2 * a_1);
        printf("root1 = %.2lf+%.2lfi and root2 = %.2f-%.2fi", realPart, imagPart, realPart, imagPart);
    }

} 

 /*float sq_root(float x){
     float ans;
      ans=sqrt(x);
     return ans;
 }*/

 float exponential(float x){
     float result;
     result=exp(x);
     return result;
 }
 float sine_value(float x){
     float res_sin;
     res_sin=sin(x);
     return res_sin;
 }
 
float cos_value(float x){
     float res_cos;
     res_cos=cos(x);
     return res_cos;
 }

 float tan_value(float x){
     float res_tan;
     res_tan=tan(x);
     return res_tan;
 }

 
int determinant(){
 int a[3][3],i,j;
  long determinant;
  printf("Enter the 9 elements of matrix: ");
  for(i = 0 ;i < 3;i++)
      for(j = 0;j < 3;j++)
           scanf("%d", &a[i][j]);
 
  printf("\nThe matrix is\n");
  for(i = 0;i < 3; i++){
      printf("\n");
      for(j = 0;j < 3; j++)
           printf("%d\t", a[i][j]);
  }
 
  determinant = a[0][0] * ((a[1][1]*a[2][2]) - (a[2][1]*a[1][2])) -a[0][1] * (a[1][0]
   * a[2][2] - a[2][0] * a[1][2]) + a[0][2] * (a[1][0] * a[2][1] - a[2][0] * a[1][1]);
  	return determinant;
  	
}

float square(float x){
    return (x*x);
}
float cube(float x){
    return (x*x*x);
}
