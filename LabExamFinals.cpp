#include <iostream>
#include <string>
using namespace std;

int main()
{
    // important variables
    char answerq1, answerq2, answerq3, answerq4, answerq5;
    char answerq6, answerq7, answerq8, answerq9, answerq10;
    char finalanswerq1, finalanswerq2, finalanswerq3, finalanswerq4, finalanswerq5;
    char finalanswerq6, finalanswerq7, finalanswerq8, finalanswerq9, finalanswerq10;
    int answerChangeAttemptsq1 = 0, answerChangeAttemptsq2 = 0, answerChangeAttemptsq3 = 0;
    int answerChangeAttemptsq4 = 0, answerChangeAttemptsq5 = 0;
    int answerChangeAttemptsq6 = 0, answerChangeAttemptsq7 = 0, answerChangeAttemptsq8 = 0;
    int answerChangeAttemptsq9 = 0, answerChangeAttemptsq10 = 0;
    const int answerChangeMaxAttempts = 2;
    int score = 0;
    string playername;

    cout << "*!-- WELCOME TO WHO WANTS TO BE A MILLIONAIRE --!*" << endl;
    while (true)
    {
        cout << "Enter player name: " << endl;
        getline(cin, playername);
        if (!playername.empty())
        {
            break;
        }
        cerr << "Player name is required. Please enter a player name to continue." << endl;
        cout << endl;
    }
    cout << endl;
    cout << "Hello " << playername << "!" << " let's play: " << endl;
    cout << endl;

    cout << "*!--$ WHO WANTS TO BE A MILLIONAIRE $--!*" << endl;
    cout << endl;
    cout << "************* Mechanics ***************" << endl
         << endl;
    cout << "Build your fortune by answering questions correctly " << endl
         << "and moving up the ladder toward Php. 1,000,000.00!" << endl
         << endl;
    cout << "For each question, you can only change your answer once." << endl
         << endl;
    cout << "********* End of Mechanics ************" << endl
         << endl;

    cout << "Question 1:" << endl;
    cout << "How do you declare a variable in Java?" << endl;
    cout << "A. int x;" << endl;
    cout << "B. variable x;" << endl;
    cout << "C. x = int;" << endl;
    cout << "D. declare x;" << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq1;
    finalanswerq1 = answerq1;
    while (answerq1 != 'A' && answerq1 != 'B' && answerq1 != 'C' && answerq1 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq1;
    }

    while (answerChangeAttemptsq1 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq1++;
            if (answerChangeAttemptsq1 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq1;

            while (answerq1 != 'A' && answerq1 != 'B' && answerq1 != 'C' && answerq1 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq1;
            }
            finalanswerq1 = answerq1;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq1 << endl
         << endl;

    if (finalanswerq1 == 'A' || finalanswerq1 == 'a')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq1 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq1 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 2
    cout << "Question 2:" << endl;
    cout << "What is the purpose of the 'break' statement in a Java switch statement?" << endl;
    cout << "A. To terminate the loop." << endl;
    cout << "B. To skip the current iteration." << endl;
    cout << "C. To exit the switch statement." << endl;
    cout << "D. To continue to the next case." << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq2;
    finalanswerq2 = answerq2;

    while (answerq2 != 'A' && answerq2 != 'B' && answerq2 != 'C' && answerq2 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq2;
    }

    while (answerChangeAttemptsq2 < answerChangeMaxAttempts)
    {

        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq2++;
            if (answerChangeAttemptsq2 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq2;

            while (answerq2 != 'A' && answerq2 != 'B' && answerq2 != 'C' && answerq2 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq2;
            }

            finalanswerq2 = answerq2;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq2 << endl
         << endl;

    if (finalanswerq2 == 'C' || finalanswerq2 == 'c')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq2 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq2 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 3
    cout << "Question 3:" << endl;
    cout << "What does SQL stand for?" << endl;
    cout << "A. Simple Query Language" << endl;
    cout << "B. Structured Query Language" << endl;
    cout << "C. Sequential Query Language" << endl;
    cout << "D. Systematic Query Language" << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq3;
    finalanswerq3 = answerq3;

    while (answerq3 != 'A' && answerq3 != 'B' && answerq3 != 'C' && answerq3 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq3;
    }

    while (answerChangeAttemptsq3 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq3++;
            if (answerChangeAttemptsq3 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq3;

            while (answerq3 != 'A' && answerq3 != 'B' && answerq3 != 'C' && answerq3 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq3;
            }

            finalanswerq3 = answerq3;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq3 << endl
         << endl;

    if (finalanswerq3 == 'B' || finalanswerq3 == 'b')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq3 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq3 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 4
    cout << "Question 4:" << endl;
    cout << "How do you print \"Hello World!\" to the console in Java?" << endl;
    cout << "A. print(\"Hello World!\");" << endl;
    cout << "B. console.log(\"Hello World!\");" << endl;
    cout << "C. System.out.println(\"Hello World!\");" << endl;
    cout << "D. echo(\"Hello World!\");" << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq4;
    finalanswerq4 = answerq4;

    while (answerq4 != 'A' && answerq4 != 'B' && answerq4 != 'C' && answerq4 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq4;
    }

    while (answerChangeAttemptsq4 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq4++;
            if (answerChangeAttemptsq4 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq4;

            while (answerq4 != 'A' && answerq4 != 'B' && answerq4 != 'C' && answerq4 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq4;
            }

            finalanswerq4 = answerq4;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq4 << endl
         << endl;

    if (finalanswerq4 == 'C' || finalanswerq4 == 'c')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq4 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq4 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 5
    cout << "Question 5:" << endl;
    cout << "What is the main purpose of inheritance in Java?" << endl;
    cout << "A. To create objects." << endl;
    cout << "B. To reuse code and establish a relationship between classes." << endl;
    cout << "C. To access private variables." << endl;
    cout << "D. To define constants." << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq5;
    finalanswerq5 = answerq5;
    while (answerq5 != 'A' && answerq5 != 'B' && answerq5 != 'C' && answerq5 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq5;
    }

    while (answerChangeAttemptsq5 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq5++;
            if (answerChangeAttemptsq5 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq5;

            while (answerq5 != 'A' && answerq5 != 'B' && answerq5 != 'C' && answerq5 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq5;
            }

            finalanswerq5 = answerq5;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq5 << endl
         << endl;

    if (finalanswerq5 == 'B' || finalanswerq5 == 'b')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq5 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq5 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 6
    cout << "Question 6:" << endl;
    cout << "What is the role of the primary key in a database table?" << endl;
    cout << "A. To store data." << endl;
    cout << "B. To identify each record uniquely." << endl;
    cout << "C. To perform calculations." << endl;
    cout << "D. To link tables together." << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq6;
    finalanswerq6 = answerq6;

    while (answerq6 != 'A' && answerq6 != 'B' && answerq6 != 'C' && answerq6 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq6;
    }

    while (answerChangeAttemptsq6 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq6++;
            if (answerChangeAttemptsq6 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }

            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq6;

            while (answerq6 != 'A' && answerq6 != 'B' && answerq6 != 'C' && answerq6 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq6;
            }

            finalanswerq6 = answerq6;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq6 << endl
         << endl;

    if (finalanswerq6 == 'B' || finalanswerq6 == 'b')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq6 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq6 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 7
    cout << "Question 7:" << endl;
    cout << "How do you end a statement in Java?" << endl;
    cout << "A. Period (.)" << endl;
    cout << "B. Semicolon (;)" << endl;
    cout << "C. Comma (,)" << endl;
    cout << "D. Colon (:)" << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq7;
    finalanswerq7 = answerq7;
    while (answerq7 != 'A' && answerq7 != 'B' && answerq7 != 'C' && answerq7 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq7;
    }

    while (answerChangeAttemptsq7 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq7++;
            if (answerChangeAttemptsq7 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq7;

            while (answerq7 != 'A' && answerq7 != 'B' && answerq7 != 'C' && answerq7 != 'D')
            {
                cout << "Your answer: " << finalanswerq7 << " is wrong!" << endl;
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq7;
            }

            finalanswerq7 = answerq7;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq7 << endl
         << endl;

    if (finalanswerq7 == 'B' || finalanswerq7 == 'b')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq7 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq7 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 8
    cout << "Question 8:" << endl;
    cout << "Which SQL clause is used to filter the results of a query based on a specified condition?" << endl;
    cout << "A. FROM" << endl;
    cout << "B. SELECT" << endl;
    cout << "C. WHERE" << endl;
    cout << "D. GROUP BY" << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq8;
    finalanswerq8 = answerq8;

    while (answerq8 != 'A' && answerq8 != 'B' && answerq8 != 'C' && answerq8 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq8;
    }

    while (answerChangeAttemptsq8 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq8++;
            if (answerChangeAttemptsq8 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq8;

            while (answerq8 != 'A' && answerq8 != 'B' && answerq8 != 'C' && answerq8 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq8;
            }

            finalanswerq8 = answerq8;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq7 << endl
         << endl;

    if (finalanswerq8 == 'C' || finalanswerq8 == 'c')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq8 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq8 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 9
    cout << "Question 9:" << endl;
    cout << "What is the purpose of the SELECT statement in SQL?" << endl;
    cout << "A. To insert data into a table." << endl;
    cout << "B. To retrieve data from a table." << endl;
    cout << "C. To update data in a table." << endl;
    cout << "D. To delete data from a table." << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq9;
    finalanswerq9 = answerq9;

    while (answerq9 != 'A' && answerq9 != 'B' && answerq9 != 'C' && answerq9 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq9;
    }

    while (answerChangeAttemptsq9 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq9++;
            if (answerChangeAttemptsq9 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq9;

            while (answerq9 != 'A' && answerq9 != 'B' && answerq9 != 'C' && answerq9 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq9;
            }

            finalanswerq9 = answerq9;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq9 << endl
         << endl;

    if (finalanswerq9 == 'B' || finalanswerq9 == 'b')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq9 << " is correct!" << endl;
        cout << "Your prize money is now: " << "Php. " << score << endl
             << endl;
    }
    else
    {
        cout << "Your answer: " << finalanswerq9 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }

    // Question 10
    cout << "Question 10:" << endl;
    cout << "What is the purpose of the 'public' keyword in a Java class?" << endl;
    cout << "A. To specify the class is public." << endl;
    cout << "B. To specify the class is private." << endl;
    cout << "C. To specify the class is protected." << endl;
    cout << "D. To specify the class is accessible from outside the package." << endl;
    cout << "Enter your answer (A, B, C, D): ";
    cin >> answerq10;
    finalanswerq10 = answerq10;

    while (answerq10 != 'A' && answerq10 != 'B' && answerq10 != 'C' && answerq10 != 'D')
    {
        cout << "Invalid input. Please enter A, B, C, or D: ";
        cin >> answerq1;
    }

    while (answerChangeAttemptsq10 < answerChangeMaxAttempts)
    {
        char changeAnswer;
        cout << "Do you want to change your answer? (Y/N): ";
        cin >> changeAnswer;

        while (changeAnswer != 'Y' && changeAnswer != 'y' && changeAnswer != 'N' && changeAnswer != 'n')
        {
            cout << "Invalid input. Please enter Y or N: ";
            cin >> changeAnswer;
        }

        if (changeAnswer == 'Y' || changeAnswer == 'y')
        {
            answerChangeAttemptsq10++;
            if (answerChangeAttemptsq10 >= answerChangeMaxAttempts)
            {
                cout << "You have reached the maximum number of changes allowed." << endl;
                break;
            }
            cout << "Enter your new answer (A, B, C, D): ";
            cin >> answerq10;

            while (answerq10 != 'A' && answerq10 != 'B' && answerq10 != 'C' && answerq10 != 'D')
            {
                cout << "Invalid input. Please enter A, B, C, or D: ";
                cin >> answerq1;
            }

            finalanswerq10 = answerq10;
        }
        else
        {
            break;
        }
    }

    cout << "Your final answer is: " << finalanswerq10 << endl
         << endl;

    if (finalanswerq10 == 'D' || finalanswerq9 == 'd')
    {
        score += 100000;
        cout << "Your answer: " << finalanswerq10 << " is correct!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        cout << "You are now a Millionaire!!!!"
    }
    else
    {
        cout << "Your answer: " << finalanswerq10 << " is wrong!" << endl;
        cout << "Congratulations " << playername << "! " << "You won: " << endl;
        cout << "Php. " << score << endl;
        return 0;
    }
    return 0;
}