#include <stdio.h>

int main() 
{
    int enemyStrengh = 100;
    int antiAttack = 30;
    int sumAttack = 0;
    int input; 
    printf("Game Text Base\n");
    printf("The Enemies Come! strengh %d HP\n", enemyStrengh);

    while(enemyStrengh > 0) 
    {
        printf("Shoot the enemy >> push 1 and enter: ");
        scanf("%d", &input); 
        
        if(input == 1)
        {
            sumAttack = sumAttack + 1;
            enemyStrengh = enemyStrengh - antiAttack;
            
            if(enemyStrengh < 0) enemyStrengh = 0; 
            
printf("umpteenth shot %d! Remaining enemy strengh : %d HP\n",sumAttack, enemyStrengh);
        }
    }

    printf("\nTarget distroyed!, we shot as much %d times\n", sumAttack);
    return 0;
}
