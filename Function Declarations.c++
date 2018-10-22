/* Function Declarations */

using namespace std;
struct enemyships  //The enemyships
//***************************************************************
//                   CLASS USED IN PROJECT
//****************************************************************
class gamedata;
class gamesavedata[5];
class loadsavedata[5];
class playerdata;
class playernamedata;
class enemynamedata;
struct username[30];
struct shipname[30];
----------------------------------


class enemyplayer (struct enemyships)  //The enemyships
{
int power;  //power
	int sif;  //structural integrity field (sif)
	int sp;  //ship points
	int exp;  //exp
	int level;
	int lightlevel; 
	int attackpower;
	int defincepower;
	 int weapon;  //weapons
 int armour;  //armour
 int shield;  //shield;
};
--------------------------
class player (struct player)  //The player
{
 char name[30];
	int power;  //power
	int sif;  //structural integrity field (sif)
	int sp;  //ship points
	int exp;  //exp
	int health;
	int level;
	int lightlevel;
	int attackpower;
	int defincepower;
 int weapon;  //weapons
 int armour;  //armour
 int shield;  //shield

};
-------------------
class Technology //The Technology
struct Technology //The Technology
{
 char name[30];  //Name
 char type[18];  //The Type
 char class[10];
 int level;
 int lightlevel;
int attackpower;
int defincepower;
    int bonus;  //The Bonus
  int weapontype[18];  //weapons
 int armourtype[18];  //armour
 int shieldtype[18];  //shield
};
------------------------------------
class upgrads(Technolog);

{
char name[30]; (struct Technology );//The Technology
{ //Name
 char type[18]; (struct Technology );//The Technology
{ //The Type
 } char class[10];
 int level;
 int lightlevel;
 int bonus; (struct Technology );//The Technology
int attackpower;
int defincepower;
};
struct artifact(ship_artifact);
{
	char name[30]();
		char description[500];  //The description of the artifact
	char type[18]();
	int bonus(); 	
int attackpower;
int defincepower;
	char class[10];
 int level;
 int lightlevel;
	ship_artifact[18];
	    char weapons_artifactname[30];
	    char armor_arifactname[30];
	    char shield_arifactname[30];
	
}
struct enchantment(ship_enchantment);
{
	char name[30]();
		char description[500];  //The description of the artifact
	char type[18]();
	int bonus(); 
	char class[10];
 int attackpower;
int defincepower;
 int level;
 int lightlevel;
	ship_enchantment[18];
	    char weapons_enchantmentname[30];
	    char armor_enchantmentname[30];
	    char shield_enchantmentname[30];
	};
struct glyphs(ship_glyphs);
{
	char name[30]();
		char description[500];  //The description of the artifact
	char type[18]();
	 char class[10];
 int level;
 int lightlevel;
 int bonus();
	int attackpower;
int defincepower;
	ship_glyphs[18];
	    char weapons_glyphsname[30];
	    char armor_glyphsname[30];
	    char shield_glyphsname[30];
	}
	
	  class weapon;  //weapons
     public static readonly string[]shipweapons = {, weaponsNames = {
struct ShipWeapons[]
  struct impact[]();
     struct crit damage[]();
     struct range[]();
     struct stability[]();
     struct speed[]();
     struct aim assist[]();
     struct mag size[]();
{
struct racetype[26];
	player level [40];
light level [335];
items level[335];
equment level[335];
gem level[335];
int attackpower;
int defincepower;
  char name[30];  //Name
 char leveltype[40];  //The Type
 char levelclasstype [40];
 int bonus;  //The Bonus
};
		 		class playerstats;
		struct primary stats ();
        	  int stamina();
		 int strength()
		 int agility();
		 int intellect();
		 int mastery();
		
struct versatility int;
struct bonus armor intl;
struct spirit int;
};

struct player vs player
{
	class attributes int;
struct power int;
struct resilience int; 
};
	
       class secondary stats();
       int crit();
       int haste();
       int dodge();
      int perry();
       int minor mastery();
       
	struct abilitysubclass[]();
{
              class subclass[]();
       		struct stormcaller[]();
       		int spellattack[]();
       		struct voidwalker[]();
       		int spellattack[]();
       		struct sunsinger[]();
       		int spellattack[]();
};
       		class subclass[]();
       		struct striker[]();
       		int spellattack[]();
       		struct defender[]();
       		int spellattack[]();
       	 	struct sunbreaker[]();
       	 	int spellattack[]();
};
       		class subclass[]();
       		struct bladedancer[]();
       		int spellattack[]();
       		struct gunslirger[]();
       		int spellattack[]();
       		struct nightstalker[]();
       		int spellattack[]();
		};
       
