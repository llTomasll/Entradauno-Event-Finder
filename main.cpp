#include <iostream>
#include <fstream>
using namespace std;
int main()
{
    ofstream file;
    file.open("Tickets.py");
    file<<"import webbrowser"<<endl;
    for (int i=26360;i<26400;i++)
    {
        file << "webbrowser.open('https://entradauno.com/queue/index.html?qid="<<i<<"')" << endl;
    }
    file.close();
}