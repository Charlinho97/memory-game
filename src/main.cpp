#include <iostream>
#include <vector>
#include <random>

using namespace std;

struct memory
{
    bool display, match = false;
    string imageName;
};

class Item {
    private:
        ;    
    public:

        bool display, match;
        string imagePath;

        void correspond() {
            match = true;
        }

        void hide() {
            display = false;
        };

        void show() {
            display = true;
        };
}

void model(int variable)
{
    vector<vector<memory>> grid(
    variable,
    vector<memory>(variable)
    );
    
    cout<<grid[variable-1][variable-2].match;

    return;
}

int main()
{
    int gridInput = 0;

    cout<<"Grid:\n";
    cin>>gridInput;
    
    model(gridInput);

    Item isso;
    isso.show();

    return 0;  
}