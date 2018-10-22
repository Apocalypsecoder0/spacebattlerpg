
void giveItem()
{
     /*The Technology Randomgenerator*/
	 int randomgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomgenerator == 0 || randomgenerator == 1 || randomgenerator == 2)
	 {
     cout << "Do you want to get the new Technology" << TechnologyArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << TechnologyArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = TechnologyArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new Technology" << TechnologyArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << TechnologyArray[randomgenerator].bonus << "to your SIF." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.shield = TechnologyArray[randomgenerator].bonus;
     else
			charactership.shield = charactership.shield;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new Technology" << TechnologyArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << TechnologyArray[randomgenerator].bonus << "to your SIF." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.armour = TechnologyArray[randomgenerator].bonus;
		else
			charactership.armour = charactership.weapon;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new Technology" << TechnologyArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << TechnologyArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = TechnologyArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new Technology" << TechnologyArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << TechnologyArray[randomgenerator].bonus << "to your Power." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.shield = TechnologyArray[randomgenerator].bonus;
     else
         charactership.shield = charactership.shield;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new Technology" << TechnologyArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << TechnologyArray[randomgenerator].bonus << "to your Power." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.weapon = TechnologyArray[randomgenerator].bonus;
     else
           charactership.weapon = charactership.weapon;
		}
}