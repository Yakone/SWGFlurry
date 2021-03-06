juvenile_canyon_krayt_dragon_elder = Creature:new {
   objectName = "@mob/creature_names:",
   customName = "juvenile canyon krayt dragon elder",
  	socialGroup = "krayt",
 	faction = "",
 	level = 122,
 	chanceHit = 4.0,
 	damageMin = 745,
 	damageMax = 1200,
 	baseXp = 115770,
 	baseHAM = 54000,
 	baseHAMmax = 64000,
 	armor = 2,
 	resists = {70,70,70,70,70,70,70,70,20},
 	meatType = "meat_carnivore",
 	meatAmount = 750,
 	hideType = "hide_bristley",
 	hideAmount = 500,
 	boneType = "bone_mammal",
 	boneAmount = 410,
 	milk = 0,
 	tamingChance = 0,
 	ferocity = 20,
	pvpBitmask = AGGRESSIVE + ATTACKABLE + ENEMY,
	creatureBitmask = PACK + KILLER + STALKER,
 	optionsBitmask = AIENABLED,
 	diet = CARNIVORE,
 
 	templates = {"object/mobile/juvenile_canyon_krayt.iff"},
 	scale = 0.55;
 
 	lootGroups = {
 		{
 	        groups = {
 					{group = "krayt_tissue_common", chance = 2000000},
 					{group = "krayt_dragon_common", chance = 2000000},
 					{group = "pearls_premium", chance = 4000000},
 					{group = "clothing_attachments", chance = 2000000},
 			},
 			lootChance = 10000000
 		}
 	},
 	weapons = {},
 	conversationTemplate = "",
 	attacks = {
 		{"posturedownattack",""},
 		{"creatureareaattack",""}
 	}
 }
  CreatureTemplates:addCreatureTemplate(juvenile_canyon_krayt_dragon_elder, "juvenile_canyon_krayt_dragon_elder")
