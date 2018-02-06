#include <iostream>
#include <unistd.h>
#include <sys/types.h>

using namespace std;

int main()
{
    ssize_t chars=12;
    write(1, "Hello World\n", chars);
    write(1, "Hello again\n", chars);
    cout<<"Hello from cout from both sides!"<<endl;
}
