#include <stdio.h>

    int main() {
        int edge1,edge2,edge3;
            printf("\n\t PLEASE ENTER THE EDGES OF THE TRIANGLE \n");
                printf(" \n\tEdge 1 : ");
                    scanf("%d",&edge1);
                        printf(" \n\tEdge 2 : ");
                            scanf("%d",&edge2);
                                printf(" \n\tEdge 3 : ");
                                    scanf("%d",&edge3);

                                        if(edge1==edge2 && edge2==edge3) {
                                            printf(" \n\tThis is equilateral triangle");
                                        }
                                            else if (edge1==edge2 || edge1==edge3 || edge2==edge3){
                                                printf(" \n\tThis is isosceles triangle");

                                            }
                                                else{
                                                    printf(" \n\tThis is diagonal triangle");
                                                }
    }
