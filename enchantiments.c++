}void initializeenchantiments()
{
  /*enchantiments List*/
 strcpy(enchantimentsArray[0].type, "weapon\n");  //enchantiments Type
  strcpy(enchantimentsArray[0].name, "Photon Torpedoes");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[0].bonus = 20;  //enchantiments Bonus
 strcpy(enchantimentsArray[1].type, "Weapon\n");  //enchantiments
  strcpy(enchantimentsArray[1].name, " Ion Cannons");  //enchantiments Name
     enchantimentsArray[17].level = 0;  //enchantiments Bonue
     enchantimentsArray[1].bonus = 30;  //enchantiments Bonus
 strcpy(enchantimentsArray[2].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[2].name, " Forward Disruptors");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[2].bonus = 40;  //enchantiments Bonus
 strcpy(enchantimentsArray[3].type, "Shield");  //enchantiments Type
  strcpy(enchantimentsArray[3].name, " Borg Shields");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[3].bonus = 20;  //enchantiments Bonus
 strcpy(enchantimentsArray[4].type, "Shield");  //enchantiments Type
  strcpy(enchantimentsArray[4].name, " Ori sheilds");  //enchantiments Name
   enchantimentsArray[17].level = 0;  //enchantiments Bonue
     enchantimentsArray[4].bonus = 30;  //enchantiments Bonus
 strcpy(enchantimentsArray[5].type, "Shield");  //enchantiments Type
  strcpy(enchantimentsArray[5].name, " Cloaking");  //enchantiments Name
  enchantimentsArray[17].level = 0;  //enchantiments Bonue
      enchantimentsArray[5].bonus = 40;  //enchantiments  Bonus

 strcpy(enchantimentsArray[6].type, "Armour");  //enchantiments Type
  strcpy(enchantimentsArray[6].name, " Ablative Armour Type 1");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[6].bonus = 10;  //enchantiments Bonus
 strcpy(enchantimentsArray[7].type, "Armour");  //enchantiments Type
  strcpy(enchantimentsArray[7].name, " Ablative Armour Type 2");  //enchantiments Name
  enchantimentsArray[17].level = 0;  //enchantiments Bonue
      enchantimentsArray[7].bonus = 20;  //enchantiments Bonus
 strcpy(enchantimentsArray[8].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[8].name, " Drone Weapon");  //enchantiments Name
  enchantimentsArray[17].level = 0;  //enchantiments Bonue
      enchantimentsArray[8].bonus = 20;  //enchantiments Bonus
 strcpy(enchantimentsArray[9].type, "Weapon");  //enchantiments Type
   enchantimentsArray[17].level = 0;  //enchantiments Bonue
  strcpy(enchantimentsArray[9].name, " Chroniton Torpedoes");  //enchantiments Name
   enchantimentsArray[9].bonus = 30;  //enchantiments Bonus
 strcpy(enchantimentsArray[10].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[10].name, " Tricobalt Device");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[10].bonus = 40;  //enchantiments Bonus

 strcpy(enchantimentsArray[11].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[11].name, " Isolytic burst");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[11].bonus = 40;  //enchantiments Bonus
 strcpy(enchantimentsArray[12].type, " Shield");  //enchantiments Type
  strcpy(enchantimentsArray[12].name, " Pinpoint Barrier");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[12].bonus = 10;  //enchantiments Bonus
 strcpy(enchantimentsArray[13].type, "Shield");  //enchantiments Type
  strcpy(enchantimentsArray[13].name, " Point Defense Lasers");  //enchantiments Name
    enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[13].bonus = 20;  //enchantiments Bonus
 strcpy(enchantimentsArray[14].type, "Shield");  //enchantiments Type
  strcpy(enchantimentsArray[14].name, " Omni-Directional Barrier");  //enchantiments Name
  enchantimentsArray[17].level = 0;  //enchantiments Bonue
      enchantimentsArray[14].bonus = 30;  //enchantiments Bonus
 strcpy(enchantimentsArray[15].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[15].name, " Particle Weapon");  //enchantiments Name
  enchantimentsArray[17].level = 0;  //enchantiments Bonue
      enchantimentsArray[15].bonus = 20;  //enchantiments Bonus

 strcpy(enchantimentsArray[16].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[16].name, " Proton Beam");  //enchantiments Name
    enchantimentsArray[16].level = 0;  //enchantiments Bonue
   enchantimentsArray[16].bonus =10;  //enchantiments Bonus
 strcpy(enchantimentsArray[17].type, "Weapon");  //enchantiments Type
  strcpy(enchantimentsArray[17].name, " Transphasic Torpedo");  //enchantiments Name
  enchantimentsArray[17].level = 0;  //enchantiments Bonue
   enchantimentsArray[17].bonus =50;  //enchantiments Bonue

/* strcpy(enchantimentsArray[].type, "Weapon");
  strcpy(enchantimentsArray[].name, " ");
   enchantimentsArray[].bonus = ;
strcpy(enchantimentsArray[].type, "Shield");
  strcpy(enchantimentsArray[].name, " ");
   enchantimentsArray[].bonus = 25;
 strcpy(enchantimentsArray[].type, "Armour");
  strcpy(enchantimentsArray[].name, " ");
   enchantimentsArray[].bonus = ;      */
}
void giveItem(enchantment)
{
     /*The enchantment Technology Randomgenerator*/
	 int randomgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomgenerator == 0 || randomgenerator == 1 || randomgenerator == 2)
	 {
     cout << "Do you want to get the new enchantment" << enchantmentArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << enchantmentArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = enchantmentArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new enchantment " << enchantmentArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << enchantmentArray[randomgenerator].bonus << "to your SIF." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.shield = enchantmentArray[randomgenerator].bonus;
     else
			charactership.shield = charactership.shield;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new enchantment" << enchamentArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << enchantmentArray[randomgenerator].bonus << "to your SIF." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.armour = enchantmentArray[randomgenerator].bonus;
		else
			charactership.armour = charactership.weapon;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new enchantment" << enchantmentArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << enchantmentArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = enchntmentArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new enchantment" << enchantmentyArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << enchantmentArray[randomgenerator].bonus << "to your Power." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.shield = enchantmentArray[randomgenerator].bonus;
     else
         charactership.shield = charactership.shield;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new enchantment" << enchantmentArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << enchantmentArray[randomgenerator].bonus << "to your Power." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.weapon = enchantmentArray[randomgenerator].bonus;
     else
           charactership.weapon = charactership.weapon;
		}void initializeartifact()
{