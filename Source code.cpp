#include <iostream>
#include <string>
#include <cstdlib>
#include <limits>

using namespace std;

//Global variable
int Total;

class Question 
{
    private:
        string Question_Text;
        string Answer_1;
        string Answer_2;
        string Answer_3;
        string Answer_4;
 
        int Correct_Answer;
        int Question_Score;
 
    public:
        void setValues (string, string, string, string, string, int, int); //
        void askQuestion ();
};
// Uses 'Question' class - To take private variables from class
void Question::setValues (string q, string a1, string a2, string a3, string a4, int ca, int pa)
{
    Question_Text = q;
    Answer_1 = a1;
    Answer_2 = a2;
    Answer_3 = a3;
    Answer_4 = a4;
    Correct_Answer = ca;
    Question_Score = pa;
}
//Usee the 'Question' class - To display question, answer, and notes on whether it's correct or not
void Question::askQuestion()
{
	int Guess;
	
	do{
    cout << endl;
    cout << Question_Text << endl; //print parameters given in q(i) setValues object.
    cout << "1. " << Answer_1 << endl;
    cout << "2. " << Answer_2 << endl;
    cout << "3. " << Answer_3 << endl;
    cout << "4. " << Answer_4 << endl;
    cout << endl;
    cout << "What is your answer?(using corresponding number)" << endl;
    cin >> Guess;
    cin.ignore();
	
	
	if ( Guess!=1 && Guess!=2 && Guess!=3 && Guess!=4 )
	{
		cout << "Error input, please answer using corresponding number, eg. 1,2,3,4" << endl;
		//Get only integer
		cin.clear();
      	cin.ignore(numeric_limits<streamsize>::max(), '\n');
	}
	
	}while ( Guess!=1 && Guess!=2 && Guess!=3 && Guess!=4 );
    
    // if else to print if answer is correct or not
    if (Guess == Correct_Answer)
    {
        cout << endl;
        cout << "Great! You are correct" << endl;
        Total = Total + Question_Score;
        cout << endl;
    }
    else
    {
        cout << endl;
        cout << "Oh no! You are wrong." << endl;
        cout << "The correct answer is " << Correct_Answer << "." << endl;
        cout << endl;
    }
}

//

//Function prototype
char Menu(); //Display Menu for user to enter choice, returning choice to main
char Notes(); //Display Notes, return choice if program wants to repeat
char Problem(); //Display Problem, return choice if program wants to repeat

int main()
{
	char choice; // "choice" is to tell program which function to call
	bool backtostart=false;	//"back to start" is to tell program to go back from the start of main or return 0

do{ // do while loop if user wants to go back to main menu
choice=Menu();
	
	switch (choice) //Decide what function to call based on user input at Menu()
	{
		case 'a' :
			if(Notes()=='Y'){
			backtostart=true;
			break;
			}
			else{
			return 0;}
			
			break;
		
		case 'b' :
			if(Problem()=='Y'){
			backtostart=true;
			break;
			}
			else{
			return 0;}
			
			break;
			
		case 'c' : return 0;
	}
}while(backtostart==true);
	return 0;
}

char Menu()
{
char option='a';

//Print menu, option for users do while loop for error if option is invalid
do{
	if(option!='a' && option!='b' && option!='c')
	{
		cout<<"Error, character is unavailable in option\n"<<endl;
	}
	
	cout<<">>--Learning Aid Software--<< \n"<<endl
		<<"Newton's Laws of Motion \n"<<endl
		<<" - Option Menu: - \n"<<endl
		<<"a) Notes\n\nb) Quiz mcq\n\nc) Exit Program \n"<<endl
		<<"*(Enter the character/letter to pick your option)"<<endl
		<<"**(For Y/N prompts, please use their capital form)\n"<<endl;

	cin>>option;
      }while(option!='a' && option!='b' && option!='c');

cout<<"\n\n";
return option;
}

char Notes()
{
	char option='Y'; //character to return
	
	cout<<"--Newton's First Law--"<<endl
		<<"The first law states that as an object at rest will stay at rest, and an object in motion will stay in motion unless acted on by a net external force.\n"
		<<"This law explains the inertia phenomena. eg, a person standing on a bus will continue to move forward even if the bus has stopped.\n\n"
		<<"Mathematically:\n"
		<<"If Fnet = 0, then a = 0"<<endl;
		
		cout << "Press Enter to continue .. " << endl;
		cin.get();
		cin.get();
		
	cout<<"--Newton's Second Law--"<<endl
		<<"Change of momentum over time is directly proportional to the force applied, for both are in the same direction."<<endl
		<<"or"<<endl
		<<"Force is directly proportional to mass times acceleration, for a constant mass\n"<<endl
		<<"Mathematically:\n"
		<<"F=ma, for a constant mass"<<endl
		<<"but generalized as, F=d/dt(p)"<<endl;
		
		cout << "Press Enter to continue .. " << endl;
		cin.get();
		
	cout<<"--Newton's Third Law--"<<endl
		<<"All forces between two objects exist in equal magnitude and opposite direction."<<endl
		<<"eg. If object 'a'' exerts a force on to 'b' to the right,then 'b' exerts a force on 'a' to the left\n"<<endl
		<<"Mathematically:\n"
		<<"Fa=-Fb, for the negative sign is a convention to say that it acts in the opposite direction."<<endl;
		
		cout << "Press Enter to continue .. " << endl;
		cin.get();
		

//Print do you wish to continue and loop for wrong input
do{
		if(option!='Y' && option!='N')
	{
		cout<<"Error, please enter Y for yes or N for no\n"<<endl;
	}
	cout<<"Do you wish to continue?"<<endl
		<<"(Enter Y for yes and N for no)"<<endl;
	cin>>option;
	cout<<"\n\n";
}while(option!='Y' && option!='N');

	return option;
}

