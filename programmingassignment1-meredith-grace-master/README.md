# ProgrammingAssignment1

## Project Goals
The goal of this project is to:
1.	Familiarize students with developing projects which contain multiple files.
2.	Introduce students to using makefiles.
3.	Provide practice with new C++ skills, such as File IO, Standard IO, and the string library.
### Important Notes:
1.	Formatting: Make sure that you follow the precise recommendations for the output content and formatting. For example, do not change the text from 
“Correct usage: ” to “correct”. 
Your assignment will be auto-graded and any changes in formatting will result in a loss in the grade.
2.	Comments: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
Your project should include the following files:
- driver.cpp
- word_analyzer.cpp
- word_analyzer.h
- makefile
## Programming Problem
Write a program for analyzing text loaded from a file. The name of the text file should be provided as a command line argument. If a filename is not provided, an error message should be displayed to the user. If the file cannot be open for reading, an error message should be displayed to the user.

If the file can be opened for reading, each word should be read from the file. The program should count and display the total number of letters, lower-case letters, upper-case letters, and vowels to the screen.

Finally, the program should find word that falls last alphabetically in the set of words and display it to the screen. 

Here is an example of how the program could function using the following poem.txt file as input:
```
Haikus are easy.  
But sometimes they don't make sense.  
Refrigerator.
```
```
>./text_analyzer
Correct usage: 
./text_analyzer filename
>./text_analyzer farts.txt
Sorry, could not open farts.txt for reading.
>./text_analyzer poem.txt
There are 54 letters in your file.
There are 51 lower case letters in your file.
There are 3 upper case letters in your file.
There are 23 vowels in your file.
The last word alphabetically is: they
```
## Requirements
```
driver.cpp

```
*main()*  
Functionality: The main function should check for the correct number of command line arguments and display an error message (including the program name) if necessary. It should get the words from the file, save them to memory, and close the file. It should then analyze each word and display the metrics of all the words to the screen. Finally, it should find the last alphabetical word in the set of words and display it to the screen. 

In addition to the main functions, your driver should have at minimum 2 more functions:

*getWords()*  
Input Parameters: integer size, array of strings, string filename
Returned Output: integer number of words stored
Functionality: This function should accept a filename, an array of strings for storing each of the words, and a size parameter for the column. It should attempt to open the input file for reading. If it cannot open the input file for reading, it should display an error message (including the file name). If it can open the input file for reading, it should get each of the words from the file one at a time and store it into the array of strings. Finally, it should return the number of words it successfully pulled from the file.

*findMaxWord()*  
Input Parameters: integer size, array of strings
Returned Output: string
Functionality: This function should accept an array of strings containing all the words. It should iterate through each word to find the one which comes last alphabetically. That word should be returned to the calling function.
```
word_analyzer.h
```
Functionality: This file should contain the function prototypes for the following functions:  
```
int countLetters(string);  
int countLowerCase(string);  
int countUpperCase(string);  
int countVowels(string);
```
```
word_analyzer.cpp
```
Functionality: This file should contain the function definitions for the following functions:

*countLetters()*  
Input Parameters: a single string
Returned Output: integer number of lower-case letters in that word
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and count how many of characters are letters (not punctuation). Finally, it should return the number of lower-case letters found. 

*countLowerCase()*  
Input Parameters: a single string
Returned Output: integer number of lower-case letters in that word
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and count how many of characters are lower-case letters. Finally, it should return the number of lower-case letters found. 

*countUpperCase()*  
Input Parameters: a single string
Returned Output: integer number of lower-case letters in that word
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and count how many of characters are upper-case letters. Finally, it should return the number of upper-case letters found. 

*countVowels()*  
Input Parameters: a single string
Returned Output: integer number of lower-case letters in that word
Functionality: This function should accept as a parameter a single string which stores one word. It should iterate over the string and count how many of characters are vowels. Finally, it should return the number of vowels found. 

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone URL```
3.	cd into your new assignment directory
4.	After working on your files
5.	When you’re ready, type the following commands: 
```
git add .
git commit -m “your commit message”
git push
```
## Academic Honesty
Academic dishonesty is against university as well as the system community standards. Academic dishonesty includes, but is not limited to, the following:
Plagiarism: defined as submitting the language, ideas, thoughts or work of another as one's own; or assisting in the act of plagiarism by allowing one's work to be used in this fashion.
Cheating: defined as (1) obtaining or providing unauthorized information during an examination through verbal, visual or unauthorized use of books, notes, text and other materials; (2) obtaining or providing information concerning all or part of an examination prior to that examination; (3) taking an examination for another student, or arranging for another person to take an exam in one's place; (4) altering or changing test answers after submittal for grading, grades after grades have been awarded, or other academic records once these are official.
Cheating, plagiarism or otherwise obtaining grades under false pretenses constitute academic
dishonesty according to the code of this university. Academic dishonesty will not be tolerated and
penalties can include cancelling a student’s enrolment without a grade, giving an F for the course, or for the assignment. For more details, see the University of Nevada, Reno General Catalog.
