#include <iostream>
#include <string>
#include <windows.h>
#include<mmsystem.h>

/*Study this link to condense code: 
https://stackoverflow.com/questions/17750699/c-displaying-a-text-file-echo-a-text-file*/

int main()
{
    /*See if you can add music later on :).
    PlaySound(TEXT("C:\\Users\\Patricia\\Beep Boop Bap Code\\our_mountain.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
    std::cout << "**********\n"
    "Decode for the Stone!\n"
    "**********"<< std::string( 2, '\n' );
    std::cout << "For decades friends Dwarven prince Habrek and runaway theif Nedda have been hailed as heroes.\n"
    "Together, they conquered the evils of Vecna and brought peace to the land." << std::string( 2, '\n' );
    std::cout << "Now, they embark on a new quest..."<< std::string( 2, '\n' );
    std::cout << "Join the adventurers to solve a series of puzzles to aquire Habrek's most prized possessions\n" 
    "The gems of his family and his right to the throne.\n"
    "Below is your first task. Choose wisely, Nedda doesn't take well to failure."<< std::string(2, '\n');
    std::cout << "**********" << std::string( 2, '\n');
    //Create "Press enter to continue" button.

   
    const int CodeA = 2;
    const int CodeB = 5;
    const int CodeC = 9;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;


    std::cout << "The three of you have been wondering through a dark dungeon for days, meeting all manenr of dark fiends.\n"
    "So far, this task has not been worth the handful of gold coins given to you by the hot-tempered halfling.\n"
    "By some miracle, however, you've finally reached the end, barred, of course, by a huge stone door."<< std::string(2, '\n');
    std::cout << "There are intricate, winding tunnels inscirbed throughout the walls.\n" 
    "You can see, by tracing the tunnels closely, that they lead to a latch. At waist level there is a small basin.\n"
    "Inside are perfectly round stone marbles with single-digit numbers inscribed on them.\n"
    "Above the basin are three holes and some worn Elven script. It reads:" << std::string(2, '\n');
    std::cout << "'Only three will lead you forward, to that which you seek.\n"
    "\t The chosen three add to " << CodeSum <<std::endl;
    std::cout << std::string( 2, '\t' ) << CodeProduct << " will be given if you multiply.'"  << std::string( 2, '\n' );

    int GuessA, GuessB, GuessC;
    std::cout << "Survey the stones before you. Now, select your choice: "; 
    std::cin >> GuessA;
    std::cin >> GuessB;
    std::cin >> GuessC;
    std::cout << "One by one you roll the stones " << GuessA << ", "<< GuessB << ", " << GuessC << " into the holes..." <<std::endl;     

    int GuessSum = GuessA + GuessB + GuessC;
    int Guessproduct = GuessA * GuessB * GuessC;

    return 0;
}