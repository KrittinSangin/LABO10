#include<iostream>
using namespace std;

int main(){
	int count[5] = {}; //Declare array count for counting A,B,C,D,F and initialize all element = 0
	int i=0;
	char grade;
	cout << "Please input grade of each student (A-F) or input 0 to exit."<<endl;
	do{
		cout << "Student [" <<i+1<< "]: ";
		cin >> grade; 
		
		if(grade == '0') {break;} //The loop must be terminated when grade = '0'
		
		if(grade =='A'){ // if grade is A
			count[0] += 1;
			i +=1;
		}else if(grade == 'B'){ // if grade is B
			//Do something
		    count[1] += 1;
		    i +=1;}
		else if(grade == 'C'){ // if grade is C
			//Do something
		    count[2] += 1;
		    i +=1;
		}else if(grade == 'D'){ // if grade is D
			//Do something
		    count[3] += 1;
		    i +=1;
		}else if(grade == 'F'){ // if grade is F
			//Do something
            count[4] += 1;
            i +=1;
		}
		else{ 
		    cout << "Wrong input. Please input again."<<endl;
		} 
	}while(grade != 0 );
	
	
	cout << "In total " <<i<<" students."<<endl;
	cout << "A = " << count[0] <<", ";
	cout << "B = " << count[1] <<", ";
	cout << "C = " << count[2] <<", ";
	cout << "D = " << count[3] <<", ";
	cout << "F = " << count[4];
	//	and so on ... for grade = C, D, F	
	
	return 0;
}