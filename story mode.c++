void initialize act;

void initialize chapter;

void initialize episodes;

void initialize stage;

void initialize mission;

void initialize quest;


class CombatSystem
 {        struct battles( battlemission; and battlequest);
          //The combat system is tilted more towards the attacker and as such, encourages the entire universe to attack anyone, for any amount of profit. It is commonly seen that large profits are made against high level players, resulting in a fair game. However, many players target heavily defended planets for the sole purpose of "cracking turtles" and do not care if they make little or no profit.
struct battles;
{     
      class battlemission;, class battlequest;
		char description[500];  //The description 
    char name[30];  //Name
    struct attackpower
    struct defincepower;
	};
	class story system;
struct expansions;
 {	char description[500];  //The description 
 char name[30];  //Name
 };
struct act;
 {	char description[500];  //The description 
 char name[30];  //Name
 };
 struct chapter;
 {	char description[500];  //The description 
 char name[30];  //Name
 };
   struct episodes;
struct mission;
{	char description[500];  //The description 
 char name[30];  //Name;
struct mission[50];
};
   struct quest;
{
	char description[500];  //The description 
 char name[30];  //Name
struct quest[50];
};


 strcpy(actArray[0].type, "type\n");  
  strcpy(actArray[0].name, "name");  
  strcpy(actArray[0]"description");
   actArray[0].level = 0;
   actArray[0].bonus = 20; 
   
   
 strcpy(seasonsArray[0].type, "type\n");  
  strcpy(seasonsArray[0].name, "name");  
  strcpy(seasonsArray[0]"description");
   seasonsArray[0].level = 0;
  seasonsArray[0].bonus = 20; 
  
   strcpy(stageArray[0].type, "type\n");  
  strcpy(stageArray[0].name, "name");  
  strcpy(stageArray[0]"description");
  stageArray[0].level = 0;
   stageArray[0].bonus = 20; 
   
   strcpy(missionArray[0].type, "type\n");  
  strcpy(missionArray[0].name, "name");  
  strcpy(missionArray[0]"description");
   missionArray[0].level = 0;
  missionArray[0].bonus = 20; 
   
    strcpy(questArray[0].type, "type\n");  
  strcpy(questArray[0].name, "name");  
  strcpy(questArray[0]"description");
   questArray[0].level = 0;
   questArray[0].bonus = 20; 
 //  void initializebasegame;
void initialize new campaign game:  
void initializeact [10];
void act(act)
{
     /*The artifact Technology Randomgenerator*/
	 int randomactgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomactgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomactgenerator == 0 || randomactgenerator == 1 || randomactgenerator == 2)
	 {
     cout << "Do you want to play the new act" << actArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << actArray[randomgenerator].act << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.act = actArray[randomgenerator].act;
     else
		   charactership.act = charactership.act;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to play the new act" << actArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << actArray[randomgenerator].act << "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the quest
		   charactership.quest = actArray[randomgenerator].act;
     else			charactership.act = charactership.act;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to play the new act" << actArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << artifactArray[randomgenerator].bonus << "to your log inventory."<< endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.act = actArray[randomgenerator].act;
		else
			charactership.act = charactership.act;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to play the new act " << actArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << actArray[randomgenerator].act << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.act = actArray[randomgenerator].act;
     else
		   charactership.act = charactership.act;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to play the new act" << actArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << actArray[randomgenerator].bonus << "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.shield = actArray[randomgenerator].act;
     else
         charactership.act = charactership.act;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to play the new act" << actArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << actArray[randomgenerator].act << "to your log inventory." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.act = actArray[randomgenerator].act;
     else
           charactership.act = charactership.act;
		}

     void initialize seasons;
        
     /*The seasons Technology Randomgenerator*/
	 int randomactgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomseasonsgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomseasonsgenerator == 0 || randomseasonsgenerator == 1 || randomseasonsgenerator == 2)
	 {
     cout << "Do you want to get the new seasons" << seasonsArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << seasonsArray[randomgenerator].seasons << "to your log invertory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.seasons = seasonsArray[randomgenerator].seasons;
     else
		   charactership.seasons = charactership.seasons;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new seasons" << seasonsArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << seasonsArray[randomgenerator].seasons<< "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.seasons = seasonsArray[randomgenerator].seasons;
     else			charactership.seasons = charactership.seasons;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new seasons" << seasonsArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << seasonsArray[randomgenerator].seasons << "to your log inventory." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.seasons = seasonsArray[randomgenerator].seasons;
		else
			charactership.seasons = charactership.seasons;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new seasons " << seasonsArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << seasonsyArray[randomgenerator].seasons << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.seasons = seasonsArray[randomgenerator].bonus;
     else
		   charactership.seasons = charactership.seasons;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new seasons" << seasonsArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << seasonsArray[randomgenerator].seasons << "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.seasons= seasonsArray[randomgenerator].seasons;
     else
         charactership.seasons = charactership.seasons;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new seasons" << seasonsArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << seasonsArray[randomgenerator].seasons << "to your log inventory." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.seasons = seasonsArray[randomgenerator].seasons;
     else
           charactership.seasons = charactership.seasons;
		}
		     
    void initialize chapters;
        
     /*The chapters Technology Randomgenerator*/
	 int randomchaptersgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomactgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomchaptersgenerator == 0 || randomchaptersgenerator == 1 || randomchaptersgenerator == 2)
	 {
     cout << "Do you want to get the new chapters" << chaptersArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << chaptersArray[randomgenerator].chapters << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.chapters = chaptersArray[randomgenerator].chapters;
     else
		   charactership.chapters = charactership.chapters;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new chapters" << chaptersArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << chaptersArray[randomgenerator].chapters<< "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.chapters = chaptersArray[randomgenerator].chapters;
     else			charactership.chapters = charactership.chapters;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new chapters" << chaptersArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << chaptersArray[randomgenerator].chapters << "to your log inventory." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.chapters = chaptersArray[randomgenerator].chapters;
		else
			charactership.chapters = charactership.chapters;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new chapters " << chaptersArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << chaptersyArray[randomgenerator].chapters << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.chapters = chaptersArray[randomgenerator].bonus;
     else
		   charactership.chapters = charactership.chapters;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new chapters" << chaptersArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << chaptersArray[randomgenerator].chapters << "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.chapters= chaptersArray[randomgenerator].chapters;
     else
         charactership.chapters = charactership.chapters;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new chapters" << chaptersArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << chaptersArray[randomgenerator].chapters << "to your log inventory." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.chapters = chaptersArray[randomgenerator].chapters;
     else
           charactership.chapters = charactership.chapters;
		}
		     
    void initialize stage;
        
     /*The stage Technology Randomgenerator*/
	 int randomstagegenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomactgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomstagegenerator == 0 || randomstagegenerator == 1 || randomstagegenerator == 2)
	 {
     cout << "Do you want to get the new stage" << stageArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << stageArray[randomgenerator].stage << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.stage = stageArray[randomgenerator].stage;
     else
		   charactership.stage = charactership.stage;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new stage" << stageArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << stageArray[randomgenerator].stage<< "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.stage = stageArray[randomgenerator].stage;
     else			charactership.stage = charactership.stage;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new stage" << stageArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << stageArray[randomgenerator].stage << "to your log inventory." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.stage = stageArray[randomgenerator].stage;
		else
			charactership.stage = charactership.stage;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new stage " << stageArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << stageyArray[randomgenerator].stage << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.stage = stageArray[randomgenerator].bonus;
     else
		   charactership.stage = charactership.stage;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new stage" << stageArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << stageArray[randomgenerator].stage << "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.stage= stageArray[randomgenerator].stage;
     else
         charactership.stage = charactership.stage;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new stage" << stageArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << stageArray[randomgenerator].stage << "to your log inventory." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.stage = stageArray[randomgenerator].stage;
     else
           charactership.stage = charactership.stage;
		}
		     
    void initialize mission;
        
     /*The mission Technology Randomgenerator*/
	 int randommissiongenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomactgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randommissiongenerator == 0 || randommissiongenerator == 1 || randommissiongenerator == 2)
	 {
     cout << "Do you want to get the new mission" << missionArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << missionArray[randomgenerator].mission << "to your mission log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.mission = missionArray[randomgenerator].mission;
     else
		   charactership.mission = charactership.mission;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new mission" << missionArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << missionArray[randomgenerator].mission<< "to your mission log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.mission = missionArray[randomgenerator].mission;
     else			charactership.mission = charactership.mission;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new mission" << missionArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << missionArray[randomgenerator].mission << "to your mission log inventory." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.mission = missionArray[randomgenerator].mission;
		else
			charactership.mission = charactership.mission;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new mission " << missionArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << missionyArray[randomgenerator].mission << "to your mission log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.mission = missionArray[randomgenerator].bonus;
     else
		   charactership.mission = charactership.mission;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new mission" << missionArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << missionArray[randomgenerator].mission << "to your mission log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.mission= missionArray[randomgenerator].mission;
     else
         charactership.mission = charactership.mission;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new mission" << missionArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << missionArray[randomgenerator].mission << "to your mission log inventory." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.mission = missionArray[randomgenerator].mission;
     else
           charactership.mission = charactership.mission;
		}
		     
    void initialize quest;
        
     /*The quest Technology Randomgenerator*/
	 int randomquestgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomactgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomquestgenerator == 0 || randomquestgenerator == 1 || randomquestgenerator == 2)
	 {
     cout << "Do you want to get the new quest" << questArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << questArray[randomgenerator].quest << "to your log inventory." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.quest = questArray[randomgenerator].quest;
     else
		   charactership.quest = charactership.quest;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new quest" << questArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << questArray[randomgenerator].quest<< "to your log inventory." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.quest = questArray[randomgenerator].quest;
     else			charactership.quest = charactership.quest;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new quest" << questArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << questArray[randomgenerator].quest << "to your quest list." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.quest = questArray[randomgenerator].quest;
		else
			charactership.quest = charactership.quest;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new quest " << questArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << questyArray[randomgenerator].quest << "to your quest list." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.quest = questArray[randomgenerator].bonus;
     else
		   charactership.quest = charactership.quest;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new quest" << questArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << questArray[randomgenerator].quest << "to your quest list." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.quest= questArray[randomgenerator].quest;
     else
         charactership.quest = charactership.quest;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new quest" << questArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << questArray[randomgenerator].quest << "to your quest list." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.quest = questArray[randomgenerator].quest;
     else
           charactership.quest = charactership.quest;
		}
		     
    void initialize episode;
        
     /*The episode Technology Randomgenerator*/
	 int randomeposodegenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomactgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomepisodegenerator == 0 || randomepisodegenerator == 1 || randomepisodegenerator == 2)
	 {
     cout << "Do you want to get the new episode" << episodeArray[randomactgenerator].name << " ?" << endl;
   	 cout << "This will add " << episodeArray[randomgenerator].episode << "to your episode list." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.episode = episodeArray[randomgenerator].episode;
     else
		   charactership.episode = charactership.episode;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new episode" << episodeArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << episodeArray[randomgenerator].episode<< "to your episide list." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.episode = episodeArray[randomgenerator].episode;
     else			charactership.episode = charactership.episode;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new episode" << episodeArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << episodeArray[randomgenerator].episode << "to your episode list." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.episode = episodeArray[randomgenerator].episode;
		else
			charactership.episode = charactership.episode;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new episode " << episodeArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << episodeyArray[randomgenerator].episode << "to your episode list." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.episode = episodeArray[randomgenerator].bonus;
     else
		   charactership.episode = charactership.episode;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new episode" << episodeArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << episodeArray[randomgenerator].episode << "to your episode list." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.episode= episodeArray[randomgenerator].episode;
     else
         charactership.episode = charactership.episode;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new episode" << episodeArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << episodeArray[randomgenerator].episode << "to your episode list." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.episode = episodeArray[randomgenerator].episode;
     else
           charactership.episode = charactership.episode;
		}
		    
