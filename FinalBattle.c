#include <stdio.h>
#include <stdlib.h>    
#include <string.h>


int main()
{
	//Player and enemy health points
	int Phealth = 100;
	int Ehealth = 100;
	int E2health = 100;

	//Damage per Attack type
	int staticplayerdamage = 10;
	int staticenemydamage = 5;
	int critplayerdamage = rand() % 5 + 10;
	int critenemydamage = rand() % 15;
	int critenemy2damage = rand() % 15;

	int Playerchoice;
	int Computerchoice = 1;
	int Computer2choice = 1;


	//Turns will keep going until either players Health reaches 0
	while (Phealth > 0 && Ehealth > 0 && E2health > 0) {

		int critplayerdamage = rand() % 5 + 10;
		int critenemydamage = rand() % 10;

		// Attacking player will decide their attack type
		printf("------- Steel Panther Health:%d /// (Enemy)Young Green Dragon:%d  /// (Enemy2)Death Dog Health:%d---------\n", Phealth, Ehealth, E2health);
		printf("--------- It is your turn to attack now! -----------\n");
		printf("///  Enter '1' for Normal Damage to Young Green Dragon /// Enter '2' for Critical Damage to Young Green Dragon /// Enter '3' for Heal /// Enter '4' for Normal Damage to Dealth Dog // Enter '5' for Critical Damage to Dealth Dog ///*Secret* Enter '6' for the best attack! \n");
		scanf_s("%d", &Playerchoice);

		switch (Playerchoice) {

			//Normal attack will have a set amount which is 5 damage
		case 1:
			printf(" You have thrown a major punch towards Young Green Dragon!\n");
			Ehealth = Ehealth - staticplayerdamage;
			int damage;
			damage = staticplayerdamage;
			printf(" The punch lands square on the face of the Young Dragon.... %d Damage has been dealt to Young Green Dragon\n", damage);
			break;

			// Critical hit will have a random amount added to the base damage amount which is 5 + 10
		case 2:
			printf(" Steel Panther finds a Steel Longsword on the ground and launches into flight!\n");
			Ehealth = Ehealth - critplayerdamage;
			int damage1;
			damage1 = critplayerdamage;
			printf(" Steel Panther lungs downward and strikes Young Green Dragon... %d Damage has been dealt to Young Green Dragon\n", damage1);
			break;

			// Heal 	
		case 3:
			printf("Steel Panther reaches into his bag of tricks and finds a bright blue bottle! \n");
			Phealth = Phealth + 25;
			int HEAL;
			HEAL = 25;
			printf(" Steel panther twists the top off and chugs the contents! %d Health Points have regenerated!\n", HEAL);
			break;

		case 4:
			printf(" Steel Panther charges up their fist!\n");
			E2health = E2health - staticplayerdamage;
			int damage6;
			damage6 = staticplayerdamage;
			printf(" Steel Panther with a glowing red fist heads fist first towards Dealth Dog... %d Damage has been dealt to Death Dog\n", damage6);
			break;

		case 5:
			printf(" Steel Panther begins to chant and rocks begin to rise above the ground...\n");
			E2health = E2health - critplayerdamage;
			int damage7;
			damage7 = critplayerdamage;
			printf(" Steel Panther pushes his arms towards as rocks and rubble start to fling towards Death Dog... %d Damage has been dealt to Death Dog\n", damage7);
			break;

		case 6:
			printf("Steel Panther grabs two Longswords from his back and begins to run towards both enemys\n");
			Ehealth = Ehealth - critplayerdamage;
			int damage8;
			damage8 = critplayerdamage;
			E2health = E2health - critplayerdamage;
			int damage9;
			damage9 = critplayerdamage;
			printf("Steel Panther does damage to both enemys %d has been dealt to the Young Green Snake and %d damage has been dealt to the Death Dog\n", damage8, damage9);
			break;




			// Will print text if number is not found
		default:
			printf(" Not a valid Choice! Please chose again!\n");
			break;
		}

		// Enemys turn
		// Enemy will always attack with critical damage (random amount out of 15)
		switch (Computerchoice)

		{
		case 1:
			printf(" The Young Green Snake starts to hiss and strikes with its fangs aimed right at your neck!\n");
			Phealth = Phealth - critenemydamage;
			int damage4;
			damage4 = critenemydamage;
			printf(" Young Green Snake dealt %d Damage!\n", damage4);
			break;



		}

		switch (Computer2choice)
		{
		case 1:
			printf(" Death Dog lets out a loud howl!! This sends ghosts hurling towards you!\n");
			Phealth = Phealth - critenemy2damage;
			int damage5;
			damage5 = critenemy2damage;
			printf(" Death Dog has dealt %d Damage!\n", damage5);
			break;


		}



		system("pause");
		system("cls");
	}

	printf("---------This is the End of the Battle!!!!----------\n");
	printf("  Steel Panther has %d Health left....\n", Phealth);
	printf("  Young Green Snake has %d  Health left.....\n", Ehealth);
	printf(" Death Dog has %d Health left..\n", E2health);
	printf("----------Who has won this battle?!?!----------  \n");

	if (Phealth <= 0) {
		printf("You have lost this fight.... May the next battle be in your favor..... \n");
	}
	if (Ehealth <= 0) {
		printf("You have Won this fight...May the next battle be in your favor.... \n");
	}
	if (E2health <= 0) {
		printf("You have Won this fight... May the next battle be in your favor.... \n");
	}

	return 0;

}