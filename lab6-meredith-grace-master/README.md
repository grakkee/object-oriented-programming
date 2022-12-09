# CS202-Lab6

## Lab Goals
The goal of this Lab is to:
1.	Allow students to create a program which uses **interfaces**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
2. **Executable**: The executable should be named ```walk_in_park```  
## Program
You're taking your favorite pets on a walk in the park. You walk through the grass and through a little stream.

Your project should include the following files:
```
- driver.cpp
- pet.h
- cat.cpp
- cat.h
- bird.cpp
- bird.h
- makefile  
```

**The program should behave as follows:**  
The program should create a Cat object and a Bird object and pass them to a function to see how far they travelled on their walk. Their distance should be displayed to the screen.  

Here is an example of how the program could function using the following files as input:

```
>./walk_in_park
Hera went 6 on her walk
bird went 3.5 on their walk
```
## Requirements
```
driver.cpp

```
*main()*  
**Functionality**: The main function create a Cat and a Bird object. It should call the appropriate function to determine how far they went, and then display that value to the screen.  

In addition to the main functions, your driver should have at minimum 1 more functions:  

*aWalkInThePark()*  
**Input Parameters**: IPet pointer  
**Returned Output**: double  
**Functionality**: This function should accept a pet interface pointer. It should add up the distance the pet walks and swims and return it from the function.  
```
pet.h
```
**Functionality**: This file should contain the pure virtual functions for the IPet interface:  
```
double walk()
double swim()
double fly()
```
```
cat.h
```
**Functionality**: This file should contain the definition for the Cat class, which includes the following attributes:    
```
int legs
```
```
cat.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor (default value of legs is 4)

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*walk()*  
**Input Parameters**: none  
**Returned Output**: double  
**Functionality**: This function should return the number of legs the cat has.

*swim()*  
**Input Parameters**: none  
**Returned Output**: double  
**Functionality**: This function should return half the number of legs the cat has.

*fly()*  
**Input Parameters**: none  
**Returned Output**: double  
**Functionality**: This function should return 0.
```
bird.h
```
**Functionality**: This file should contain the definition for the Bird class, which includes the following attributes:    
```
int legs
double wingspan
```
```
bird.cpp
```
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor (default value of legs is 2, default value of wingspan is 3)

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.

*walk()*  
**Input Parameters**: none  
**Returned Output**: double  
**Functionality**: This function should return the number of legs the bird has.

*swim()*  
**Input Parameters**: none  
**Returned Output**: double  
**Functionality**: This function should return half the wingspan of the bird.

*fly()*  
**Input Parameters**: none  
**Returned Output**: double  
**Functionality**: This function should return the wingspan of the bird.

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
