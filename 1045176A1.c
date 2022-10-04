/***1045176A1.c***
Student Name: Rahul Singh
Id: rsingh20
Due Date: October 7th 2022 at 11:59pm
Course Name: CIS 1500
***
I have exclusive control over this submission via my password. By including this statement in
this header comment, I certify that:
1) I have read and understood the University policy on academic integrity;
2) I have completed assigned video on academic integrity; and
3) I assert that this work is my own. I have acknowledged any and all material (code, data,
images, ideas or words) that I have used, whether directly quoted or paraphrased is my own
work. Furthermore, I certify that this assignment was prepared by me specifically for this course.
***
The program should be compiled using the following flags:
-std=c99
-Wall
Ex. compiling:
gcc 1045176A1.c -std=c99 -Wall
OR
gcc 1045176A1.c -std=c99 -Wall -o assn1
***
After compiling, the program should be run using one of the following commands:
./a.out
OR
./assn1
***/

#include <stdio.h>

int main(void) {
	//Initialization of main dish variables
	char addMain;
	int mainSelection = -1;
	float mainPrices[] = {10.99, 12.99, 8.99, 7.99, 7.99};
	char* mainOptions[] = {"Cheeseburger", "Double Cheeseburger", "Hotdog", "BLT Sandwich", "Chicken Burger"};

	//Initialization of side dish variables
	char addSide;
	int sideSelection = -1;
	float sidePrices[] = {3.49, 3.99, 3.49};
	char* sideOptions[] = {"Fries", "Sweet Potato Fries", "Onion Rings"};

	//Initialization of drink variables
	char addDrink;
	int drinkSelection = -1;
	float drinkPrices[] = {2.49, 2.99, 2.99, 2.99};
	char* drinkOptions[] = {"Lemonade", "Iced Tea", "Orange Juice", "Apple Juice"};

	//Initialization of dessert variables
	char addDessert;
	int dessertSelection = -1;
	float dessertPrices[] = {2.49, 1.49, 2.99};
	char* dessertOptions[] = {"Doughnut", "Chocolate Chip Cookie", "Cinnamon Roll"};

	//Initialization of total variables
	float subtotal = 0.00;
	float discounts = 0.00;
	float tax = 0.00;
	float total = 0.00;

	//Welcome + prompt for main dish
	printf("Welcome to SoCSBurger!\n\nCan I get you started with a main?\nEnter Y, y, N, n: ");
	scanf("%s", &addMain);

	//If yes to main, show main dish selection
	if(addMain == 'y' || addMain == 'Y') {
		printf("\nMains selection opening...\n\n");
		printf("Here are our main dish options\n");
		printf("	1. Cheeseburger               $10.99\n");
		printf("	2. Double Cheeseburger        $12.99\n");
		printf("	3. Hotdog                     $8.99\n");
		printf("	4. BLT Sandwich               $7.99\n");
		printf("	5. Chicken burger             $7.99\n");
		printf("Enter your choice: ");
		scanf("%d", &mainSelection);

		//If valid input, show selection and add to total
		if(mainSelection == 1 || mainSelection == 2 || mainSelection == 3 || mainSelection == 4 || mainSelection == 5) {
			mainSelection = mainSelection - 1;
			subtotal += mainPrices[mainSelection];
			printf("\n%s Selected!\n", mainOptions[mainSelection]);
		}
		else {
			printf("\nNo main selected\n");
		}
	}

	//Clear scanf buffer
	fflush(stdin);

	//Prompt for side dish
	printf("\nWould you like a side?\nEnter Y, y, N, n: ");
	scanf("%s", &addSide);

	//If yes to side, show side dish selection
	if(addSide == 'y' || addSide == 'Y') {
		printf("\nSides selection opening...\n\n");
		printf("Here are our side dish options\n");
		printf("	1. Fries                      $3.49\n");
		printf("	2. Sweet Potato Fries         $3.99\n");
		printf("	3. Onion Rings                $3.49\n");
		printf("Enter your choice: ");
		scanf("%d", &sideSelection);

		//If valid input, show selection and add to total
		if(sideSelection == 1 || sideSelection == 2 || sideSelection == 3) {
			sideSelection = sideSelection - 1;
			subtotal += sidePrices[sideSelection];
			printf("\n%s Selected!\n", sideOptions[sideSelection]);
		}
		else {
			printf("\nNo side selected\n");
		}
	}

	//Clear scanf buffer
	fflush(stdin);

	//Prompt for drink
	printf("\nWould you like a drink?\nEnter Y, y, N, n: ");
	scanf("%s", &addDrink);

	//If yes to side, show drink selection
	if(addDrink == 'y' || addDrink == 'Y') {
		printf("\nDrinks selection opening...\n\n");
		printf("Here are our drink options\n");
		printf("	1. Lemonade                   $2.49\n");
		printf("	2. Iced Tea                   $2.99\n");
		printf("	3. Orange Juice               $2.99\n");
		printf("	4. Apple Juice                $2.99\n");
		printf("Enter your choice: ");
		scanf("%d", &drinkSelection);

		//If valid input, show selection and add to total
		if(drinkSelection == 1 || drinkSelection == 2 || drinkSelection == 3 || drinkSelection == 4) {
			drinkSelection = drinkSelection - 1;
			subtotal += drinkPrices[drinkSelection];
			printf("\n%s Selected!\n", drinkOptions[drinkSelection]);
		}
		else {
			printf("\nNo drink selected\n");
		}
	}

	//Clear scanf buffer
	fflush(stdin);

	//Prompt for dessert
	printf("\nWould you like a dessert?\nEnter Y, y, N, n: ");
	scanf("%s", &addDessert);

	//If yes to side, show dessert selection
	if(addDessert == 'y' || addDessert == 'Y') {
		printf("\nDessert selection opening...\n\n");
		printf("Here are our dessert options\n");
		printf("	1. Doughnut                   $2.49\n");
		printf("	2. Chocolate Chip Cookie      $1.49\n");
		printf("	3. Cinnamon Roll              $2.99\n");
		printf("Enter your choice: ");
		scanf("%d", &dessertSelection);

		//If valid input, show selection and add to total
		if(dessertSelection == 1 || dessertSelection == 2 || dessertSelection == 3 || dessertSelection == 4) {
			dessertSelection = dessertSelection - 1;
			subtotal += dessertPrices[dessertSelection];
			printf("\n%s Selected!\n", dessertOptions[dessertSelection]);
		}
		else {
			printf("\nNo dessert selected\n");
		}
	}

	//Calculate discount (if any), taxes and totals
	if (mainSelection >= 0 && sideSelection >= 0 && drinkSelection >= 0 && dessertSelection >= 0) {
		discounts = (subtotal - dessertPrices[dessertSelection]) * 0.10;
		tax = (subtotal - discounts) * 0.13;
		total = subtotal - discounts + tax;
	}
	else if (mainSelection >= 0 && sideSelection >= 0 && drinkSelection >= 0) {
		discounts = subtotal * 0.10;
		tax = (subtotal - discounts) * 0.13;
		total = subtotal - discounts + tax;
	}
	else {
		tax = subtotal * 0.13;
		total = subtotal + tax;
	}

	//If subtotals = 0 then say Thanks only, else say Thank you + provide totals
	if (subtotal < 0.001) {
		printf("\nNo selections on the menu. We are looking forward to your next visit - have a nice day!\n");
	}
	else {
		printf("\nThank you for your order! Computing total...\n\n");
		printf("Sub-total:                    $%.2f\n", subtotal);
		printf("Discounts:                    $%.2f\n", discounts);
		printf("Tax:                          $%.2f\n", tax);
		printf("Total:                        $%.2f\n", total);
		printf("\nEnjoy your SoCSBurger meal - have a nice day!\n");
	}
}