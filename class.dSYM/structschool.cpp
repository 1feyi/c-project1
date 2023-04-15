#include <iostream>
#include <string>
using namespace std; 

int main () {

struct {
string name;
string location;
int year ;
string classes ; 
string course ;
} myschool1, myschool2, myschool3; 

myschool1.name = "Dayspring " ;
myschool1.location = "phase 2, Opposite Mr.Biggs Kubwa Abuja. ";
myschool1.year = 1890 ;
myschool1.classes = "Pre-nursery1 - primary6 " ;
myschool1.course = "English, Mathematics, Basic science, Health Education, Social Studies, Quantitative Reasoning. ";


cout << myschool1.name <<"\n" << myschool1.location <<"\n" << myschool1.year <<"\n" << myschool1.classes <<"\n" << myschool1.course <<"\n";




myschool2.name = "Faith Academy Goshen " ;
myschool2.location = "Faith Academy Goshen Abuja, Nassarawa state. ";
myschool2.year = 1994 ;
myschool2.classes = "JSS1 - SS3 " ;
myschool2.course = "English, Mathematics, Physics, Chemistry, Biology, Technical drawing, Building Construction, Government, Civic Education, Spiritual Prowess. ";


cout << myschool2.name <<"\n" << myschool2.location <<"\n" << myschool2.year <<"\n" << myschool2.classes <<"\n" << myschool2.course <<"\n";



myschool3.name = "Bowen University" ;
myschool3.location = "Bowen University, Iwo state ";
myschool3.year = 1829 ;
myschool3.classes = "100level - 500level " ;
myschool3.course = "cve, chm, phy, csc" ;

cout << myschool3.name <<"\n" << myschool3.location <<"\n" << myschool3.year <<"\n" << myschool3.classes <<"\n" << myschool3.course <<"\n";






 return 0;
}