#include <stdio.h>
#include <stdlib.h>

#include <stdio.h>
#include <stdlib.h>

int main()
{           //Addition
    int n,m,s=0,h;

        printf("1: Addition : Ajouter deux ou plusieurs nombres\n 2: Soustraction : Soustraire deux nombres\n 3: Division : Diviser deux nombres, avec gestion de la division par zero\n 4: Moyenne : Calculer la moyenne d'une serie de nombres\n 5: Valeur absolue : Calculer la valeur absolue d'un nombre\n 6: Exponentiation : Calculer un nombre à une certaine puissance\n 7: Racine carrée : Calculer la racine carrée d'un nombre positif\n\n");

    printf("choisir le nomber de l'opiration: ");
     scanf("%d", &n);

      switch (n) {
        case 1:
{
    printf("Donner moi la dimention du Tableau: ");
          scanf("%d",&m);
          int t[m];
          for (int i=1;i<=m;i++) {
         printf("donner moi un nomber");
        scanf("%d", &t[i]);
          }

          for(int i=1;i<=m;i++){
            s+=t[i];
          }
           printf("La somme est %d ",s);
            break;
}


        case 2:{ //Soustraction
              int n1,n2;
                  printf("choisir n1:");
                  scanf("%d", &n1);
                  printf("choisir n2:");
                  scanf("%d", &n2);
 printf("la solitions est %d\n ",n1-n2);


     break;
        }

        case 3:{  { //Division
            int nombre;
            printf("\t\tBienvenue dans le calcul de la valeur absolue d'un nombre\n\n");
            printf("Donnez-moi un entier : ");
            scanf("%d", &nombre);

            printf("La valeur absolue de %d est : %d\n\n", nombre, abs(nombre));
            break;
        }
            int n1,n2;
        float so;
             printf("choisir n1:");
               scanf("%d", &n1);
             printf("choisir n2:");
               scanf ("%d", &n2);
        so=(n1/n2);
             printf("la solition est %f\n\n ", so);

break;
        }
 case 5: {
           //valeur absolue
            int no;

            printf("Donnez moi un nomber : ");
            scanf("%d", &no);

            printf("La valeur absolue de %d est : %d\n\n", no, abs(no));
            break;
        }

        case 6: {


     double bass, expo;

            printf("Donnez moi la base :");
              scanf("%lf", &bass);
            printf("Donnez-moi l'exposant :");
              scanf("%lf", &expo);

            printf("%.2lf eleve a la puissance %.2lf est : %.2lf\n\n", bass, expo, pow(bass, expo));

            break;
        }
        }
    return 0;

}
