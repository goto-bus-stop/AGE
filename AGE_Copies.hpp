#pragma once
#include "Common.h"

class GraphicCopies
{
	public:

	int16_t IconID;
	pair<int16_t, int16_t> StandingGraphic;
	int16_t DyingGraphic;
	int16_t UndeadGraphic;
	uint8_t DamageGraphicCount;
	vector<genie::unit::DamageGraphic> DamageGraphics;

	int16_t ConstructionGraphicID;
	int16_t SnowGraphicID;
	int32_t GarrisonGraphic;
	int32_t SpecialGraphic;
	int16_t AttackGraphic;
	int16_t WalkingGraphic;
	int16_t RunningGraphic;

	GraphicCopies()
	{
		IconID = -1;
		StandingGraphic.first = -1;
		StandingGraphic.second = -1;
		DyingGraphic = -1;
		UndeadGraphic = -1;
		DamageGraphicCount = 0;
		ConstructionGraphicID = -1;
		SnowGraphicID = -1;
		GarrisonGraphic = -1;
		SpecialGraphic = -1;
		AttackGraphic = -1;
		WalkingGraphic = -1;
		RunningGraphic = -1;
	}
	~GraphicCopies(){}
};

class AdvCopies // Used to copy units with various settings.
{
	public:

	// AllCivs is used as follows
	// 0x01 = normal copy
	// 0x02 = special copy
	// 0x04 = 
	// 0x08 = from AoE 1
	// 0x10 = damage graphics
	// 0x20 = attacks
	// 0x40 = armors
	// 0x80 = commands
	int8_t AllCivs;
	vector<vector<bool>> UnitExists;
	vector<vector<genie::Unit>> UnitCopies;
	vector<vector<GraphicCopies>> UnitGraphics;
	vector<short> UnitDamageGraphicExists;
	vector<vector<genie::unit::DamageGraphic>> UnitDamageGraphics;
	vector<short> UnitAttackExists;
	vector<vector<genie::unit::AttackOrArmor>> UnitAttacks;
	vector<short> UnitArmorExists;
	vector<vector<genie::unit::AttackOrArmor>> UnitArmors;
	vector<short> UnitCommandExists;
	vector<vector<genie::Task>> UnitCommands;

	AdvCopies()
	{
		UnitCopies.resize(1); // Civs
		UnitGraphics.resize(1); // Civs
		UnitDamageGraphics.resize(1); // Civs
		UnitAttacks.resize(1); // Civs
		UnitArmors.resize(1); // Civs
		UnitCommands.resize(1); // Civs
		UnitGraphics[0].resize(1);
	}
	~AdvCopies(){}
};

class Copies
{
	public:

	Copies(){}
	~Copies(){}
	
	vector<genie::Tech> Tech;
	vector<genie::Effect> Effect;
	vector<genie::EffectCommand> EffectCmd;
	vector<genie::TechTreeAge> TTAge;
	vector<long> TTAgeBuild;
	vector<long> TTAgeUnit;
	vector<long> TTAgeRes;
	vector<long> TTMode;
	vector<long> TTItem;
	vector<char> TTUnknown4;
	vector<char> TTUnknown5;
	vector<genie::BuildingConnection> TTBuildCon;
	vector<long> TTBuildBuild;
	vector<long> TTBuildUnit;
	vector<long> TTBuildRes;
	vector<genie::UnitConnection> TTUnitCon;
	vector<long> TTUnitUnit;
	vector<genie::ResearchConnection> TTResCon;
	vector<long> TTResBuild;
	vector<long> TTResUnit;
	vector<long> TTResRes;
	vector<genie::Civ> Civ;
	vector<float> Resource;
	AdvCopies Dat; // Advanced unit copying.
	vector<genie::UnitHeader> UnitHeader;
	vector<genie::UnitLine> UnitLine;
	vector<int16_t> UnitLineUnit;
	vector<genie::Graphic> Graphic;
	vector<uint32_t> GraphicPointer, TRptr1, TRptr2;
	vector<genie::GraphicDelta> GraphicDelta;
	vector<genie::Terrain> Terrain;
	vector<short> TerBorder;
	vector<genie::TerrainRestriction> TerrainRestriction;
	vector<float> TerrainRestrictionSubAccess;
	vector<genie::TerrainPassGraphic> TerrainRestrictionSubGraphics;
	vector<genie::Sound> Sound;
	vector<genie::SoundItem> SoundItem;
	vector<genie::PlayerColour> PlayerColor;
	vector<genie::TerrainBorder> TerrainBorder;
	vector<vector<genie::FrameData>> BorderBorder;
	vector<genie::FrameData> FrameData;
	vector<genie::MapInfo> Map;
	vector<genie::MapLand> MapLand;
	vector<genie::MapTerrain> MapTerrain;
	vector<genie::MapUnit> MapUnit;
	vector<genie::MapElevation> MapElevation;
};
