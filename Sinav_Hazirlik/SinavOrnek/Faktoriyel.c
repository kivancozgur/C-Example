#include <stdio.h>

	int main()
	{
	    int sayi;
	    	printf("Faktoriyeli alinacak sayiyi giriniz:");
	    		scanf("%d", &sayi);
	    			int toplam = 1, i;
	    				for(i = 1; i <= sayi; i++)
	   					{
	    				    toplam *= i;
	    				}
	   							printf("%d sayisinin faktoriyeli = %d", sayi, toplam);
	   								return 0;
	}
