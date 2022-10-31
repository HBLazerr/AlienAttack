// Alien Attack
// The inevitable alien strike upon us.

//including libraries for the program
//this allows us to display to the screen and recieve user input
#include <iostream>
//this library lets us use strings in the code
#include <string>

//library for changing the console's color
#include <stdlib.h>


//Prototype functions below. v
//the return type of this function is void, meaning it returns nothing.
void DisplayTitle();

//this functions return type is string
std::string GetUserName();

//first scenario
int EscapeAlien();

//second scenario after choosing best
int ChoseRun();

//third scenario after choosing best
int ChoseUpstairs();

//fourth scenario after choosing to stay
int ChoseMovie();

//this function displays ending prompt
void ExitGame();

//creates and sets boolean 'alive' to true
bool alive = true;

//this the main function
//all programs require a main function
int main() // this line is a function signature
{ //this scope operator is what starts our function "Main"

	// Function body

	// Changes console BG to black(0)
	//and FG to light green(A)
	system("Color 0A");

	//this calls the display title function
	DisplayTitle();
	
	//gets the users input/name
	GetUserName();

	//function containing first scenario
	EscapeAlien();

	if (alive == true) {
		//function containing second scenario
		ChoseRun();
	}

	if (alive == true) {
		//function containing third scenario
		ChoseUpstairs();
	}

	if (alive == true) {
		//function containing ending scenario
		ChoseMovie();
	}

	//displays game over prompt
	ExitGame();

	//need to return an int from the main function
	return 0;

} //this scope operator is what ends our function "Main"



/* this functions return type is void because your not expecting 
it to give you a value back. Your simply displaying a message. */
//this is where we define the DisplayTitle function. In other words this is the function definition for DisplayTitle()
void DisplayTitle()
{ //starts function "DisplayTitle"
	// body of function

	//displays the title
	std::cout << "\n\n *** Alien Attack ***";
	std::cout << "\nAn interactive simulation where aliens invade your town and you have to\n";
	std::cout << "quickly escape your home in order to get rescued.\n" << std::endl;

} //ends function "DisplayTitle"

//this function gets the username and returns it.
std::string GetUserName() {
	//get the users name

	/* things to note :
	datatype of the variable is std::string
	variable name is userName */
	std::string userName;

	//asks the user for input by displaying a prompt
	std::cout << "For a personalized experience, please enter your name: ";

	//gets the users name and stores it in the vaiable userName
	std::getline(std::cin, userName);

	//Introduces the user with a prologue discription and also by name
	std::cout << "\n The Inevitable Alien Attack: " << userName << "'s Point of View\n\n\n" << std::endl;
	std::cout << "You are sitting on your couch watching The Mandalorian when suddenly an ugly alien jumps in through your window! \n" << std::endl;

	//returns the users name
	return userName;
}

//this function holds our prompts and users choice for scenario 1
int EscapeAlien()
{//this scope operator starts function "EscapeAlien"
	//Body of the function

	//displays prompt to the user
	std::cout << " How do you react? Do you A, make a run for it. Or B, try whacking it with your broom! (type A or B)\n";

	//created variable with datatype of string and named it userChoice
	std::string userChoice;

	//gets the users choice and stores it in the variable userChoice
	std::getline(std::cin, userChoice);

	//evaluate the users choice
	if (userChoice == "A" || userChoice == "a") {
		//best choice user could make
		std::cout << "\nYou decide to run for it so you make for the exit but another alien is waiting for you on the other side of the door.\n";
		std::cout << " You can either go up the stairs or into the basement.\n\n";
	}
	else if (userChoice == "B" || userChoice == "b") {
		//worst choice user could make
		std::cout << "\nYou get your broom out of the cupboard but the alien just devours it in one bite and then devours you.\n\n";
		alive = false;
	}
	else {
		//catches every other response in case the user did not input a valid choice
		std::cout << "\nYou decide to just stand there and the Alien slaps you silly til you pass out back on the couch.\n\n";

		//sets alive variable to false
		alive = false;
	}

	//returns int value of 0
	return 0;
}//this scope operator ends function "EscapeAlien"