class playerhealth;
{  { struct health rating[]( struct healthpoints;);
       struct pain health[]( struct healthpoints;);
       struct low intermediute[]( struct healthpoints;);
       struct intermediute[]( struct healthpoints;);
       struct high intermediute[]( struct healthpoints;);
       struct extreme health[]( struct healthpoints;);
};

class armor;
{ struct armor rating[]( struct armorpoints;);
       struct pain armor[]( struct armorpoints;);
       struct low intermediute[]( struct armorpoints;);
       struct intermediute[]( struct armorpoints;);
       struct high intermediute[]( struct armorpoints;);
       struct extreme armor[]( struct armorpoints;);
};

class shieldspoints;
{ struct shields rating[]( struct shieldspoints;);
       struct pain shields[]( struct shieldspoints;);
       struct low intermediute[]( struct shieldspoints;);
       struct intermediute[]( struct shieldspoints;);
       struct high intermediute[]( struct shieldspoints;);
       struct extreme shields[]( struct shieldspoints;);
};

class Modifier(activities);
 struct Airborne skull icon(); struct Airborne();	//Players deal more damage while in the air.struct Angry skull icon();
	struct Berserk skull icon(); struct Berserk();	//Minions of the Darkness won't flinch, even after massive damage.
struct Arc Burn skull icon(); struct	Arc Burn();	//Arc Damage from any source is greatly increased.
struct Brawler skull icon();  struct Brawler(); 	//Guardian melee damage is greatly increased.
struct Catapult skull icon();	struct Catapult();	//Grenade recharge rate is greatly increased.
struct structChaff skull icon();	struct Chaff();	//Player radar is disabled.
struct Daybreak skull icon(); struct Daybreak(); //Reduces cooldown of all abilities. Epic is inherent.
struct Epic skull icon();	Epic();	//Heavily shielded and highly aggressive enemies appear in great numbers.
struct Exposure skull icon();	struct Exposure();	//Guardian shields are increased but do not replenish.
struct Fresh Troops skull icon();	struct Fresh Troops();	//Some enemy squads have been fortified with additional reinforcements.
struct Grounded skull icon();	struct Grounded();	//Players take more damage while airborne.
struct Heroic skull icon();	struct Heroic();	//Enemies appear in greater numbers and are more aggressive.
struct Juggler skull icon	struct Juggler();	//No ammo drops for your equipped weapon.
struct Ironclad skull icon();	struct Ironclad();	//More enemies have shields.
struct Lightswitch skull icon();	struct Lightswitch();	//Minions of the Darkness deal much more melee damage.
struct Match Game skull icon();	struct Match Game();	//Enemy shields are resistant to all unmatched elemental damage.
struct Nightfall skull icon();	struct Nightfall();	//If all players die, the fireteam will be returned to orbit.
struct Small Arms skull icon();	struct Small Arms();	//Primary Weapon damage is favored.
struct Solar Burn skull icon();	struct Solar Burn();	//Solar Damage from any source is greatly increased.
struct Specialist skull icon();	struct Specialist();	//Secondary Weapon damage is favored.
struct Trickle skull icon();	struct Trickle	//Recharge of abilities is significantly reduced.
struct Void Burn skull icon();	struct Void Burn();	//Void Damage from any source is greatly increased.
	}; 

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
---------------------------------
class space(); struct space();
{
	class muniverse[5]();, class galaxys[300]();, class quadrant[4]();, class sector[5000]();, class sol_system[500]();
	{
		struct muniverse[5]();, struct galaxys[300]();, struct quadrant[4]();, struct sector[5000]();, struct sol_system[500]();
	char description[500];  //The description
 char name[30];  //Name
 
 int forward;  //forward
 int backward;  //backward
 int starboard; //right
 int port;  //left
};
class target score[]();
 {
 	    struct battle_results[]
 	    struct score int;, actions_taken int;, damage_taken;, 
     kills int;, damage done);
}; 
class difficultmode;
{
normal level:(40); and hero level:(40); and hardcore level(40max );
 struct mode class(); easy level:[40]();, normal level:[40]max();, hard level:[40]();, very hard:[40]();, surviver[40]();, expert[40]();,and hero level:[40]();, and hardcore level(40max ); impossible[40]();,ultra nightmare[40]();, legacy[40];, prestige[15];

};
	story modes difficult();
/*story modes difficult modes set(story modes difficult );
        1- easy();, 2- normal();, 3- hard();, 4- very hard();   ,
       5- expert();, 6- survivor();, 7- impossible();, 8 - Ultra Nightmare();
  9- legacy(); 0- prestige();
    
     /*   Act (1);, (2);, (3);, (4);, (5);
     story mode
        */
	}void initializeprimary attributes;
void initializeseconday attributes;
void initializeminor attributes;
void initializeupgrades(technology);
void initializeartifact;
void initializeglyphs;
void initializeenchantment;
void initializestorymode;
void initializedifficultmode;
void initialize act;
void initialize chapter;
void initialize episodes;
void initialize mission;
void initialize quest;
void initializespace();  //To Initialize space  
void initializecombat();
void initializeBattle();  //To Initialize Battle  
void initializeTechnology();  //To Initialize Technology   
void initializePlayer();,  void initialzeplayerdata; //To Initialize Player  
void initializeEnemyships();  //To Initialize Enemyship  
void gaveequment();
void giveItem();  //To give item

void inventory(); 
int nonerandomNumber(int);
int randomNumber(int);  //random numer
 space spaceArray[17];  //Space Array
 Technology TechnologyArray[17];  //Technology Array
 upgrade upgradeArray[17];
 player charactership;  //Charactership
 enemyships enemyshipsArray[17];  //Enemyships Array

 //***************************************************************
//                   GLOBAL FILE USED IN PROJECT
//**************************************************************** 
-------------------------------------
void initializeinstallgamedata;
void initalizesavegamedata;
void initializeloadgamedata;
void initializeArtifact();
void initializeGlyps(); 
void initializeenchantment();
void initializeTargetscore();
void initializedifficuitmode();
void initializecampaigngame;
void initializespace();  //To Initialize space
void initializeBattle();  //To Initialize Battle
void initializeTechnology();  //To Initialize Technology
void initializePlayer();  //To Initialize Player
void initializeenemyplayer();
void initialize
void initializeEnemyships();  //To Initialize Enemyship
void giveItem();  //To give item
int randomNumber(int);  //random numer
 space spaceArray[17];  //Space Array
 Technology TechnologyArray[17];  //Technology Array
 player charactership;  //Charactership
 enemyships enemyshipsArray[17];  //Enemyships Array