#include<iostream>
using namespace std ; 

enum enStonePaperScissors{Stone = 1 , Paper = 2 , Scissors = 3} ; 
enum enWinOrNot{Win = 1 , NotWin = 2 , NoOneWin = 3} ; 


float ReadNumber(string Message )
{
    float Number ; 
    
    cout << Message ; 
    cin >> Number ; 
    

    return Number ; 
}

int RandomNumber(int From , int To )
{
    int Random = rand() % (To - From + 1 ) + From ; 

    return Random ; 
}

int HowRoundsPlay()
{
    int Rounds ;
    do 
    {
        cout << "How Many Rounds 1 to 10 : " ; 
        cin >> Rounds ; 
    }
    while(Rounds < 1 || Rounds > 10 ) ; 

    return Rounds ; 
}


enStonePaperScissors ChoseComputer()
{
    return (enStonePaperScissors)RandomNumber(1,3) ; 
}

enStonePaperScissors ChosePlayer()
{
    int Chose = 0  ; 
    do
    {
        Chose =  ReadNumber("Write Your Choice -> [1]:Stone , [2]:Paper , [3]:Scissors :");
    }while ( Chose > 3 || Chose < 1 ) ; 
    return (enStonePaperScissors)Chose ; 
}
string StringChose(enStonePaperScissors Chose)
{
    if ( Chose == Stone )   return "Stone" ; 
    else if ( Chose == Paper )  return "Paper" ; 
    else if ( Chose == Scissors )  return "Scissors" ; 
}

enWinOrNot RoolOfTheGame( int Computer , int Player)
{

    if ( Computer == Player )   return NoOneWin ; 
    else if ( Computer == Stone && Player == Scissors || Computer == Scissors && Player == Paper || Computer == Paper && Player == Stone)   return NotWin ;
    else return Win ; 
}
string StringWinOrNor(enWinOrNot Check)
{
    if (Check == Win)   return "[You Winner]" ; 
    else if ( Check == NotWin ) return "[Computer Winner]" ; 
    else    return "[No Winner]" ; 
}
bool DoYouPlayAgain()
{
    char Ask ; 
    cout << "Do You Want To Play Again ? Y/N " ; 
    cin >> Ask ; 
    if ( Ask == 'Y' || Ask == 'y')
        return true ; 
    return false ; 
}

void SetValues(enWinOrNot Check , int &WinerTime , int &LoseTimes , int &DrawTimes)
{
    if (Check == Win)   WinerTime++ ; 
    else if (Check == NotWin)   LoseTimes++ ; 
    else  DrawTimes++ ; 
}

string Winner(int WinerTime , int LoseTimes)
{
    if ( WinerTime > LoseTimes )
    {
        cout << "\033[32m" ;
        return "[You Winner]" ;
    }
    else if ( WinerTime < LoseTimes ) 
    {
        cout << "\033[31m" ;
        return "[Computer Winner]" ; 
    }
    else 
    {
        cout << "\033[33m" ;
        return "[No Winner]" ;
    }
}

void TotalResult(int GameTimes , int WinerTime , int LoseTimes , int DrawTimes)
{
    cout << "------------------------------------------------------------------" << endl ; 
    cout << "------------         ++++Game Over++++      ----------------------" << endl ; 
    cout << "------------------------------------------------------------------" << endl ; 
    cout << "------------         [Game Results]      ----------------------" << endl ; 
    cout << "Game Rounds : " << GameTimes <<endl ; 
    cout << "Player Won Times : " << WinerTime <<endl ; 
    cout << "Computer Won Times : " << LoseTimes << endl ; 
    cout << "Draw Times : " << DrawTimes <<endl ; 
    cout << "Final Winer : " << Winner(WinerTime,LoseTimes) <<endl ; 

}
void game(int &GameTimes , int &WinerTime , int &LoseTimes , int &DrawTimes)
{
    bool PlayOrNot ; 
    GameTimes = HowRoundsPlay() ; 
    do 
    {
        for ( int i = 1 ; i <= GameTimes ; i++)
    {
        cout << "Round[" << i << "] begins : " << endl ; 
        enStonePaperScissors ChoseePlayer = ChosePlayer() ; 
        enStonePaperScissors ChoseeComputer = ChoseComputer() ; 

        cout << "----------------------Round["<<i<<"]----------------------------" << endl ; 
        cout << "Player ["<<i<<"] Chose : " << StringChose(ChoseePlayer) << endl ; 
        cout << "Computer Chose : " << StringChose(ChoseeComputer) << endl ; 
        cout << "Round Winner : "<< StringWinOrNor(RoolOfTheGame(ChoseeComputer,ChoseePlayer)) << endl ; 
        cout << "----------------------------------------------------------------" << endl ; 
        SetValues(RoolOfTheGame(ChoseeComputer,ChoseePlayer),WinerTime,LoseTimes,DrawTimes) ; 

    }
    PlayOrNot = DoYouPlayAgain() ;
    }while(PlayOrNot == true) ; 
    TotalResult(GameTimes,WinerTime,LoseTimes,DrawTimes) ;
}

int main()
{
    srand((unsigned)time(NULL) ); 
    int GameTimes = 0 , WinerTime = 0 , LoseTimes = 0 , DrawTimes = 0 ; 
    game(GameTimes , WinerTime , LoseTimes , DrawTimes) ; 

    return 0 ; 
}
