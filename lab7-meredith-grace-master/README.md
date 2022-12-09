# CS202-Lab7

## Lab Goals
The goal of this Lab is to:
1.	Allow students to create a program which uses **template functions**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2. **Executable**: The executable should be named ```lab7```  
## Program
Which one shall we choose???

The following files have been provided:
```
- driver.cpp
- pet.h
- pet.cpp
- person.h
- person.cpp
- makefile  
```

**After your modifications, the program should behave as follows:**  
The program should allow a user to choose an item from an array of objects. 

Here is an example of how the program could function using the following files as input:

```
>./lab7

***PETS***
======================
1.      cat: Hera
2.      dog: Lucky
Choose the option number: 1

***PEOPLE***
======================
1.      Keith: ekeith@unr.edu
2.      Skywalker: KorlMarcus@jedi.net
3.      Anderson: neo@matrix.com
Choose the option number: 2

***NUMBERS***
======================
1.      1
2.      2
3.      3
4.      4
5.      5
Choose the option number: 5
```
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function already creates the array of objects you'll be needing. You just need to call the getOption function with the correct arguments.  

*getOption()*  
**Input Parameters**: int number of objects, array of objects, string header  
**Returned Output**: int option picked  
**Functionality**: This function should display the header parameter to the screen. It should display the options to the user and prompt them to choose an option until they choose a valid one. Finally, it should return the user's option choice.  
```
pet.h
```
**Functionality**: In addition to the existing functionality, you should add a function which will allow the getOption function to display a pet to the screen:  
```
pet.cpp
```
**Functionality**: In addition to the existing functionality, you should add a function which will allow the getOption function to display a pet to the screen. It should display the species, a colon, then the name.  
```
person.h
```
**Functionality**: In addition to the existing functionality, you should add a function which will allow the getOption function to display a person to the screen:    
```
person.cpp
```
**Functionality**: In addition to the existing functionality, you should add a function which will allow the getOption function to display a person to the screen. It should display the last name, a colon, then the email.  

## Submission details
To submit your project, you will have to use git on your VirtualBox installation:
1.	After accepting the assignment invitation, copy the clone URL
2.	Type 
```git clone clone_URL```
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
