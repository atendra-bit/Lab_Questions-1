// Ques 8. Copy the contents of one text file to another file and display the number of
// characters copied.

// Code :

#include <fstream>
int main()
{
std::ifstream file;
file.open("Q8_txtfile.txt");
std::string stng;
std::string tmp;
while (file) {
std::getline(file, tmp);
stng += tmp;
}
file.close();
std::ofstream outp;
outp.open("Q8_output.txt");
outp << stng;
outp.close();
std::cout << "File Created, Charactors Copied :- " << stng.length() <<
std::endl;
char a;
std::cin>>a;
}