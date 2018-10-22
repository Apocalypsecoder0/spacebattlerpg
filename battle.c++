   /*Battle Generator*/
 int attackpower = 0;  //attackpower
 int defencepower = 0;  //defencepower
 int enemyshipsattack = 0;  //enemyshipsattack
 int enemyshipsdefence = 0;  //enemyshipsattack
 int randomenemyships = 0;  //randomenemyships
	srand(static_cast<unsigned>(time(0)));
	randomenemyships = (rand()%16 + 1);
	cout << "  "<< enemyshipsArray[randomenemyships].name << "Appears. \n" << endl;  //Name of Enemyship that appears
    cout << enemyshipsArray[randomenemyships].name << "has" << enemyshipsArray[randomenemyships].power << "Power" << endl  //Shows Enemyship Power
		 << enemyshipsArray[randomenemyships].name << "has" << enemyshipsArray[randomenemyships].sif << "SIF" << endl  //Shows Enemyship SIF
		 << enemyshipsArray[randomenemyships].name << "has" << enemyshipsArray[randomenemyships].sp << "SP \n" << endl;  //Show Enemyship SP
	do
	{
	  attackpower = (charactership.power + charactership.weapon) * (rand()%10 + 1);
	  cout << charactership.name << " deals " << attackpower << " damage" << endl;
	  enemyshipsdefence = (enemyshipsArray[randomenemyships].sif * (rand()%5+1));
	  cout << enemyshipsArray[randomenemyships].name << " defends " << enemyshipsdefence << "Ship Points" << endl;
	  if (attackpower > enemyshipsdefence)
		 {
			 enemyshipsArray[randomenemyships].sp = enemyshipsArray[randomenemyships].sp - (attackpower - enemyshipsdefence);
			 cout << "The enemyship now has " << enemyshipsArray[randomenemyships].sp << "Ship points!" << endl;
		 }
	  else
		 {
			 enemyshipsArray[randomenemyships].sp = enemyshipsArray[randomenemyships].sp;
			 cout << "You have failed to damage the enemy ship!\n" << endl;
		 }
	  enemyshipsattack = (enemyshipsArray[randomenemyships].power * (rand()%5+1));
	  cout << enemyshipsArray[randomenemyships].name << " does " << enemyshipsattack << "Damage!" << endl;
      defencepower = (charactership.sif + charactership.shield) * (rand()%5 + 1);
	  cout << charactership.name << " defends " << defencepower << "Ship Points!" << endl;
	  if (enemyshipsattack > defencepower)
		 {
			 charactership.sp = charactership.sp - (enemyshipsattack - defencepower);
			 cout << "You have been hit! You now have " << charactership.sp << "Ship Points! \n" << endl;
		 }
	  else
		 {
			 charactership.sp = charactership.sp;
			 cout << "You have defended the enemy ship attack! \n ...And now have " << charactership.sp << "Ship points! \n" << endl;
		 }
	}while (enemyshipsArray[randomenemyships].sp > 0);
}