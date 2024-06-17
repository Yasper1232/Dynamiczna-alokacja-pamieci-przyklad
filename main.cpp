#include <stdio.h>
#include <stdlib.h>


int main(){

    int i, aSize;
    int * randomNums;

    double total = 0;
    int biggest,smallest;
    float average;

    printf("ile liczb losowych chcesz w tablicy??");
    scanf("%d",&aSize);

            //alokacja tablicy tylu liczb, ile zażądał użytkownik

    randomNums = (int *)malloc(aSize*sizeof(int));

            //teraz sprawdzam czy tablica zostala prawidlowo alokowana

            if(!randomNums){

                printf("nie udalo sie alokowac tablicy!\n");
                exit(1);

            }

            //przeglada talice i przypisuje jej elementom
            // losowe liczby z przedzialu od 0 do 500

            for(i=0;i<aSize;i++){

                randomNums[i] = (rand() % 500)+1;

            }

            // inicjalizacja max i min wartosci w celach porownawczych

            biggest = 0;
            smallest = 500;

                    for(i=0;i<aSize;i++){

                        total+=randomNums[i];

                        if(randomNums[i] > biggest){

                            biggest = randomNums[i];

                        }

                        if(randomNums[i]<smallest){

                            smallest = randomNums[i];

                        }
                            average = ((float)total) / ((float)aSize);

                    }

    printf("najwieksza liczba : %d,\n",biggest);
    printf("najmniejsza liczba %d,\n",smallest);
    printf("Średnia : %.2f,\n",average);

    printf("wygenerowane liczby to : \n");

    for(i=0;i<aSize;i++){

        printf("Liczba[%d]: %d,\n",i,randomNums[i]);

    }
    free(randomNums);
    return 0;
}