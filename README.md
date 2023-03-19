# MCQ-on-Newtonian-Physics
A University course project

The given code is a C++ program that implements a learning aid software for Newton's Laws of Motion. The program presents a menu of options to the user, allowing them to choose between reading notes or taking a multiple-choice quiz on the topic.

The program starts by defining a `Question` class that contains the private variables `Question_Text`, `Answer_1` `Answer_2`, `Answer_3`, `Answer_4`, `Correct_Answer`, and `Question_Score`. The `setValues` method is used to set the values of these variables for each question, and the askQuestion method is used to display the question and answer options, ask the user for their answer, and print whether the answer is correct or not.

The `Menu` function is defined to display the main menu of options to the user and return their choice as a character. The `Notes` function displays the notes on Newton's Laws of Motion and returns a character indicating whether the user wants to return to the main menu or exit the program. The `Problem` function is similar to the `Notes` function but presents a multiple-choice quiz to the user and returns a character indicating whether the user wants to try the quiz again, return to the main menu, or exit the program.

The `main` function is the entry point of the program. It starts by declaring a `choice` variable to store the user's choice of function and a `backtostart` boolean variable to indicate whether the program should return to the start of `main` or exit. The program then enters a do-while loop that repeats until the user chooses to exit the program. The `Menu` function is called to display the menu and get the user's choice. Depending on the user's choice, either the `Notes` or `Problem` function is called. If the user chooses to exit the program, the program returns 0 and exits. If the user chooses to go back to the main menu, `backtostart` is set to true, and the do-while loop repeats.
