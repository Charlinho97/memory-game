#include <iostream>
#include <vector>

using namespace std;

struct memory
{
    bool display, match = false;
    char imageName;
};

class grid()
{
    void show()
    ;
}

void model(int variable)
{
    
    vector<vector<memory>> grid(
    variable,
    vector<memory>(variable)
    );
    
    cout<<grid[variable-1][variable-2].match;

    grid[variable-1][variable-2].erase();

    return;
}


int main()
{
    int gridInput = 0;

    cout<<"Grid:\n";
    cin>>gridInput;
    
    model(gridInput);

    return 0;  
}