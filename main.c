#include <stdio.h>

int main()
{
    int y;
    printf(" Write 1 if you want to use Celsius or write 2 if you want to use Fahrenheit.\n");
    scanf("%d", &y);
    if (y == 1){

        int DI, T, RH;

       /* Εισαγωγή μίας τιμή για την θερμοκρασία που συμβολίζεται με T και την μέση μηνιαία σχετική υγρασία αέρα συμβολίζεται με RH */
       printf("\n\n Insert a value for Temperature T: ");
       scanf("%d", &T);
       printf("\n Insert a value for Monthly Moisture RH: ");
       scanf("%d", &RH);

       /* Πράξη για να βρεθεί η DI */
       DI = T - 0.55*(1-0.01*RH)*(T - 14.5);
       printf("\n\nThe number of the DI is: %d\n", DI);

       /* Σύγκριση της τιμής DI */
       if(DI <= 21)
           printf("\nThere is no discomfort!\n");
       else if(21 < DI && DI < 24)
           printf("\nLess than half of the population feels discomfort!\n");
       else if(24 <= DI && DI < 27)
           printf("\nMore than half of the population feels discomfort!\n");
       else if(27 <= DI && DI < 29)
           printf("\nThe most percentage of the population feels discomfort!\n");
       else if(29 <= DI && DI < 32)
           printf("\nEveryone feels discomfort!\n");
       else if(DI >= 32)
           printf("\nState of increased preparedness in hospitals\n");

       /* Επιλογή για το τι χρειάζεται να μειωθεί για να φτάσει στο No discomfort! */
       int x, Temperature, Moisture;
       if (DI > 21){
           printf("\n\nWrite 1 for Temperature or 2 for Moisture depending on what you want to change for the DI to reach No discomfort.\n");
           scanf("%d", &x);
           if (x == 1){
               Temperature = (((0.07975*RH)+21-7.975)/(0.45+(0.0055*RH)));
               T = T - Temperature;
               printf("The Temperature has to be reduced with: %d",T);
        }
           if (x == 2){
               Moisture = ((21-T)/(0.0055*(T-14.5)))+100;
               RH = RH - Moisture;
               printf("The Moisture has to be reduced with: %d",RH);
        }
    }
    }
    if (y == 2){
         int DI, T, RH, f;

         /* Εισαγωγή μίας τιμή για την θερμοκρασία που συμβολίζεται με T και την μέση μηνιαία σχετική υγρασία αέρα συμβολίζεται με RH */
         printf("\n\nInsert a value for Temperature T in Fahrenheit: ");
         scanf("%d", &f);
         T = ((f-32)*5)/9;
         printf("\n Insert a value for Monthly Moisture RH: ");
         scanf("%d", &RH);

         /* Πράξη για να βρεθεί η DI */
         DI = T - 0.55*(1-0.01*RH)*(T - 14.5);
         printf("\n\nThe number of the DI is: %d\n", DI);

         /* Σύγκριση της τιμής DI */
         if(DI <= 21)
             printf("\nThere is no discomfort!\n");
         else if(21 < DI && DI < 24)
             printf("\nLess than half of the population feels discomfort!\n");
         else if(24 <= DI && DI < 27)
             printf("\nMore than half of the population feels discomfort!\n");
         else if(27 <= DI && DI < 29)
             printf("\nThe most percentage of the population feels discomfort!\n");
         else if(29 <= DI && DI < 32)
             printf("\nEveryone feels discomfort!\n");
         else if(DI >= 32)
             printf("\nState of increased preparedness in hospitals\n");

         /* Επιλογή για το τι χρειάζεται να μειωθεί για να φτάσει στο No discomfort! */
         int x, Temperature, Moisture;
         if (DI > 21){
             printf("\n\nWrite 1 for Temperature or 2 for Moisture depending on what you want to change for the DI to reach No discomfort.\n");
             scanf("%d", &x);
            if (x == 1){
                Temperature = (((0.07975*RH)+21-7.975)/(0.45+(0.0055*RH)));
                T = T - Temperature;
                f = ((T*9)/5)+32;
                printf("The Temperature has to be reduced with: %d Fahrenheit",f);
            }
            if (x == 2){
                Moisture = ((21-T)/(0.0055*(T-14.5)))+100;
                RH = RH - Moisture;
                printf("The Moisture has to be reduced with: %d",RH);
            }
         }
    }
}
