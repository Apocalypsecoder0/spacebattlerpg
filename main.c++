int main()
{
 
  installbasegamedata;
initalizesavegamedata;
initializeloadgamedata;
 initializecreatPlayerdata();  //To Initialize Player  
 inialitzedifficultmode;
 initialize campaign;  
 initializestorymode(basegame);
 initializestorymode(baseexpgame);
 initialize act;
 initialize chapter;
 initialize episodes;
 initialize mission;
initialize quest;
 initializespace();  //To Initialize space  
 initializeBattle();  //To Initialize Battle  
  initializeTechnology();  //To Initialize Technology   
initializeupgrades(technology); 
initializeartifact;
 initializeglyphs;
 initializeenchantment;
 initializePlayer();  //To Initialize Player  
initializeEnemyships();  //To Initialize Enemyship  
 initalizegaveequment();
initalizegiveItem();  //To give item
initalizeinventory(); 
 initializeEnemyships();
 initializeTechnology();
 initializePlayer();
 initializespace();, initializemspace();, initializeqspace();, initializeuspace(); initializesolspace();
	char move;
	int currentspace = 0;
 cout << "You emerge in the " <<spaceArray[currentspace].name;  //You Emerge in spaceArray
 cout << spaceArray[currentspace].description;  //Description of spaceArray
	while (charactership.sp > 0)
 {
	if (spaceArray[currentspace].forward != -1)  //To spaceArray to move forward
	{
	   cout << "You may move forward.\n";
	}
	if (spaceArray[currentspace].backward != -1)  //To spaceArray to move backward
	{
	   cout << "You may move backward.\n";
	}
	if (spaceArray[currentspace].starboard != -1)  //To spaceArray to move starboard
	{
	   cout << "You may move to starboard.\n";
	}
	if (spaceArray[currentspace].port != -1)  //To spaceArray to move port
	{
	   cout << "You may move to port.\n";
	}
	cout << "please enter your move: " << endl;
	cin >> move;
	move = toupper(move);
	if (move == 'S')
 currentspace = spaceArray[currentspace].starboard;
	if (move == 'P')
	   currentspace = spaceArray[currentspace].port;
	if (move == 'F')
	   currentspace = spaceArray[currentspace].forward;
	if (move == 'B')
	   currentspace = spaceArray[currentspace].backward;
   if (move == 'C')
	   cout << "You have " << charactership.sp << " SP." << endl;  //Player have Ship Points
	   cout << "You have " << charactership.power << " Power." << endl;  //Player have Power
	   cout << "You have " << charactership.sif << " SIF." << endl;  //Player have structural integrity field (sif)
	if (move != 'S' && move != 'P' && move != 'B' && move!= 'F')
	cout << "Please enter either 'F', 'S', 'B' or 'P'! " << endl;  //Player Keys to move
	cout << "You emerge in the " << spaceArray[currentspace].name << endl;
	cout << spaceArray[currentspace].description << endl;
	initializeBattle();
giveItem();
	}
 system("CLS");  //Clear the screen
	cout << "Replied From Fleet Admiral Stephen\n"
	     << "You are lucky that you got in a escape pod befor your ship was blow up\n"
         << "You have failed to beat The Divine Order Imperial StarShips. You have also\n"
		 << "failed to save the Milky Way Galaxy from the Divine Order.\n"
         << "What where you thinking going\n"
		 << "into Space Battle Wars PRG so weak (*hint make ship stats higher*)!\n"
         << "so now you are in the escape pod and drifting for months before landing on a habited planet.\n"
         << "Mission Over. (Game Over)" << endl;  //From 5 star Admiral Stephen
 system("PAUSE");  //Pause
 system("CLS");  //Clear the screen

  char username[30];

    cout
         << "Replied from Captain:\n" << username << "Um...Yeah, I guess, unless\n"
         << "the programmer doesn't feel lazy and\n"
         << "adds more to the game.\n," << endl;  //Replied from the Player

 system("PAUSE");  //Pause
 system("CLS");  //Clear the screen

    cout <<"     \Fat chance of that happening, I hardly had the energy to make\n"
    << "the game the way it is now, screw adding more.\n"" came a voice from\n"
    << "out of nowhere...\n\n"
    << "Also Live long and prosper"<< endl;  //Voice from the programmer in typeing
    system("PAUSE");  //Pause
 system("CLS");  //Clear the screen

  cout <<"Try Agen because ther is no End to the game but for Game Over.\n"<< endl; //Try Agen from the programmer in typeing

   system("PAUSE");  //Pause

	return 0;
}