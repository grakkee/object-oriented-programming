# CS202-Lab4

## Lab Goals
The goal of this Lab is to:
1.	Familiarize students with modifying **makefiles**.
2.	Allow students to modify a program to use **aggregation**.
### Important Notes:
1.	**Comments**: Header comments are required on all files and recommended for the rest of the program. Points will be deducted if no header comments are included.
## Program
The program where everyone's old enough to rent a car!

**The program should behave as follows:**  
The files have been provided for a complete Rental Agency project. Please compile and run it to verify everything works. Your job is to add a Car class to the project, and aggregate that class with the existing Agency class as directed. 

### Step 1
Modify the makefile to work with the provided driver (it currently works with the provided demo_driver). Change all instances of ```demo_driver``` to ```driver``` in the makefile so it looks like the following:

```
rental_agency: driver.o agency.o car.o
	g++ -o rental_agency driver.o agency.o car.o

driver.o: driver.cpp agency.h car.h
	g++ -c driver.cpp

agency.o: agency.cpp agency.h
	g++ -c agency.cpp

car.o: car.cpp car.h
	g++ -c car.cpp

clean:
	rm *.o
```

Now your project is ready to modify.

### Step 2
Your project currently has the following files:

- driver.cpp
- agency.cpp
- agency.h
- makefile 

You should be adding the following files:
- car.cpp
- car.h

## Requirements
```agency.h```  
**Functionality**: You should be adding the following attribute to the agency class:
```
int numCars
Car fleet array
```
```agency.cpp```  
**Functionality**: You should be adding the following functionality to the agency class:  
***getNumCars()***  
**Input Parameters**: none  
**Returned Output**: int number of cars  
**Functionality**: 

***getFleet()***   
**Input Parameters**: none    
**Returned Output**: Car* array    
**Functionality**: 

***print()***  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the agency name and a divider. Then for the number of Cars in the fleet, it should print each Car. 

***addCar()***  
**Input Parameters**: Car  
**Returned Output**: true or false for success  
**Functionality**: This function accept a Car as a parameter. If the current number of cars is less than the maximum number of cars (70), the new Car should be saved in the next available spot in the Fleet array and the current number of cars should be increased. If a car was added the function should return true, otherwise it should return false.  

```car.h```  
**Functionality**: This file should contain the definition for the Car class, which includes the following attributes:
```
int year
string make
string model
```
```car.cpp```  
**Functionality**: This file should contain the function definitions for the following functions:

*Constructors*  
- default constructor
- parameterized contructor
- copy constructor 

*Getters*  
Getter functions for each attribute. 

*Setters*  
Setter functions for each attribute.  

*print()*  
**Input Parameters**: none  
**Returned Output**: none  
**Functionality**: This function should display the Car year, make, and model, each separated by a space. 

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