void  initialize endgame;
{
 system("CLS");  //Clear the screen
	cout << "Replied From 5 Star Admiral Stephen\n"
	     << "You are lucky that you got in a escape pod befor your ship was blow up\n"
         << "You have failed to beat The Divine Order Imperial StarShips. You have also\n"
		 << "failed to save the Milky Way Galaxy from the Divine Order."
         <<"What where you thinking going\n"
		 << "into battle so weak (*hint make ship stats higher*)!"
         << "so now you are in the escape pod and have to wate befor you can gat \n"
         << "Mission Over (Game Over)" << endl;  //From 5 star Admiral Stephen 
 system("PAUSE");  //Pause
 system("CLS");  //Clear the screen
  char username[30];
    cout <<"Replied from Captain:\n" << username << "Um...Yeah, I guess, unless\n"
         <<"the programmer doesn't feel lazy and\n"
         <<"adds more to the game.\n," << endl;  //Replied from the Player

 system("PAUSE");  //Pause
 system("CLS");  //Clear the screen
    
    cout <<"     \"Fat chance of that happening, I hardly had the energy to make\n"
    <<"the game the way it is now, screw adding more.\n"" came a voice from\n"
    <<"out of nowhere...\n\n"
    <<"Also Live long and prosper"<< endl;  //Voice from the programmer
    system("PAUSE");  //Pause     	 
 system("CLS");  //Clear the screen
  printf("The End");  //The End
 system("PASUE");  //Pause
	return 0;
};
void initializeBuildings;

