#include <stdio.h>
#include <stdlib.h>

//22-02-23
//Medrano Reyes Julio Cesar
//Primera versión

int main(){
	
	char a,b,opc,opc1;
	float n1,n2,n3,n4,n5,n6,n7,n8,n9,n10,r1,v1;
	
	printf("Bienvenide al evaluador de Ya no te romperan el corazon, mientras sepas que es lo que buscas:)\n\nContesta estas preguntas y te diremos si es la persona indicada o si es posible un mal emperejamiento:)");
	
	printf("\n\nEmpezaremos una serie de preguntas para ver si estas con la persona correcta");
	
	printf("\n\n¿Te emocionas mucho al verla? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc == 'a'){
		n1 = 2;
	}
	else{
		(opc == 'b');
		n1 = 0;
	}
	
	printf("\n\n¿Te llevas bien con esa persona? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n2 = 2;
	}
	else{
		(opc == 'b');
		n2 = 0;
	}
	printf("\n\n¿Tienen al menos 2 hobbies comun? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n3 = 3;
	}
	else{
		(opc == 'b');
		n3 = 1;
	}
	printf("\n\n¿Disfrutas mucho el tiempo que pasan juntos? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n4 = 1;
	}
	else{
		(opc == 'b');
		n4 = 0;
	}
	printf("\n\n¿Pelean mucho? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n5 = -1;
	}
	else{
		(opc == 'b');
		n5 = 1;
	}
	printf("\n\n¿Resuelven sus conflictos entablando conversación? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n6 = 3;
	}
	else{
		(opc == 'b');
		n6 = 1;
	}
	printf("\n\n¿Se respetan los limites que se han puesto entre ustedes? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n7 = 2;
	}
	else{
		(opc == 'b');
		n7 = -2;
	}
	printf("\n\n¿Respetan los gustos el uno del otro? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n8 = 1;
	}
	else{
		(opc == 'b');
		n8 = 0;
	}
	printf("\n\n¿Te ves con esa persona en un futuro no cercano? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n9 = 3;
	}
	else{
		(opc == 'b');
		n9 = -1;
	}
	printf("\n\n¿Disfrutan peliculas parecidas? \na)Si \nb)No \n ");
	scanf(" %c",&opc1);
	
	if(opc1 == 'a'){
		n10 = 3;
	}
	else{
		(opc == 'b');
		n10 = 1;
	}
	
	r1 = n1+n2+n3+n4+n5+n6+n7+n8+n9+n10;
	v1 = ((r1 / 21) * 100);
	if (v1 > 70){
		printf("Tu resultado es: %.0f",v1);
		printf("\nVale la pena arriesgarse:)");
	}
	else{
		printf("Tu resultado es: %.0f",v1);
		printf("\nNo vale la pena:(");
		
	}
	
}
