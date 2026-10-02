#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

typedef struct{
                char name[50];
                char size[50];
                int temp;
                int moons;
    }Planet;


int main()
{
    int choice;
    int score=0;
    char choose='\0';
    Planet planetchoice;

    Planet planet1={ "Mercury","smallest", 167,0};
    Planet planet2={ "Venus","slightly smaller than Earth", 464,0};
    Planet planet3={ "Earth","medium", 15,1};
    Planet planet4={ "Mars","About half of Earth", -63,2};
    Planet planet5={ "Jupiter","largest", -110,95};
    Planet planet6={ "Saturn","2nd largest", -140,274};
    Planet planet7={ "Uranus","3rd largest", -195,28};
    Planet planet8={ "Neptune","4th largest", -200,16};


    do{
        printf("Enter the number of the planet that you want yo know more about it.");
        printf("\n1. Mercury\n2. Venus\n3. Earth\n4. Mars\n5. Jupiter\n6. Saturn\n7. Uranus\n8. Neptune\n0. Quiz game");
        printf("choose the number of the planet you want: ");
        scanf("%d", &choice);

        if(scanf("%d", &choice) != 1){
            printf("Invalid input\n");
            while(getchar() != '\n');
            continue;
        }

        if((choice>8)||(choice<0)){
            printf("Invalid input\n");
            continue;
        }

        switch(choice){
            case 1:
                planetchoice = planet1;
                break;
            case 2:
                planetchoice = planet2;
                break;
            case 3:
                planetchoice = planet3;
                break;
            case 4:
                planetchoice = planet4;
                break;
            case 5:
                planetchoice = planet5;
                break;
            case 6:
                planetchoice = planet6;
                break;
            case 7:
                planetchoice = planet7;
                break;
            case 8:
                planetchoice = planet8;
                break;

        }

        if(choice == 0){
            printf("let's start a quiz game about what we have just learned about planets");
            break;
        }

        printf("\nName: %s\nSize: %s\nTemp in Celsius: %d\nHow many moons does it has: %d\n\n",planetchoice.name,planetchoice.size,planetchoice.temp,planetchoice.moons);


    }while(choice!=0);

    char questions[][50]={"What is the smallest planet in the Solar System?",
                        "Which planet is the hottest planet?",
                        "Which planet has the largest number of moons?",
                        "Which planet is known as the Red Planet?",
                        "Which planet is the largest in the Solar System?",
                        "Which planet is famous for its rings?",
                        "Which planet is closest to the Sun?",
                        "Which planet is farthest from the Sun?",
                        "Which planet has one moon?",
                        "Which planet has two moons?",
    };

    char choices[][50]={"\nA. Mars \nB. Mercury \nC. Venus \nD. Earth\n",
                        "\nA. Mercury \nB. Venus \nC. Mars \nD. Jupiter\n",
                        "\nA. Earth \nB. Jupiter \nC. Mars \nD. Venus\n",
                        "\nA. Venus \nB. Mars \nC. Mercury \nD. Saturn\n",
                        "\nA. Saturn \nB. Neptune \nC. Jupiter \nD. Uranus\n",
                        "\nA. Earth \nB. Mars \nC. Saturn \nD. Mercury\n",
                        "\nA. Venus \nB. Mercury \nC. Earth \nD. Mars\n",
                        "\nA. Uranus \nB. Saturn \nC. Neptune \nD. Jupiter\n",
                        "\nA. Earth \nB. Mars \nC. Venus \nD. Mercury\n",
                        "\nA. Venus \nB. Mars \nC. Earth \nD. Mercury\n",
    };

    char answers[]={'B','B','B','B','C','C','B','C','A','B'};

    int numberofquestions = sizeof(questions)/sizeof(questions[0]);

    for(int i=0; i<numberofquestions ; i++){
        printf("\n%s\n",questions[i]);
        printf("%s",choices[i]);
        printf("\n Enter your choice: ");
        scanf(" %c", &choose);

        choose = toupper(choose);

        if(choose == answers[i]){
            printf("Correct answer good job!");
            score++;
        }
        else{
            printf("Wrong answer keep going!");
        }
    }

    printf("\nYou got %d out of %d",score,numberofquestions);

    return 0;
}








































