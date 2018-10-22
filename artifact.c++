
  /*artifact List*/
 strcpy(artifactArray[0].type, "weapon\n");  //artifact Type
  strcpy(artifactArray[0].name, "Photon Torpedoes");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[0].bonus = 20;  //artifact Bonus
 strcpy(artifactArray[1].type, "Weapon\n");  //artifact
  strcpy(artifactArray[1].name, " Ion Cannons");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[1].bonus = 30;  //artifact Bonus
 strcpy(artifactArray[2].type, "Weapon");  //artifact Type
  strcpy(artifactArray[2].name, " Forward Disruptors");  //artifact Name
    artifactArray[0].level = 0;
   artifactArray[2].bonus = 40;  //artifact Bonus
 strcpy(artifactArray[3].type, "Shield");  //artifact Type
  strcpy(artifactArray[3].name, " Borg Shields");  //artifact Name
    artifactArray[0].level = 0;
   artifactArray[3].bonus = 20;  //artifact Bonus
 strcpy(artifactArray[4].type, "Shield");  //artifact Type
  strcpy(artifactArray[4].name, " Ori sheilds");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[4].bonus = 30;  //artifact Bonus
 strcpy(artifactArray[5].type, "Shield");  //artifact Type
  strcpy(artifactArray[5].name, " Cloaking");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[5].bonus = 40;  //artifact  Bonus

 strcpy(artifactArray[6].type, "Armour");  //artifact Type
  strcpy(artifactArray[6].name, " Ablative Armour Type 1");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[6].bonus = 10;  //artifact Bonus
 strcpy(artifactArray[7].type, "Armour");  //artifact Type
  strcpy(artifactArray[7].name, " Ablative Armour Type 2");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[7].bonus = 20;  //artifact Bonus
 strcpy(artifactArray[8].type, "Weapon");  //artifact Type
  strcpy(artifactArray[8].name, " Drone Weapon");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[8].bonus = 20;  //artifact Bonus
 strcpy(artifactArray[9].type, "Weapon");  //artifact Type
  strcpy(artifactArray[9].name, " Chroniton Torpedoes");  //artifact Name
  artifactArray[0].level = 0;
     artifactArray[9].bonus = 30;  //artifact Bonus
 strcpy(artifactArray[10].type, "Weapon");  //artifact Type
  strcpy(artifactArray[10].name, " Tricobalt Device");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[10].bonus = 40;  //artifact Bonus

 strcpy(artifactArray[11].type, "Weapon");  //artifact Type
  strcpy(artifactArray[11].name, " Isolytic burst");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[11].bonus = 40;  //artifact Bonus
 strcpy(artifactArray[12].type, " Shield");  //artifact Type
  strcpy(artifactArray[12].name, " Pinpoint Barrier");  //artifact Name
   artifactArray[12].bonus = 10;  //artifact Bonus
 strcpy(artifactArray[13].type, "Shield");  //artifact Type
  strcpy(artifactArray[13].name, " Point Defense Lasers");  //artifact Name
 artifactArray[0].level = 0;
      artifactArray[13].bonus = 20;  //artifact Bonus
 strcpy(artifactArray[14].type, "Shield");  //artifact Type
  strcpy(artifactArray[14].name, " Omni-Directional Barrier");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[14].bonus = 30;  //artifact Bonus
 strcpy(artifactArray[15].type, "Weapon");  //artifact Type
  strcpy(artifactArray[15].name, " Particle Weapon");  //artifact Name
 artifactArray[0].level = 0;
      artifactArray[15].bonus = 20;  //artifact Bonus

 strcpy(artifactArray[16].type, "Weapon");  //artifact Type
  strcpy(artifactArray[16].name, " Proton Beam");  //artifact Name
   artifactArray[0].level = 0;
   artifactArray[16].bonus =10;  //artifact Bonus
 strcpy(artifactArray[17].type, "Weapon");  //artifact Type
  strcpy(artifactArray[17].name, " Transphasic Torpedo");  //artifact Name
  artifactArray[0].level = 0;
   artifactArray[17].bonus =50;  //artifact Bonue

/* strcpy(artifactArray[].type, "Weapon");
  strcpy(artifactArray[].name, " ");
   artifactArray[].bonus = ;
strcpy(artifactArray[].type, "Shield");
  strcpy(artifactArray[].name, " ");
   artifactArray[].bonus = 25;
 strcpy(artifactArray[].type, "Armour");
  strcpy(artifactArray[].name, " ");
   artifactArray[].bonus = ;      */
}
void giveItem(artifact)
{
     /*The artifact Technology Randomgenerator*/
	 int randomgenerator = 0;
	 srand(static_cast<unsigned>(time(0)));
	 randomgenerator = (rand()%17 + 1);
	 char playerchoice;
	 if (randomgenerator == 0 || randomgenerator == 1 || randomgenerator == 2)
	 {
     cout << "Do you want to get the new artifact" << artifactArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << artifactArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
     if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = artifactArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
	   }
	 else if (randomgenerator == 3 || randomgenerator == 4 || randomgenerator == 5)
	 {
     cout << "Do you want to get the new artifact" << artifactArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << arifactArray[randomgenerator].bonus << "to your SIF." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
     playerchoice = toupper(playerchoice);
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.shield = artifcatArray[randomgenerator].bonus;
     else			charactership.shield = charactership.shield;
		}
	 else if (randomgenerator == 6 || randomgenerator == 7 || randomgenerator == 8)
	 {
		cout << "Do you want to get the new artifact" << artifactArray[randomgenerator].name << " ?" << endl;
		cout << "This will add " << artifactArray[randomgenerator].bonus << "to your SIF." << endl;
		cout << "Yes or No." << endl;
		cin >> playerchoice;
		playerchoice = toupper(playerchoice);
        if (playerchoice == 'Y')  //Player hit Y to gat the Technology
		   charactership.armour = artifactArray[randomgenerator].bonus;
		else
			charactership.armour = charactership.weapon;
        }
	 else if (randomgenerator == 9 || randomgenerator == 10 || randomgenerator == 11)
	 {
     cout << "Do you want to get the new artifact " << artifactArray[randomgenerator].name << " ?" << endl;
   	 cout << "This will add " << artifactyArray[randomgenerator].bonus << "to your Power." << endl;
 	 cout << "Yes or No." << endl;
 	 cin >> playerchoice;
 	 playerchoice = toupper(playerchoice);
 if (playerchoice == 'Y')  //Player hit Y to gat the Technology
	 	   charactership.weapon = artifactArray[randomgenerator].bonus;
     else
		   charactership.weapon = charactership.weapon;
      }
     else if (randomgenerator == 12 || randomgenerator == 13 || randomgenerator == 14)
     {
     cout << "Do you want to get the new artifact" << artifactArray[randomgenerator].name << " ?" << endl;
     cout << "This will add " << artifactArray[randomgenerator].bonus << "to your Power." << endl;
     cout << "Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.shield = artifactArray[randomgenerator].bonus;
     else
         charactership.shield = charactership.shield;
      }
     if (randomgenerator == 15 || randomgenerator ==16 || randomgenerator ==17)
     {
     cout << "Do you want to get the new artifact" << artifactArray[randomgenerator].name << " ?" << endl;
     cout << "This will add" << artifactArray[randomgenerator].bonus << "to your Power." << endl;
     cout <<"Yes or No." << endl;
     cin >> playerchoice;
  if (playerchoice == 'Y')  //Player hit Y to gat the Technology
           charactership.weapon = artifactArray[randomgenerator].bonus;
     else
           charactership.weapon = charactership.weapon;
		}
}