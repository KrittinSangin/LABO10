#include <iostream>
#include <iomanip>
#include <cmath>
#include <string>
#include <fstream>
#include <cstdlib>
using namespace std;

int main(){
    ifstream source;
    source.open("score.txt");
    double count,sum1,sum2,mean,presd,postsd;
    string bruh;
    while(getline(source,bruh)){
		
        sum1 += atof(bruh.c_str());
        sum2 = sum2 + pow(atof(bruh.c_str()),2);
        count++;
	}
    mean = sum1/count;

    
    presd = sum2/count;
    postsd = presd - pow(mean,2);
    cout << "Number of data = "<<count<<"\n";
    cout << setprecision(3);
    cout << "Mean = "<<sum1/count<<"\n";
    cout << "Standard deviation = " << sqrt(postsd);
}