char Problem(){
char option='Y'; // character to return
//Question code

cout << "----Newtonian Mechanics MCQ----" << endl
	 << "This MCQ quiz consists of 10 question, and each question contains 10 marks" << endl
	 << "The passing grade would be 50 and above." << endl;
 
cout << "Press Enter to start the quiz .. " << endl;
cin.get();
cin.get();
 
string Name;
 
cout <<"What is your name?" << endl;
cin >> Name;
cout << endl;
char Respond;
do{
cout << "Are you ready to take the quiz " << Name << "? Y/N" << endl;
cin >> Respond;
if (Respond == 'Y')
{
    cout << endl;
    cout << "OK, Goodluck!" << endl;
}
else if (Respond == 'N')
{
    cout << "OK, Goodbye!\n\n" << endl;
    
do{
	cout<<"\nDo you wish to continue?"<<endl
		<<"(Enter Y for yes and N for no)"<<endl;
	cin>>option;
	if (option!='Y' && option!='N')
	{
		cout<<"Error, Enter Y for yes or N for no\n"<<endl;
		cout<<"\n\n";
	}
	return option;
  }while(option!='Y' && option!='N');
}
    //Print do you wish to continue and loop for wrong input
else if (Respond!='Y' && Respond!='N')
{
	cout<<"Error, Enter Y for yes or N for no\n"<<endl;
}
}while(Respond!='Y' && Respond!='N');

 //Creating object q(i) all in class 'Question';
Question q1; //Class 'Question' object q1,q2,q3,... etc.
Question q2;
Question q3;
Question q4;
Question q5;
Question q6;
Question q7;
Question q8;
Question q9;
Question q10;
 
//Creating question with function setValues(...) in class 'Question" take 5strings and 2integer for a parameter
//Parameter is ("question_text","answer1","answer2","answer3","answer4", correct answer in integer, points for each answer
q1.setValues ("Losing speed as you ride a bike uphill, demonstrates which Newton's law?",
        "Newton's First Law",
        "Newton's Second Law",
        "Newton's Third Law",
        "Insufficient information to determine",
        2, // The position of the correct answer
        10); // The answer value in points
 
q2.setValues ("An object with no net force acting remains at rest or in motion with constant velocity, demonstrates which Newton's law?'",
        "Newton's First law",
        "Newton's Second law",
        "Newton's Third law",
        "Insufficient information to determine",
        1, // The position of the correct answer
        10); // The answer value in points
 
q3.setValues ("Pushing against a wall, the wall pushes back against you, demonstrates which Newton's law?'",
        "Newton's First law",
        "Newton's Second law",
        "Newton's Third law",
        "Insufficient information to determine",
        3, // The position of the correct answer
        10); // The answer value in points
 
q4.setValues ("When you sit on a chair, the resultant force on you is?",
        "Zero",
        "Up",
        "Down",
        "Depending on your weight",
        1, // The position of the correct answer
        10); // The answer value in points
 
q5.setValues ("In the absence of an external force, a moving object will?",
        "Stop immediately ",
        "Slowly slows down, and then stop",
        "Go faster",
        "Move with a constant speed",
        4, // The position of the correct answer
        10); // The answer value in points
 
q6.setValues ("You are standing on a moving bus, then you suddenly fall forward. You can imply that the bus's",
        "Velocity decreased",
        "Velocity increased",
        "Speed remained the same, but it's turning right",
        "Speed remained the same, but it's turning left",
        1, // The position of the correct answer
        10); // The answer value in points
 
q7.setValues ("A constant net force acts on an object, what describes the motion of the object?",
        "constant acceleration",
        "constant speed",
        "constant velocity",
        "increasing acceleration",
        1, // The position of the correct answer
        10); // The answer value in points
 
q8.setValues ("The acceleration of an object is inversely proportional to ",
        "the net force acting on it",
        "its position",
        "its velocity",
        "its mass",
        4, // The position of the correct answer
        10); // The answer value in points
 
q9.setValues ("If you exert a force F on an object, the force which the object exerts on you will",
        "depend on whether or not the object is moving",
        "depend on whether or not you are moving",
        "depend on the relative masses of you and the object",
        "always be F",
        4, // The position of the correct answer
        10); // The answer value in points
 
q10.setValues ("A net force F accelerates a mass m with an acceleration a. If the same net force is applied to mass 2m, then the acceleration will be",
        "4a",
        "2a",
        "a/2",
        "a/4",
        3, // The position of the correct answer
        10); // The answer value in points
 
 
 //Displaying q1 using function askQuestion while still having the question strings and answer integer
q1.askQuestion();
 
q2.askQuestion();
 
q3.askQuestion();
 
q4.askQuestion();
 
q5.askQuestion();
 
q6.askQuestion();
 
q7.askQuestion();
 
q8.askQuestion();
 
q9.askQuestion();
 
q10.askQuestion();
 
cout << "Your Total Score is " << Total << " out of 100" << endl;
 
if (Total >= 50) // must be >=50 to pass the mcq quiz
{
    cout << "Great you passed the quiz!" << endl;
    cout << "Congratulations! Goodluck on your future studies." << endl;
Total=0;
}
 
else {
 
cout << "Oh no! You failed the quiz." << endl;
cout << "Better luck next time" << endl;
Total=0;
}
	
//Print do you wish to continue and loop for wrong input
do{
		if(option!='Y' && option!='N')
	{
		cout<<"Error, please enter Y for yes or N for no\n"<<endl;
	}
	cout<<"\nDo you wish to continue?"<<endl
		<<"(Enter Y for yes and N for no)"<<endl;
	cin>>option;
	cout<<"\n\n";
}while(option!='Y' && option!='N');

	return option;
}

