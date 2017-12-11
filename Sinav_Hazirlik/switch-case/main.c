#include <stdio.h>
    int main() {
        int n1,n2,n3,selection,multiply;
            printf("\n\tNumber 1 : ");
                scanf("%d",&n1);
                    printf("\n\tNumber 2 : ");
                        scanf("%d",&n2);
                            printf("\n\tNumber 3 : ");
                                scanf("%d",&n3);
                                    printf("\n\t1-Addition\n\t2-Multiply\n\t3-Arithmetic Mean\n\t");
                                    	scanf("%d",&selection);
                                        switch(selection){
                                            case 1:printf("\n\t%d + %d + %d = %d",n1,n2,n3,n1+n2+n3);
                                                break;
                                            case 2:printf("\n\t%d * %d * %d = %d",n1,n2,n3,multiply);
                                                break;
                                            case 3:printf("\n\t( %d + %d + %d ) / 3 = %d",n1,n2,n3,(n1+n2+n3)/3);
                                                break;
                                        }
    }

