#include <stdio.h>

int main() {

	int bolen,sayi,bas,son,kactaneasal;
	
	
	printf("baslangic degerini giriniz: ");
	scanf(" %d",&bas);
	
	printf("son degeri giriniz: ");
	scanf(" %d",&son);
	
	
	
	


	for (sayi = bas; sayi < son ; sayi++) {

		if (sayi < 2) {
			continue;
		}
		bolen = 2;
		while (bolen < sayi){
		
        	if (sayi % bolen ==0){
		
            	break; }
        	bolen += 1;   }
    	if (bolen == sayi) {
		
       	 	kactaneasal += 1;
        	printf("\n%d",sayi); } }


	
	printf("\n%d tane asal sayi",kactaneasal);
	
	
	

	}
