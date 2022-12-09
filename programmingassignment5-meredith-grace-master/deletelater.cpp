//for later
int Student::getNumCourses(){
	int i = 0;

	while(studentCourses[i].getNumbers() != 0 && i < MAX_COURSES){
		i++;
	}

	return i+1; 
}
