#include <iostream>
#include <vector>

using namespace std;

enum scissorsType { Vannas, Castroviejos, McPhersons };

class Scissors {
    private:
        int length; // 20cm, 50cm
        scissorsType type; //  Vannas, Castroviejos, McPhersons
        bool leftOrRightHandUse; // if left hand false, else if right hand True
        string kind = "tungsten_carbide"; // steel , tungsten carbide
        vector<string> cutObjectives; // add  fur, thicker tissue or vessels ,bones and muscle.
    public:
        Scissors( int length, scissorsType st, bool LorRHand ){
            this->length = length; 
            type = st;
            leftOrRightHandUse = LorRHand;
        }
        Scissors operator + ( string object ){

            cutObjectives.push_back( object );
            return *this;
        }
        Scissors operator - ( string object ){

            for(auto it = cutObjectives.begin(); it != cutObjectives.end(); ++it){
                if ( object == *it ) {
                    cutObjectives.erase( it );
                    break;
                }
            }
            return *this;
        }
        void setLen( int len ) {
            length = len;
            return;
        }
        int getLen( void ){
            return length;
        }
        scissorsType getType(){
            return type;
        }
        void ListCutObjects() {
            for ( auto item : cutObjectives ){
                std::cout << item << "  ";
            }
            std::cout << std::endl;
        }
};