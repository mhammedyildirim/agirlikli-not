#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(void) {
	
	int sinav1, sinav2, final;
	double agirlik;
	char harf;
	printf("iki arasinav ve final notunu sirayla ve birer bosluk birakarak giriniz: ");
	scanf("%d%d%d",&sinav1,&sinav2,&final);
	/*agirlikli not hesabi kismi*/
	agirlik=sinav1*0.20+sinav2*0.30+final*0.50;
	printf("agirlikli notunuz : %5.2f\n",agirlik);

	/*harf notunun bulunmasi*/
	if(agirlik>=90)
		harf='A';
	else if(agirlik>=80)
		harf='B';
		else if(agirlik>=70)
			harf='C';
			else if(agirlik>=60)
				harf='D';
					else 
					harf='F';
	
	printf("harf notunuz: %c",harf);
							
	return 0;
}