//this function holds our prompts and users choice for scenario 2
int ChoseRun()
{//this scope operator starts function "ChoseRun"
	//body of the function

	//displays second prompt after choosing to run
	std::cout << " Which way are you heading? Quickly up the stairs(A) or slide-cancel to get down into the basement(B)? (type A or B)\n";

	//created variable with datatype of string and named it userChoice
	std::string userChoice;

	//gets the users second choice and stores it in the variable userChoice
	std::getline(std::cin, userChoice);

	//evaluate the users second choice
	if (userChoice == "A" || userChoice == "a") {
		//best choice user could make
		std::cout << "\nYou need to get upstairs, you run in to your room and the aliens follow you. \nYou soon realize you've just cornered yourself!\n";
		std::cout << " You have two options. \n\n";
	}
	else if (userChoice == "B" || userChoice == "b") {
		//worst choice user could make
		std::cout << "\nYou run down into the basement but you have no escape route. The aliens come down and bite off your puny human head. \n\n";

		//sets bool value to false to exit game
		alive = false;
	}
	else {
		//catches every other response in case the user did not input a valid second choice
		std::cout << "\nYou freeze in the moment because you can feel the alien breathing right on your neck. It then proceeds to devour you! \n\n";

		//exits game by making 'alive' false
		alive = false;
	}

	//this returns a int value of 0
	return 0;

}//this scope operator ends function "ChoseRun"

//this function holds our prompts and users choice for scenario 3
int ChoseUpstairs()
{//this scope operator starts function "ChoseUpstairs"
	//Body of the function

	//displays third prompt after choosing to run upstairs
	std::cout << " Do you: A - surrender, there's no hope. Maybe they will be merciful and just take you prisoner.\n";
	std::cout << " OR B - Your not going down without a fight, you decide to jump out the window. (type A or B) \n";

	//created variable with a datatype of string and named it userChoice
	std::string userChoice;

	//gets the users third choice and stores it in the variable userChoice
	std::getline(std::cin, userChoice);

	//evaluate the users choice
	if (userChoice == "A" || userChoice == "a") {
		//worst choice user could make
		std::cout << "\nYou surrender and your taken prisoner into their high tech UFO.\n";
		std::cout << "They decide your useless to them and drop you out in the middle of the sky.\n";

		//exits game by making 'alive' false
		alive = false;
	}
	else if (userChoice == "B" || userChoice == "b") {
		//best choice user could make
		std::cout << "\nYou take the brave/stupid option and jump out the window. You hit the ground but something broke your fall.\n";
		std::cout << "It was the family lizard, Rex! His screech is heard by the helicopter rescue crew.\n";
		std::cout << " They spot you and drop down the rope so you can be rescued.\n\n";
	}
	else {
		//catches every other response in case the user did not input a valid second choice
		std::cout << "\nInstead of doing anything, you just lay on your bed and not even address the situation as you are 'too tired";
		std::cout << "\nto deal with all this'. You never wake back up from your nap..";

		//sets bool value to false to exit game
		alive = false;
	}

	//this returns a int value of 0
	return 0;

}//this scope operator ends function "ChoseUpstairs"
 
//this function holds our prompts and users choice for scenario 4
int ChoseMovie()
{//start function "ChoseMovie"
	// Function body

	//displays third prompt after choosing to run upstairs
	std::cout << " Do you, A: Climb the rope, there's no hope for anyone else. Maybe they're already eaten!\n";
	std::cout << " OR B: You realize this could be the start of an epic alien movie where you go around killing\n";
	std::cout << " aliens and save the world! (type A or B) \n";

	//string variable named userChoice
	std::string userChoice;

	//gets the users fourth choice, stores it in userChoice
	std::getline(std::cin, userChoice);

	//evaluate the users choice
	if (userChoice == "A" || userChoice == "a") {
		//worst choice user could make
		std::cout << "\nYou climb the rope and halfway up, the aliens from your bedroom, leap onto the helicopter and destroy it along\n";
		std::cout << "with everyone in it including your cowardly self. Not a fun way to go out I imagine..\n";

		//exits game by making 'alive' false
		alive = false;
	}
	else if (userChoice == "B" || userChoice == "b") {
		//best choice user could make
		std::cout << "\nYou take the brave/heroic option yet again and decide to stay. You go back inside and armor up for war.\n";
		std::cout << "This indeed makes for a great alien movie! Perhaps there will be a part two some day?\n";
	}
	else {
		//catches every other response in case the user did not input a valid second choice
		std::cout << "\nYou take too long and they throw an egg at your face for wasting their time. They fly off and";
		std::cout << "\ntell all the aliens where you are so they can come feast on you. You get devoured within seconds..\n";

		//sets bool value to false to exit game
		alive = false;
	}

	//exits function
	return 0;

}//end function "ChoseMovie"

//this function prompts the user with the game over message.
void ExitGame()
{
	//displays game over to user
	std::cout << "\n\nGAME OVER!\n" << std::endl;
}