void initializeexpansion set;	
struct basegame();
{
	Earth
A Guardian Rises
Restoration
The Dark Within
The Warmind
The Last Array
	Moon

The Dark Beyond
The World's Grave
The Sword of Crota
Chamber of Night
Shrine of Oryx
Venus

A Stranger’s Call
Ishtar Collective
The Archive
Scourge of Winter
Eye of a Gate Lord
Reef

The Awoken
A Key Awaits
Mars

Exclusion Zone
The Buried City
The Garden’s Spire
A Rising Tide
The Black Garden
	};
	struct the dark below();
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
        struct mission[50];  
        struct quest [50];
       

The Dark Below
Fist of Crota—Earth
Siege of the Warmind—Earth
The Wakening—Moon
 };
struct house of wolfs();
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
        struct mission[50];
        struct quest [50];
        
House of Wolves	
A Kell Rising—Venus
The Silent Fang—Earth
The Ruling House—Earth
Wolves' Gambit—Venus
Queen's Ransom—Venus
The Taken King	Edit
The Coming War—Phobos
Cayde's Stash—Earth
 };
struct the taking king();
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
        struct mission[50];
        struct quest [50];
        The Dreadnaught—Dreadnaught
Enemy of My Enemy—Dreadnaught
Lost to Light—Moon
The Promethean Code—Earth
Last Rites—Moon
Regicide—Dreadnaught
 };
