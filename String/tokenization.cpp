// divide string into tokens using strtok() function
//strtok() function takes two arguments: str and delim(breaking point)

#include <iostream>
#include<string>
#include<cstring>
#include<algorithm>
using namespace std;

int main()
{
    char s[100] = "today is 23 june";

  //second arg is delimator(breaking point)(like ',' '$' 'a' ' ')
    char *ptr = strtok(s, " ");
    cout <<ptr<<endl;
    
    while(ptr != NULL){
        ptr = strtok(NULL, " ");
        cout<<ptr<<endl;
    }
    return 0;
}
op:
today
is
23
june