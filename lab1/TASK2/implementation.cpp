#include<iostream>
#include<string>
using namespace std;

struct Grade{
    int mark;
    char the_grade;
};

struct Course {
    string course_code;
    string course_name;
};

struct Student {
    string registration_number;
    string name;
    int age;
    Course course;
    Grade grade;
    bool grade_calculated;

    // Function to calculate and set the grade based on the mark
    void calculateGrade(int n) {
        if (grade.mark > 69)
            grade.the_grade = 'A';
        else if (grade.mark > 59)
            grade.the_grade = 'B';
        else if (grade.mark > 49)
            grade.the_grade = 'C';
        else if (grade.mark > 39)
            grade.the_grade = 'D';
        else
            grade.the_grade = 'E';
    }
};
int errorCorrection(int index,Student student[]){
    int i = index;
    cout << "Enter details for student " << i+1<< ":" << endl;
    cout<< "Enter Registration number:";
    cin>>student[i].registration_number;
    cout<< "Enter Name:";
    cin>>student[i].name;
    cout<< "Enter Age:";
    cin>>student[i].age;
    cout<<"Enter course code:";
    cin>>student[i].course.course_code;
    cout<<"Enter course Name: ";
    cin>>student[i].course.course_name;
    cout<<"Enter student marks";
    cin>>student[i].grade.mark;
    student[i].grade_calculated = false;




    return 0;
}

int main(){
const int MAX_STUDENTS = 2;
Student student[MAX_STUDENTS];
for(int i=0; i< MAX_STUDENTS; i++){
    errorCorrection(i, student);

    /*cout << "Enter details for student " << i + 1 << ":" << endl;
    cout<< "Enter Registration number:";
    cin>>student[i].registration_number;
    cout<< "Enter Name:";
    cin>>student[i].name;
    cout<< "Enter Age:";
    cin>>student[i].age;
    cout<<"Enter course code:";
    cin>>student[i].course.course_code;
    cout<<"Enter course Name: ";
    cin>>student[i].course.course_name;
    cout<<"Enter student marks";
    cin>>student[i].grade.mark;
    student[i].grade_calculated = false;*/
}
for(int i=0;i<MAX_STUDENTS; i++){
    cout<<"student index:" <<i<<"  student Name:" <<student[i].name 
    <<" student marks:"<<student[i].grade.mark<<endl;
    
}
//int noErrors;
//cout<<"Enter number of students with error in entry(enter 0 for no errors):";
//cin>>noErrors;

char continueErrorCheck;
do{
    int noErrors;
cout<<"Enter number of students with error in entry(enter 0 for no errors):";
cin>>noErrors;
if(noErrors!= 0){
    for(int i=0; i< noErrors; i++){
          int errorIndex;
        cout<<"Enter student index:";
        
        cin>>errorIndex;
        errorCorrection(errorIndex, student);

    }

}
for(int i=0;i<MAX_STUDENTS; i++){
    cout<<"student index:" <<i<<"  student Name:" <<student[i].name 
    <<" student marks:"<<student[i].grade.mark<<endl;
}
cout << "Do you want to continue error checking? (Y/N): ";
        cin >> continueErrorCheck;
}
while(continueErrorCheck == 'Y' || continueErrorCheck == 'y');

for(int i=0;i<MAX_STUDENTS;i++){
   // student.calculateGrade(student[i].grade.mark);
    student[i].calculateGrade(student[i].grade.mark);
    cout<<"student index:" <<i<<"  student Name:" <<student[i].name 
    <<" student marks:"<<student[i].grade.mark<<" grade: "<<student[i].grade.the_grade<<endl;
}

/*for(int i=0;i<MAX_STUDENTS; i++){
    cout<<"student index:" <<i<<"  student Name:" <<student[i].name 
    <<" student marks:"<<student[i].grade.mark<<endl;
    
}*/


    return 0;
}

