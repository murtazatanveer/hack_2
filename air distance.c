#include<stdio.h>
#include<math.h>
int main(){

double lat_of_ori , lon_of_ori , lat_of_des , lon_of_des;

printf("\n\nEnter Latitude and Longitude of Origin ( In Degrees )\n\n");

printf("Latitude : ");
scanf("%lf",&lat_of_ori);

printf("\n\nLongitude : ");
scanf("%lf",&lon_of_ori);


printf("\n\nEnter Latitude and Longitude of Destination ( In Degrees )\n\n");

printf("Latitude : ");
scanf("%lf",&lat_of_des);

printf("\n\nLongitude : ");
scanf("%lf",&lon_of_des);

// i convert it in radians to use in formula 

double a = (lat_of_ori*pi)/180;

double b = (lon_of_ori*pi)/180;

double c = (lat_of_des*pi)/180;

double d = (lon_of_des*pi)/180;


// i use the converted radians a , b , c and d in formula given below

double diff = ( d - b);


 
 // before implementing formula i use "const" with pi and radius of earth because it is constant in program

  const float pi = 3.14;

  const float earth_rad;

// implementing formula and adding math.h header file

double distance;








}