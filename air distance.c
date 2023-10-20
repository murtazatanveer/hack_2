#include<stdio.h>
#include<math.h>
int main(){

// MADE BY : MURTAZA TANVEER
	// 
	// REG NO : SP23-BSE-096-2C
	
   printf("\nMADE BY : MURTAZA TANVEER\n\nREG NO  : SP23-BSE-096-2C\n\n\n");
   
   printf("____________DISTANCE CALCULATION PLATFOAM____________\n\n\n");



double lat_of_ori , lon_of_ori , lat_of_des , lon_of_des;

const float pi = 3.14;

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

  

  const float earth_rad = 6371.0;

// implementing formula and adding math.h header file

double distance;

distance = acos(sin(a) * sin(c) + cos(a) * cos(c) * cos(diff)) * (earth_rad);


printf("\n\n\n _______LOCATION DISTANCE________\n\n");

printf("ORIGIN : ( %.6lf , %.6lf )\n\n",lat_of_ori ,lon_of_ori);

printf("DESTINATION : ( %.6lf , %.6lf )\n\n",lat_of_des, lon_of_des);

printf("AIR DISTANCE :  %.6lf  KMS \n\n",distance);

//  compiling......





}