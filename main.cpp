#include <iostream>
#include <string>

using namespace std;

class Students
{
private:
    string first_name, last_name;
public:
    Students():first_name(0), last_name (0)
    {

    }
    Students(string first, string last):first_name(first), last_name (last)
    {

    }
};

int main()
{
    cout << "Hello, World!\n";
    /*
     * int n;
    string first_name, last_name;
    cin>>n;
    Students *group = new Students [n];
    for (int i=0;i<n;i++)
    {
        cin>>first_name>>last_name;
        group[i](first_name, last_name);

    }
    */

    return 0;
}