struct rise of iron();
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
              
Rise of Iron
King of the Mountain—Earth
The Walls Come Down—Earth
The Plaguelands—Earth
Download Complete—Mars
The Iron Tomb—Earth
};
struct  basegame Destiny 2
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];

Base Game	
Homecoming - Earth
Adieu - EDZ
Spark - EDZ
Combustion - EDZ
Hope - Titan
Riptide - Titan
Utopia - Titan
Looped - Nessus
Six - Nessus
Sacrilege - Io
Fury - Io
Payback - EDZ
Unbroken - EDZ
Larceny - EDZ
1AU - The Almighty
Chosen - Earth
struct Curse of Osiris
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
Curse of Osiris	
The Gateway - Mercury
A Deadly Trial - Earth
Beyond Infinity - Mercury
Deep Storage - Io
Tree of Probabilities - Mercury
Hijacked - Nessus
A Garden World - Mercury
Omega - Mercury
struct Warmind
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
Warmind
Ice and Shadow - Mars
Pilgrimage - Mars
Off-World Recovery - Earth
Strange Terrain - Mars
Will of the Thousands - Mar

struct Forsaken; 
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
Forsaken
Last Call
High Plains Blues
Scorned
The Machinist
Nothing Left to Say
A Hum of Starlight
Corsair Down

struct ascendance();
void initialize new campaign game:  
{void  initialize storymode; 
struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
};
struct atlas gorge();
void initialize new campaign game:  
{ void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
};
struct havoc();
void initialize new campaign game:  
{ void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
        struct mission[50];
        struct quest [50];
 };
struct reckoning();
void initialize new campaign game:  
{void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
};
struct supremacy();
void initialize new campaign game:  
{ void  initialize storymode;
	struct act [1];
        struct seasons[1];
        struct chapters [10];
        struct episodes [10];
        struct stage [12];
  struct mission[50];
              struct quest [50];
 };