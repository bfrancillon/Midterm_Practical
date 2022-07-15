#include "Questions.h"

void Questions::GetQuestionNumber1()
{
	QuestionNumber1 = "What is the name for the jewish new year?\n ";
	std::cout << QuestionNumber1;
	std::cout << "1) Hanukkah\n 2) Yom Kippur\n 3) Kwanza\n 4) Rosh Hashanah\n";
}

void Questions::GetQuestionNumber2()
{
	QuestionNumber2 = "Which one of these character is not a friend of Harry Potter?\n ";
	std::cout << QuestionNumber2;
	std::cout << "1) Ron Weasley\n 2) Neville Longbottom\n 3) Draco Malfoy\n 4) Hermione Granger\n";
}

void Questions::GetQuestionNumber3()
{
	QuestionNumber3 = "Which animal does not appear on the Chinese zodiac? \n";
	std::cout << QuestionNumber3;
	std::cout << "1) Dragon\n 2) Rabbit\n 3) Dog\n 4) Hummingbird\n";
}

void Questions::GetQuestionNumber4()
{
	QuestionNumber4 = "Which planet is the hottest? \n";
	std::cout << QuestionNumber4;
	std::cout << "1) Venus\n 2) Saturn\n 3) Mercury\n 4) Mars\n";
}

void Questions::GetQuestionNumber5()
{
	QuestionNumber5 = "In the Pirates of the Caribbean, what was Captain Jack Sparrow's Ship's name? \n";
	std::cout << QuestionNumber5;
	std::cout << "1) The Marauder\n 2) The Black Pearl\n 3) The Sparrow Pearl\n 4) The black Pyton\n";
}
