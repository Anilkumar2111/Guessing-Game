#include<iostream>
using namespace std;
// 1. creat a Umpire
// 2.get the number from Gusser
// 3.get the number from all the three player
// 4.print the result of the Gusser
// 5.End the game

class Guesser{
    int gussednum;
    public:
    int takeguesserinput()
    {
        int x;
        cout<<"Given the number from the gusser : "<<endl;
        cin>>x;
        gussednum=x;
        return gussednum;
    }
};
class Player{
    int playernum;
    public:
    int takeplayerinput()
    {
        int p;
        //cout<<"Given the number for  the Player :"<<endl;
        cin>>p;
        playernum=p;
        return playernum;
    }
};
class Umpire{
    int g;
    int p1num;
    int p2num;
    int p3num;
    public:
    void GetTheNumberFromGuesser()
    {
        Guesser g1;
       g= g1.takeguesserinput();
    }
    void GetTheNumberFromPlayer()
    {
        Player p1;
        Player p2;
        Player p3;
        cout<<"Give the number from thr player 1:"<<endl;
        p1num=p1.takeplayerinput();
        cout<<"Give the number from thr player 2:"<<endl;
        p2num=p2.takeplayerinput();
        cout<<"Give the number from thr player 3:"<<endl;
        p3num=p3.takeplayerinput();
    }
    void PrintTheResult()
    {
        //g p1num p2num p3num
        if(g==p1num)
        {
          //p1 has won the p2?&p3?
          if(g==p2num)
          {
            //p1 has won p2 has won the p3?
            if(g==p3num)
            {
                cout<<"All players has won the game"<<endl;
            }
            else{
                //p1 has won p2 has won p3 has lost
                cout<<"The player 1 and 2 has won the game"<<endl;
            }
          }
          else{
            //p1 has won p2 has lost the game
              if(g==p3num)
            {
                cout<<"The player 1 and 3 has won the game"<<endl;
            }
            else{
                //p1 has won p2 has won p3 has lost
                cout<<"The player 1  has won the game"<<endl;
            }
          }
        }
        else if(g==p2num)
        {
            //p1 has lost p2 has won->know
            //test for p3->test
            if(p3num==g)
            {
                //p1 has lost p2 has won p3 has also won->know
                cout<<"The player 2 and 3 has won the game "<<endl;
            }
            else{
                //p1 has lost p2 has won p3 has lost->know
                cout<<"The player 2 has won the game "<<endl;
            }
        }
        else if(g==p3num)
        {
            //p1 has not won p2 has not won p3 has won->know
            cout<<"The player 3 has won the game"<<endl;
        }
        else{
            //p1 has lost p2 has lost p3 has lost->know
            cout<<"All the players has lost the game"<<endl;
        }

    }

};

int main()
{
    cout<<".......Let's Start the Game.........."<<endl;
    //create the Umpire object
    Umpire u;
    u.GetTheNumberFromGuesser();
    u.GetTheNumberFromPlayer();
    u.PrintTheResult();


    cout<<"........End The Game..........."<<endl;
}