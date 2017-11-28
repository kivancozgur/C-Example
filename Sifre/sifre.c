#include <stdio.h>
	
	int main(){
		
			int sifre;
			
				int i=0;
				
					do{
						
						printf("\nSifre :");
					
							scanf("%d",&sifre);
								
								if(sifre!=12345){
														
									i++;
															
									printf("\n%d .HATALI GIRIS",i);
														
										if(i==3) {
																	
											printf("\nSistemden Cikiliyor.."); 
																
											break;
																
											} 
											
										}
													
											else{
														
												printf("Sisteme Giris Yaptiniz..");
														
												}
														
						}
			
							while(sifre!=12345);
	
	}
