#include <iostream>
#include <fstream>
#include <string>


//Prototype functions
void Intro();
void Ending();
void writeLineToFile();
std::string readLineFromFile();
std::string readLineFromUserAnswerFile();
void writeCorrectAnswerFile();
std::string readLineFromCorrectAnswerFile();

//Create score variable to check the player's answer accuracy.
int score = 0;

int main()
{
    //Run Intro function
    Intro();

    //Create a variable for the user input
    int userInput;

    //Begin questions with exceptions
    try
    {
        //Question #1
        std::cout << "Question #1: What was the very first alien Ben transformed into?\n";
        std::cout << "1.) Diamondhead\n";
        std::cout << "2.) Wildmutt\n";
        std::cout << "3.) Cannonbolt\n";
        std::cout << "4.) Heatblast\n";
        std::cout << "5.) XLR8\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 4)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Heatblast was Ben's first transformation.\n";
    }

    try
    {
        //Question #2
        std::cout << "\nQuestion #2: What is the official name of Ben's first watch?\n";
        std::cout << "1.) The Unitrix\n";
        std::cout << "2.) Trix\n";
        std::cout << "3.) The Omnitrix\n";
        std::cout << "4.) The Ultimatrix\n";
        std::cout << "5.) The Quintrix\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 3)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. The offical name of Ben's watch is the Omnitrix.\n";
    }

    try
    {
        //Question #3
        std::cout << "\nQuestion #3: What was the very first alien Ben transformed into in Ben 10 Alien Force?\n";
        std::cout << "1.) Chromastone\n";
        std::cout << "2.) Swampfire\n";
        std::cout << "3.) Jetray\n";
        std::cout << "4.) Humungousaur\n";
        std::cout << "5.) Spidermonkey\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 2)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's first transformation in Ben 10 Alien Force was Swampfire.\n";
    }

    try
    {
        //Question #4
        std::cout << "\nQuestion #4: How many ultimate transformations do we see in Ben 10 Ultimate Alien?\n";
        std::cout << "1.) Six\n";
        std::cout << "2.) Ten\n";
        std::cout << "3.) Eight\n";
        std::cout << "4.) Nine\n";
        std::cout << "5.) Five\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 4)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. There were nine total ultimate transformations in Ben 10 Ultimate Alien. ";
        std::cout << "\nThis included: Swampfire, Spidermonkey, Big Chill, Echo Echo, Humungousaur, Wildmutt, Cannonbolt, Way Big, and Ben 10,000.\n";
    }

    try
    {
        //Question #5
        std::cout << "\nQuestion #5: What is the name of Ben's first girlfriend?\n";
        std::cout << "1.) Gwen\n";
        std::cout << "2.) Lana\n";
        std::cout << "3.) Sarah\n";
        std::cout << "4.) Emily\n";
        std::cout << "5.) Julie\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 5)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's first girlfriend was Julie.\n";
    }

    try
    {
        //Question #6
        std::cout << "\nQuestion #6: Which transformation gained a mind of its own and escaped the Omnitrix?\n";
        std::cout << "1.) Ben Mummy / Snaro\n";
        std::cout << "2.) Ghostfreak\n";
        std::cout << "3.) Wildvine\n";
        std::cout << "4.) Ben Wolf / Blitzwolfer\n";
        std::cout << "5.) Ben Viktor / Frankenstrike\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 2)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ghostfreak gained a mind of his own and escaped the Omnitrix.\n";
    }

    try
    {
        //Question #7
        std::cout << "\nQuestion #7: What is the name of Ben's doppelganger?\n";
        std::cout << "1.) Azmuth\n";
        std::cout << "2.) Vilgax\n";
        std::cout << "3.) Albedo\n";
        std::cout << "4.) Driscoll\n";
        std::cout << "5.) Argit\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 3)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's doppelganger is Albedo.\n";
    }

    try
    {
        //Question #8
        std::cout << "\nQuestion #8: What is the name of Ben's time travelling friend?\n";
        std::cout << "1.) Tetrax\n";
        std::cout << "2.) Professor Paradox\n";
        std::cout << "3.) Eon\n";
        std::cout << "4.) Clockwork\n";
        std::cout << "5.) Dr. Viktor\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 2)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's time travelling friend is Professor Paradox.\n";
    }

    try
    {
        //Question #9
        std::cout << "\nQuestion #9: Which other Cartoon Network show did Ben have a crossover with?\n";
        std::cout << "1.) Secret Saturdays\n";
        std::cout << "2.) Adventure Time\n";
        std::cout << "3.) Steven Universe\n";
        std::cout << "4.) Generator Rex\n";
        std::cout << "5.) Regular Show\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 1 || userInput == 4)
        {
            std::cout << "\nCorrect! Fun fact: Ben actually had a crossover with both Generator Rex and the Secret Saturdays.\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben had a crossover with both Generator Rex and the Secret Saturdays.\n";
    }

    try
    {
        //Question #10
        std::cout << "\nQuestion #10: Who is Ben's greatest foe?\n";
        std::cout << "1.) Aggregor\n";
        std::cout << "2.) Albedo\n";
        std::cout << "3.) Ghostfreak\n";
        std::cout << "4.) Vilgax\n";
        std::cout << "5.) The Forever Knights\n";

        //Get user's answer
        std::cin >> userInput;

        //Check if the answer is correct
        if (userInput == 4)
        {
            std::cout << "\nCorrect!\n";
            score++;
        }
        else
        {
            throw userInput;
        }
    }
    catch (...)
    {
        std::cout << "\nI'm sorry, but that is incorrect. Ben's greatest foe is Vilgax.\n";
    }

    //Question #11
    std::cout << "\nBonus Question #11 (Just for fun!): What are Ben's Original ten transformations?\n";
    std::cout << "Below is a list of some of the transformations that appeared in the original series.\n";
    std::cout << "Please enter the names of the original ten alien transformations in the same format as the list.\n";

    //Read the file for the user
    readLineFromFile();

    //Give them the option to answer the question
    writeLineToFile();

    //Create file with the correct answer
    writeCorrectAnswerFile();

    //Read the user's answer back to them to show that it saved the information
    std::cout << "You answered: ";
    readLineFromUserAnswerFile();

    //Give the user the correct answer
    readLineFromCorrectAnswerFile();

    //Run Ending function
    Ending();

    return 0;
}

//Display Intro function
void Intro()
{
    std::cout << "\n\n\t\t*** Weclome to the Ben 10 Trivia Quiz! ***\n\n";

    std::cout << "For each question please enter the number response you'd like to answer and press enter.\n\n";
}

//End Game function
void Ending()
{
    std::cout << "\nYou've answered all the questions! You're final score is " << score << " / 10!\n\n";
    std::cout << "\n\t\t*** Thanks for Playing! *** \n\n";
}

//Read line from file function
std::string readLineFromFile()
{
    std::string lineFromFile;
    std::ifstream myFileObject("The Original Ten.txt");

    while (std::getline(myFileObject, lineFromFile))
    {
        //Let's do something with the data
        std::cout << "\n\nAliens from the original series: " << lineFromFile << std::endl;
    }

    return "";
}

//Write to file function
void writeLineToFile()
{
    //Open a text file, and create one if it doesn't exist.
    std::ofstream myFileObject1("The Original Ten.txt");
    std::ofstream myFileObject2("The Original Ten User Answer.txt");

    //Hardcode the base document for the program to read.
    myFileObject1 << "Ben Wolf/Blitzwolfer, Cannonbolt, Diamondhead, Ditto, Eye Guy, Four Arms, Frankenstrike / Ben Viktor, Ghostfreak, Grey Matter, Heatblast, Ripjaws, Snare - oh / Ben Mummy, Stinkfly, Upchuck, Upgrade, Way Big, Wildmutt, Wildvine, XLR8.\n";

    //Create variable to allow the user to edit the incorrect information in the document.
    std::string userInput;

    //Ask the user to edit the text to be correct.
    std::cout << "Please enter the correct original ten aliens names and press enter when done. ";
    std::cin >> userInput;

    //Write data to the text document.
    myFileObject2 << userInput;

    //Close file to avoid corruption
    myFileObject1.close();
    myFileObject2.close();
}

//Function to read the user's answer from the file
std::string readLineFromUserAnswerFile()
{
    std::string lineFromFile;
    std::ifstream myFileObject("The Original Ten User Answer.txt");

    while (std::getline(myFileObject, lineFromFile))
    {
        //Let's do something with the data
        std::cout << lineFromFile << std::endl;
    }

    return "";
}

//Function to create a file with the correct answer in it
void writeCorrectAnswerFile()
{
    //Open a text file, and create one if it doesn't exist.
    std::ofstream myFileObject("The Original Ten Correct Answer.txt");

    //Hardcode the base document for the program to read.
    myFileObject << "Diamondhead, Four Arms, Ghostfreak, Grey Matter, Heatblast, Ripjaws, Stinkfly, Upgrade, Wildmutt, and XLR8.\n";

    //Close file to avoid corruption
    myFileObject.close();
}

//Function to read the correct answer from the created file
std::string readLineFromCorrectAnswerFile()
{
    std::string lineFromFile;
    std::ifstream myFileObject("The Original Ten Correct Answer.txt");

    while (std::getline(myFileObject, lineFromFile))
    {
        //Let's do something with the data
        std::cout << "\n\nThe correct answer is :" << lineFromFile << std::endl;
    }

    return "";
}