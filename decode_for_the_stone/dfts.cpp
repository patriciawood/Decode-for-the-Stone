#include <iostream>
#include <string>
#include <fstream>
#include <ctime>

using namespace std;
int PrintIntroduction()
{
     /*See if you can add music later on :).
    PlaySound(TEXT("C:\\Users\\Patricia\\Beep Boop Bap Code\\our_mountain.wav"), NULL, SND_FILENAME | SND_ASYNC);*/
    cout << "\n\n**********\n"
    "Decode for the Stone!\n"
    "**********\n\n\n";

    cout << "For decades friends Dwarven prince Habrek and runaway theif Nedda have been hailed as heroes.\n"
    "Together, they conquered the evils of Vecna and brought peace to the land.\n\n";
    cout << "Now, they embark on a new quest...\n\n";
    cout << "Join the adventurers to solve a series of puzzles to aquire Habrek's most prized possessions\n" 
    "The gems of his family and his right to the throne.\n"
    "Below is your first task. Choose wisely, Nedda doesn't take well to failure.\n\n";
    cout << "The three of you have been wondering through a dark dungeon for days, meeting all manner of dark fiends.\n"
    "So far, this task has not been worth the handful of gold coins given to you by the hot-tempered halfling.\n"
    "Habrek is the only likeable company, really. His warm deamnor and fearless protectiveness in battle made him seem to you a good man\n"
    "His snow white beared seemed to not fit on his otherwise young face\n"
    "Regardless, the youth of his face couldn't hide the age in his eyes. Perhaps the strangest thing, however, was the absence of his right hand.\n\n"
    
    "After days of wondering with this strange couple, you're yearning for home. You were just a Alchemist, after all! Not some adventurer!\n"
    "By some miracle, however, you've finally reached the end of the caves, barred, of course, by a huge stone door.\n\n";
    
    cout << "There are intricate, winding tunnels inscirbed throughout the walls.\n" 
    "You can see, by tracing the tunnels closely, that they lead to a latch. At waist level there is a small basin.\n"
    "Inside are perfectly round stone marbles with single-digit numbers inscribed on them.\n"
    "Above the basin are three holes and some worn Drawven script. It reads:\n\n";

    return 0;
            
}

bool PlayGame(int Difficulty)
{
    const int CodeA = rand() % Difficulty + Difficulty;
    const int CodeB = rand() % Difficulty + Difficulty;
    const int CodeC = rand() % Difficulty + Difficulty;

    const int CodeSum = CodeA + CodeB + CodeC;
    const int CodeProduct = CodeA * CodeB * CodeC;
    
    cout << "'Only three will lead you forward, to that which you seek.\n"
    "\t The chosen three add to " << CodeSum << endl;
    cout << string( 2, '\t' ) << CodeProduct << " will be given if you multiply.'\n\n" ;
    cout << "Survey the stones before you. Now, select your choice: "; 

    int GuessA, GuessB, GuessC;
    cin >> GuessA >> GuessB >> GuessC;
    
    int GuessSum = GuessA + GuessB + GuessC;
    int GuessProduct = GuessA * GuessB * GuessC;
   
    cout << "\nOne by one you roll the stones " << GuessA << ", "<< GuessB << ", " << GuessC << " into the holes...\n\n"
    "-----\n\n";     

    if (GuessSum == CodeSum && GuessProduct == CodeProduct)
    {
        cout << "The stones roll along their prospective tracks. Somewhere behind the door your hear a click...\n"
        "But the door won't budge. Above you the numbers in the message change.\n\n"; 
       return true;
    }
    else
    {
        cout << "\nThe stones begin to rumble beneath your feet. You hear Habrek's slightly high pitched voice\n\n"
        "'Um... This doesn't seem too goo-' the floor opens beneath you and you are swallowed into a black void\n"
        "never to be seen again.... \n\n"
        "Retry?\n\n";
        getchar() ; //Add (y/n) if you can
        cout << "-----\n\n";
        return false;
    }
    

}


int main()
{
    srand(time(NULL)); // create new randsom sequence based on time of day.
    int LevelDifficulty = 1;
    const int MaxDifficulty = 5;

    PrintIntroduction();
 
    while(LevelDifficulty <= MaxDifficulty) //Loop game until all levels are completed
    {
        bool bLevelComplete = PlayGame(LevelDifficulty);
        cin.clear(); //Clears errors
        cin.ignore(); //Discards buffer

    if (bLevelComplete)
    {
        ++LevelDifficulty;
    }
            
    }

 
    cout << "As you roll the final stone, five large circles on the door illuminate with a soft blue light.\n"
    " You hear gasps behind you as the circles begin to slowly rotate away from the center, overlapping with one another as they widen into an entrance.\n\n"
    "Inside, a dim shaft of light, the only light in the room, falls on small crate.\n\n"
    "'Well. Looks like my investment paid off for once. I can pick any lock and tell you the secret history of Elondrea, but I can't do math to save my life,' Nedda chuckles behind you.\n"
    "You notice, vaguely, the golden eyes on her cloak glow ever so slightly in the dim light.\n"
    "Habrek peers in through the doors and you join him, feeling decidedly underwhelmed. It's just a stupid old box.\n\n"
    "'That's it?,' you blurt out before you can stop yourself, turning back to Nedda.\n\n"
    "Stones slowly rotating her head like planets she holds a single finger up to her mouth, shushing you. A wild smile plays on her lips as she looks past you.\n"
    "Slowly, you turn around.\n\n"
    "Habrek's face is somber, his usual jovial face a mask of stone. He seemed older, like he was taking on a great responsibility that he alone could bear.\n"
    "You suddenly realize, as he draws his sword, the gems in the hilt glow brightly. The deep colors refracting off the walls, which are not plain at all.\n"
    "Only glimpses of hundreds of Drawven stories are seen etched on the walls through the dim light. Battles, diplomacy, families, comedies, empires.\n"
    "You stare, enamoured by the walls that seemed bare before.\n\n"
    "BAM!\n\n"
    "You jump as your eyes lock back on Habrek. His long, shining sword lay in between the crate he had obviously busted open.\n"
    "The sword shone like the moon, something about it didn't seem real. Like it had fallen from heaven into the hands of this mighty Dwarf.\n\n"
    "From the center of the crate, a single, white stone floats up like a spirit, settling right before Habrek's eyes.\n\n"
    "'Do you accept this duty we, the ancestors, set upon you Habrek Fireforge?,' a thousand voices echoed off the walls in Drawvish.\n"
    "With a stoney, resolved face Habrek spoke, 'I do.'\n"
    "'Very well'\n\n"
    "A silver mist revolves around Habrek, the stone moving with the mist. A beautiful song emerges, thousands of voices joined together in a haunting melody.\n"
    "'You are the King under the Mountain, King of the Pale Mount.'\n"
    "'Our king!' the voices rejoiced\n\n"
    "It was then that you realized who stood before you. Not just a hero from some far off land, but a king. A king of one of the largest kingdoms in Elondrea.\n\n"
    "A heavy arm landed on your shoulder, 'See? I told you it would be worth your while.' Nedda chuckled softly, her face softly streaked with tears.\n"
    "'It truly was, Miss Greenbottle...', you whisper quietly.\n\n\n"
    "The End. Thank you for playing!";

   return 0;
}