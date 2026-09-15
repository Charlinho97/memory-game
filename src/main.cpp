#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

class Item {
    private:
        ;    
    public:
    bool display, match = false;
    string imagePath;

    void correspond() {
        match = true;
    }

    void hide() {
        display = false;
    }

    void reveal() {
        display = true;
    }
};
class GameView {
    private:
    ;
    public:

    bool selectObj() {

        return false;
    }

    bool gameStart() {

        return false;
    }

    bool gameRestart() {

        return false;
    }

    void run() {

    }
};
class GameModel {
    private:
    vector<vector<Item>> grid;
    ;
    public:

    int variable;

    GameModel (int size):
    grid(size, vector<Item>(size))
    {
        
    }
};
class GameController {
    private:;
    public:;

    GameController (GameModel& model, GameView& view) {
        
        //if (){view.gameStart();}

        //if (){view.gameRestart();}

    };
};

int main()
{    
    GameView view;
    GameModel model(3); //The input variable should come from the GUI
    GameController controller(model, view);

    view.run();
    return 0;  
}