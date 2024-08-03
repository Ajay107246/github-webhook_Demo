#include <iostream>

using namespace std;

int main()
{
    cout << "this is demo repo to do anything from Jenkins with GitHub!" << endl;
    cout << " to fo GitHub SCM polling, you need ngrok" << endl;
    cout << "to installed using choco install ngrok" << endl;
    cout <<  "and use ngrok 8080 or command = ngrok http 8080 --host-header=\"localhost:8080\"" << endl;
    cout << "ngrok will create dummy https url for you" << endl;
    cout << "use that url/github-webhook/ in your github repo -> setting -> webhook" << endl;
    return 0;
}