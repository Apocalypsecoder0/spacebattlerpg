		void initializeglyphs()
{
  /*glyphs List*/
 strcpy(glyphsArray[0].type, "weapon\n");  //glyphs Type
  strcpy(glyphsArray[0].name, "Photon Torpedoes");  //glyphs Name
    glyphsArray[17].level = 0; 
    glyphsArray[0].bonus = 20;  //glyphs Bonus
 strcpy(glyphsArray[1].type, "Weapon\n");  //glyphs
  strcpy(glyphsArray[1].name, " Ion Cannons");  //glyphs Name
   glyphsArray[17].level = 0; 
   glyphsArray[1].bonus = 30;  //glyphs Bonus
 strcpy(glyphsArray[2].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[2].name, " Forward Disruptors");  //glyphs Name
    glyphsArray[17].level = 0; 
   glyphsArray[2].bonus = 40;  //glyphs Bonus
 strcpy(glyphsArray[3].type, "Shield");  //glyphs Type
  strcpy(glyphsArray[3].name, " Borg Shields");  //glyphs Name
 glyphsArray[17].level = 0; 
      glyphsArray[3].bonus = 20;  //glyphs Bonus
 strcpy(glyphsArray[4].type, "Shield");  //glyphs Type
  strcpy(glyphsArray[4].name, " Ori sheilds");  //glyphs Name
   glyphsArray[17].level = 0; 
   glyphsArray[4].bonus = 30;  //glyphs Bonus
 strcpy(glyphsArray[5].type, "Shield");  //glyphs Type
  strcpy(glyphsArray[5].name, " Cloaking");  //glyphs Name
 glyphsArray[17].level = 0; 
      glyphsArray[5].bonus = 40;  //glyphs  Bonus

 strcpy(glyphsArray[6].type, "Armour");  //glyphs Type
  strcpy(glyphsArray[6].name, " Ablative Armour Type 1");  //glyphs Name
 glyphsArray[17].level = 0; 
      glyphsArray[6].bonus = 10;  //glyphs Bonus
 strcpy(glyphsArray[7].type, "Armour");  //glyphs Type
  strcpy(glyphsArray[7].name, " Ablative Armour Type 2");  //glyphs Name
   glyphsArray[17].level = 0; 
    glyphsArray[7].bonus = 20;  //glyphs Bonus
 strcpy(glyphsArray[8].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[8].name, " Drone Weapon");  //glyphs Name
    glyphsArray[17].level = 0; 
   glyphsArray[8].bonus = 20;  //glyphs Bonus
 strcpy(glyphsArray[9].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[9].name, " Chroniton Torpedoes");  //glyphs Name
   glyphsArray[17].level = 0; 
   glyphsArray[9].bonus = 30;  //glyphs Bonus
 strcpy(glyphsArray[10].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[10].name, " Tricobalt Device");  //glyphs Name
 glyphsArray[17].level = 0; 
      glyphsArray[10].bonus = 40;  //glyphs Bonus

 strcpy(glyphsArray[11].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[11].name, " Isolytic burst");  //glyphs Name
    glyphsArray[17].level = 0; 
   glyphsArray[11].bonus = 40;  //glyphs Bonus
 strcpy(glyphsArray[12].type, " Shield");  //glyphs Type
  strcpy(glyphsArray[12].name, " Pinpoint Barrier");  //glyphs Name
 glyphsArray[17].level = 0; 
      glyphsArray[12].bonus = 10;  //glyphs Bonus
 strcpy(glyphsArray[13].type, "Shield");  //glyphs Type
  strcpy(glyphsArray[13].name, " Point Defense Lasers");  //glyphs Name
   glyphsArray[17].level = 0; 
   glyphsArray[13].bonus = 20;  //glyphs Bonus
 strcpy(glyphsArray[14].type, "Shield");  //glyphs Type
  strcpy(glyphsArray[14].name, " Omni-Directional Barrier");  //glyphs Name
   glyphsArray[17].level = 0; 
   glyphsArray[14].bonus = 30;  //glyphs Bonus
  strcpy(glyphsArray[15].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[15].name, " Particle Weapon");  //glyphs Name
 glyphsArray[17].level = 0; 
      glyphsArray[15].bonus = 20;  //glyphs Bonus

 strcpy(glyphsArray[16].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[16].name, " Proton Beam");  //glyphs Name
   glyphsArray[17].level = 0; 
   glyphsArray[16].bonus =10;  //glyphs Bonus
 strcpy(glyphsArray[17].type, "Weapon");  //glyphs Type
  strcpy(glyphsArray[17].name, " Transphasic Torpedo");  //glyphs Name
    glyphsArray[17].level = 0;  //enchantiments Bonue
   glyphsArray[17].bonus =50;  //glyphs Bonue

/* strcpy(glyphsArray[].type, "Weapon");
  strcpy(glyphsArray[].name, " ");
   glyphsArray[].bonus = ;
strcpy(glyphsArray[].type, "Shield");
  strcpy(glyphsArray[].name, " ");
   glyphsArray[].bonus = 25;
 strcpy(glyphsArray[].type, "Armour");
  strcpy(glyphsArray[].name, " ");
   glyphsArray[].bonus = ;      */
}
}void giveItem(glyph)
{
     /*The glyph Technology Randomgenerator*/
	 int randomgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomgenerator == 0 || randomgenerator == 1 || randomgenerator == 2)
	 {
     cout << "Do you want to get the new glyph" << glyphArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << glyphArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = glyphArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new glyph" << glyphArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << glyphArray[randomgenerator].bonus << "to your SIF." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.shield = glyphArray[randomgenerator].bonus;
     else
			charactership.shield = charactership.shield;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new glyph" << glyphArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << glyphArray[randomgenerator].bonus << "to your SIF." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.armour = glyphArray[randomgenerator].bonus;
		else
			charactership.armour = charactership.weapon;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new glyph" << glyphArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << glyphArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = glyphArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new glyph" << glyphArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << glyphArray[randomgenerator].bonus << "to your Power." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.shield = glyphArray[randomgenerator].bonus;
     else
         charactership.shield = charactership.shield;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new glyph" << glyphArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << glyphArray[randomgenerator].bonus << "to your Power." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.weapon = glyphArray[randomgenerator].bonus;
     else
           charactership.weapon = charactership.weapon;
		}
}