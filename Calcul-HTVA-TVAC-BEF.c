#include <stdio.h>
#include <stdlib.h>

int main(){
    int Quantiter;
    float PrixUnitaire, ResultatHTVA, ResultatTVA, ResultatBEF;

    printf("Encodez le prix : ");
    fflush(stdin);
    scanf("%f", &PrixUnitaire);

    printf("Encodez la quantite :");
    fflush(stdin);
    scanf("%d", &Quantiter);

    ResultatHTVA = PrixUnitaire * Quantiter;
    printf("\n-> Le prix HTVA : %.2f euro\n", ResultatHTVA);

    ResultatTVA = ResultatHTVA * 1.21;
    printf("\n-> Le prix TVAC : %.2f euro\n", ResultatTVA);

    ResultatBEF = ResultatTVA * 40.3399;
    printf("\n-> Le prix en BEF : %.2f BEF\n", ResultatBEF);

    return 0;
}
