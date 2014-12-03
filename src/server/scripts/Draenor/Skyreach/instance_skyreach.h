#ifndef SKYREACH_INSTANCE_H
# define SKYREACH_INSTANCE_H

#include "ScriptPCH.h"
#include "ScriptMgr.h"

namespace MS
{
    namespace InstanceSkyreach
    {
        enum RandomSpells
        {
            INSTANCE_BOOTSTRAPPER = 171344,
            DRAENOR_SCALING_AURA = 156832,
            FORGETFUL = 152828,
            SABOTEUR = 152983,
            STEALTH_AND_INVISIBILITY_DETECTION = 141048,
            MOD_SCALE_70_130 = 151051,
            DORMANT = 160641,
            SUMMON_INTRO_DREAD_RAVEN = 163831,
            RIDE_VEHICLE_HARDCODED = 46598,
            CLOACK = 165848,
            INTRO_NARRATOR = 163922,
            TWISTER_DNT = 178617,
            CONJURE_SUN_ORB_DNT = 178618,
            WIELD_CHAKRAMS = 173168,
            WIELD_CHAKRAMS_2 = 170378,
            ENERGIZE_GLOWY_ORBS_COVER_DNT = 178324, // Visual to do when closed to sun orbs.
            ENERGIZE_GLOWY_ORBS_DNT_1 = 178321,
            ENERGIZE_GLOWY_ORBS_DNT_2 = 178330,
            EJECT_ALL_PASSENGERS = 50630,
            SERENE = 153716,
            OVERSEER_1 = 153195,
            OVERSEER_2 = 154368,
            EJECT_PASSENGER_1 = 60603,
            JUMP_TO_JUMP_POINT = 163828,
            // Skyreach Taln mobs.
            FIXATED = 152838,
            // Skyreach raven whisperer
            EXCITE = 153923,
            SUBMERGED = 154163,
            SUBMERGE = 154164,
            ENERGIZE = 154139, // During 12 seconds, restart after 3 seconds.
            ENERGIZE_HEAL = 154149,
            ENERGIZE_DMG = 154150,
            ENERGIZE_VISUAL_1 = 154179,
            ENERGIZE_VISUAL_2 = 154159,
            ENERGIZE_VISUAL_3 = 154177,
            DespawnAreaTriggers = 115905,
            Wind = 170818,
        };

        enum GameObjectEntries
        {
            DOOR_RANJIT_ENTRANCE        = 234311,
            DOOR_RANJIT_EXIT            = 234310,
            DOOR_ARAKNATH_ENTRANCE_1    = 234314,
            DOOR_ARAKNATH_ENTRANCE_2    = 234315,
            DOOR_ARAKNATH_EXIT_1        = 234312,
            DOOR_ARAKNATH_EXIT_2        = 234313,
            CACHE_OF_ARAKKOAN_TREASURES = 234164,
            DOOR_RUKHRAN_EXIT           = 234316,
            DOOR_RUKHRAN_ENTRANCE       = 229038,
        };

        enum BossEntries
        {
            RANJIT = 86238,
            ARAKNATH = 76141,
            RUKHRAN = 76143,
        };

        enum MobEntries
        {
            SKYREACH_ARCANALOGIST = 76376,
            SKYREACH_SOLAR_CONSTRUCTOR = 76142,
            YoungKaliri = 76121,
            SKYREACH_RAVEN_WHISPERER = 76154,
            SOLAR_FLARE = 76227,
            PILE_OF_ASHES = 79505,
            ArakkoaPincerBirdsController = 76119,
            AirFamiliar = 76102,
            Kaliri = 81080,
            Kaliri2 = 81081,
            SunConstructEnergizer = 76367,
            InteriorFocus = 77543,
            DreadRavenHatchling = 76253,
            RadiantSupernova = 79463,
            GrandDefenseConstruct = 76145,
        };

        enum Data
        {
            Ranjit,
            Araknath,
            Rukhran,
            SkyreachArcanologist,
            SkyreachArcanologistIsDead,
            SkyreachArcanologistReset,
            AraknathSolarConstructorActivation,
            SkyreachRavenWhispererIsDead,
            SolarFlareDying,
        };

        static const Position k_WindMazeVertices[47] =
        {
            // First block.
            { 960.317f, 1908.073f, 214.26f }, // 0
            { 966.476f, 1895.317f, 214.22f }, // 1
            { 987.374f, 1907.791f, 227.44f }, // 2
            { 983.995f, 1916.117f, 227.41f }, // 3
            // Outter blocks.
            { 985.987f, 1911.893f, 227.42f }, // 4
            { 992.518f, 1915.296f, 227.20f }, // 5
            { 990.793f, 1922.001f, 227.20f }, // 6
            { 983.325f, 1921.477f, 227.00f }, // 7
            { 984.141f, 1930.645f, 227.00f }, // 8
            { 990.884f, 1929.064f, 227.19f }, // 9
            { 994.265f, 1935.345f, 227.19f }, // 10
            { 988.326f, 1939.565f, 227.02f }, // 11
            { 994.889f, 1946.283f, 226.02f }, // 12
            { 999.162f, 1940.225f, 227.20f }, // 13
            { 1005.42f, 1943.453f, 227.20f }, // 14
            { 1003.62f, 1950.048f, 227.02f }, // 15
            { 1012.96f, 1951.050f, 227.02f }, // 16
            { 1012.40f, 1943.687f, 227.20f }, // 17
            { 1019.37f, 1942.288f, 227.20f }, // 18
            { 1022.14f, 1948.483f, 227.02f }, // 19
            { 1030.02f, 1943.140f, 227.02f }, // 20
            { 1024.85f, 1938.118f, 227.20f }, // 21
            { 1029.00f, 1932.593f, 227.20f }, // 22
            { 1035.65f, 1935.282f, 227.02f }, // 23
            { 1037.91f, 1926.141f, 227.05f }, // 24
            { 1031.32f, 1924.956f, 227.20f }, // 25
            // Block 12.
            { 1027.66f, 1902.383f, 227.02f }, // 26
            { 1017.76f, 1922.387f, 227.20f }, // 27
            // Inner blocks.
            { 1016.55f, 1926.015f, 227.20f }, // 28
            { 1015.02f, 1927.856f, 227.20f }, // 29
            { 1013.21f, 1929.708f, 227.20f }, // 30
            { 1011.01f, 1930.131f, 227.20f }, // 31
            { 1008.61f, 1930.897f, 227.20f }, // 32
            { 1005.88f, 1930.590f, 227.20f }, // 33
            { 1003.13f, 1929.200f, 227.20f }, // 34
            { 1001.03f, 1926.166f, 227.20f }, // 35
            { 1000.16f, 1922.862f, 227.20f }, // 36
            { 1001.35f, 1918.540f, 227.20f }, // 37
            { 1003.97f, 1914.781f, 227.20f }, // 38
            { 999.218f, 1910.402f, 227.20f }, // 39
            { 992.179f, 1903.852f, 227.02f }, // 40
            { 998.109f, 1900.641f, 227.20f }, // 41
            { 1009.28f, 1898.183f, 227.20f }, // 42
            // Second stair block.
            { 1002.08f, 1873.109f, 240.71f }, // 43
            { 991.710f, 1873.664f, 240.71f }, // 44
            // Convex vertices.
            { 1209.13f, 1924.793f, 229.83f }, // 45
            { 1000.53f, 1968.087f, 227.00f }, // 46
        };

        enum Blocks
        {
            FirstStair = 0,
            OuttersBegin = 1,
            OuttersEnd = 10,
            Intermediate = 11,
            InnersBegin = 12,
            InnersEnd = 23,
            Center = 24,
            SecondStair = 25,
            ConvexHull = 26,
        };

        // Clockwise ordered.
        static const std::vector<uint32> k_WindMazeIndices[27] =
        {
            // First stair.
            { 3, 2, 1, 0 },     // 1
            // Outter blocks.
            { 6, 5, 4, 7 },     // 2
            { 9, 6, 7, 8 },     // 3
            { 10, 9, 8, 11 },   // 4
            { 13, 10, 11, 12 }, // 5
            { 14, 13, 12, 15 }, // 6
            { 17, 14, 15, 16 }, // 7
            { 18, 17, 16, 19 }, // 8
            { 21, 18, 19, 20 }, // 9
            { 22, 21, 20, 23 }, // 10
            { 25, 22, 23, 24 }, // 11
            // Intermediate triangle block.
            { 27, 24, 26},      // 12
            // Inner blocks.
            { 22, 25, 27, 28 }, // 13
            { 21, 22, 28, 29 }, // 14
            { 18, 21, 29, 30 }, // 15
            { 17, 18, 30, 31 }, // 16
            { 14, 17, 31, 32 }, // 17
            { 13, 14, 32, 33 }, // 18
            { 10, 13, 33, 34 }, // 19
            { 9, 10, 34, 35 },  // 20
            { 6, 9, 35, 36 },   // 21
            { 5, 6, 36, 37 },   // 22
            { 39, 5, 37, 38 },   // 23
            { 41, 40, 38, 42 },  // 24
            // Center block.
            { 42, 38, 37, 36, 35, 34, 33, 32, 31, 30, 29, 28, 27, 26}, // 25
            // Second stair.
            { 43, 44, 41, 42 },  // 26
            // Convex hull.
            { 0, 46, 45, 43, 44, 1 } // 27
        };

        static Position CalculateForceVectorFromBlockId(uint32 p_BlockId, float& p_Magnitude)
        {
            assert(p_BlockId != Blocks::ConvexHull);

            Position l_ForceDir;
            p_Magnitude = 3;
            // Special case because of a lot of vertices.
            if (Blocks::Center == p_BlockId)
            {
                l_ForceDir = k_WindMazeVertices[26] - k_WindMazeVertices[38];
                l_ForceDir.m_positionZ = 0;
                normalizeXY(l_ForceDir);
                p_Magnitude = 11;
                l_ForceDir.m_positionX *= p_Magnitude;
                l_ForceDir.m_positionY *= p_Magnitude;
                return l_ForceDir;
            }

            // Special case because of a lot of vertices.
            if (Blocks::Intermediate == p_BlockId)
            {
                l_ForceDir = k_WindMazeVertices[24] - k_WindMazeVertices[22];
                l_ForceDir.m_positionZ = 0;
                normalizeXY(l_ForceDir);
                l_ForceDir.m_positionX *= p_Magnitude;
                l_ForceDir.m_positionY *= p_Magnitude;
                return l_ForceDir;
            }

            std::vector<uint32> l_BlockIndices = k_WindMazeIndices[p_BlockId];
            assert(l_BlockIndices.size() == 4);

            l_ForceDir = ((k_WindMazeVertices[l_BlockIndices[3]] - k_WindMazeVertices[l_BlockIndices[0]]) + (k_WindMazeVertices[l_BlockIndices[2]] - k_WindMazeVertices[l_BlockIndices[1]])) / 2.f;
            l_ForceDir.m_positionZ = 0;
            normalizeXY(l_ForceDir);
            l_ForceDir.m_positionX *= p_Magnitude;
            l_ForceDir.m_positionY *= p_Magnitude;
            return l_ForceDir;
        }

        static bool IsPointInBlock(uint32 p_BlockId, Position const& p_Point)
        {
            auto l_IsToTheRightFromRef = [](Position const& p_Ref, Position const& p_Point) -> bool {
                return p_Point.m_positionX * p_Ref.m_positionY - p_Point.m_positionY * p_Ref.m_positionX > 0;
            };

            assert(p_BlockId < 27);
            std::vector<uint32> l_Block = k_WindMazeIndices[p_BlockId];
            assert(l_Block.size() >= 3);

            uint32 l_FirstPoint = 0;
            uint32 l_LastPoint = 0;

            for (uint32 i = 0; i < l_Block.size(); i++)
            {
                l_FirstPoint = l_Block[i];

                // Special case.
                if (i == 0)
                    l_LastPoint = l_Block[l_Block.size() - 1];

                if (!l_IsToTheRightFromRef(
                    k_WindMazeVertices[l_FirstPoint] - k_WindMazeVertices[l_LastPoint], // Constructing reference vector, which is part of the bounds of the block.
                    p_Point - k_WindMazeVertices[l_LastPoint])) // Constructing the point vector, centered in the last point.
                    return false;

                l_LastPoint = l_FirstPoint;
            }

            return true;
        }

        static GameObject* SelectNearestGameObjectWithEntry(Unit* p_Me, uint32 p_Entry, float p_Range = 0.0f)
        {
            std::list<GameObject*> l_TargetList;

            JadeCore::NearestGameObjectEntryInObjectRangeCheck l_Check(*p_Me, p_Entry, p_Range);
            JadeCore::GameObjectListSearcher<JadeCore::NearestGameObjectEntryInObjectRangeCheck> l_Searcher(p_Me, l_TargetList, l_Check);
            p_Me->VisitNearbyObject(p_Range, l_Searcher);

            for (GameObject* l_Gob : l_TargetList)
                return l_Gob;

            return nullptr;
        }

        static Creature* SelectNearestCreatureWithEntry(Unit* p_Me, uint32 p_Entry, float p_Range = 0.0f)
        {
            std::list<Unit*> l_TargetList;
            float l_Radius = p_Range;

            JadeCore::AnyUnitInObjectRangeCheck l_Check(p_Me, l_Radius);
            JadeCore::UnitListSearcher<JadeCore::AnyUnitInObjectRangeCheck> l_Searcher(p_Me, l_TargetList, l_Check);
            p_Me->VisitNearbyObject(l_Radius, l_Searcher);

            std::list<Unit*> l_Results;

            for (Unit* l_Unit : l_TargetList)
            {
                if (l_Unit->GetTypeId() == TYPEID_UNIT && l_Unit->GetEntry() == p_Entry)
                    return static_cast<Creature*>(l_Unit);
            }

            return nullptr;
        }

        static Unit* SelectRandomCreatureWithEntry(Unit* p_Me, uint32 p_Entry, float p_Range = 0.0f)
        {
            std::list<Unit*> l_TargetList;
            float l_Radius = p_Range;

            JadeCore::AnyUnitInObjectRangeCheck l_Check(p_Me, l_Radius);
            JadeCore::UnitListSearcher<JadeCore::AnyUnitInObjectRangeCheck> l_Searcher(p_Me, l_TargetList, l_Check);
            p_Me->VisitNearbyObject(l_Radius, l_Searcher);

            std::list<Unit*> l_Results;
            uint32 l_Size = 0;
            for (Unit* l_Unit : l_TargetList)
            {
                if (l_Unit->GetEntry() == p_Entry)
                {
                    l_Results.emplace_back(l_Unit);
                    l_Size++;
                }
            }

            auto l_RandUnit = l_Results.begin();
            std::advance(l_RandUnit, urand(0, l_Size - 1));

            return *l_RandUnit;
        }

        static std::list<Unit*> SelectNearestCreatureListWithEntry(Unit* p_Me, uint32 p_Entry, float p_Range = 0.0f)
        {
            std::list<Unit*> l_TargetList;
            float l_Radius = p_Range;

            JadeCore::AnyUnitInObjectRangeCheck l_Check(p_Me, l_Radius);
            JadeCore::UnitListSearcher<JadeCore::AnyUnitInObjectRangeCheck> l_Searcher(p_Me, l_TargetList, l_Check);
            p_Me->VisitNearbyObject(l_Radius, l_Searcher);

            std::list<Unit*> l_Results;

            for (Unit* l_Unit : l_TargetList)
            {
                if (l_Unit->GetEntry() == p_Entry)
                    l_Results.emplace_back(l_Unit);
            }

            return l_Results;
        }

        static Unit* SelectNearestFriendExcluededMe(Unit* p_Me, float p_Range = 0.0f, bool p_CheckLoS = true)
        {
            std::list<Unit*> l_TargetList;
            float l_Radius = p_Range;

            JadeCore::AnyFriendlyUnitInObjectRangeCheck l_Check(p_Me, p_Me, l_Radius);
            JadeCore::UnitListSearcher<JadeCore::AnyFriendlyUnitInObjectRangeCheck> l_Searcher(p_Me, l_TargetList, l_Check);
            p_Me->VisitNearbyObject(l_Radius, l_Searcher);

            for (Unit* l_Unit : l_TargetList)
            {
                if (l_Unit && (p_Me->IsWithinLOSInMap(l_Unit) || !p_CheckLoS) &&
                    p_Me->IsWithinDistInMap(l_Unit, p_Range) && l_Unit->isAlive() && l_Unit->GetGUID() != p_Me->GetGUID())
                {
                    return l_Unit;
                }
            }

            return nullptr;
        }

        static Player* SelectNearestPlayer(Unit* p_me, float p_range = 0.0f, bool p_checkLoS = true)
        {
            Map* map = p_me->GetMap();
            if (!map->IsDungeon())
                return nullptr;

            Map::PlayerList const &PlayerList = map->GetPlayers();
            if (PlayerList.isEmpty())
                return nullptr;

            std::list<Player*> temp;
            for (Map::PlayerList::const_iterator i = PlayerList.begin(); i != PlayerList.end(); ++i)
            {
                if ((p_me->IsWithinLOSInMap(i->getSource()) || !p_checkLoS) && p_me->getVictim() != i->getSource() &&
                    p_me->GetExactDist2d(i->getSource()) < p_range && i->getSource()->isAlive())
                    temp.push_back(i->getSource());
            }

            if (!temp.empty())
                return temp.front();

            return nullptr;
        }

        static void ApplyOnEveryPlayer(Unit* p_Me, std::function<void(Unit*, Player*)> p_Function)
        {
            Map* map = p_Me->GetMap();
            if (!map->IsDungeon())
                return;

            Map::PlayerList const &PlayerList = map->GetPlayers();
            if (PlayerList.isEmpty())
                return;

            std::list<Player*> temp;
            for (Map::PlayerList::const_iterator i = PlayerList.begin(); i != PlayerList.end(); ++i)
                p_Function(p_Me, i->getSource());
        }

        static Player* SelectRandomPlayerExcludedTank(Unit* p_me, float p_range = 0.0f, bool p_checkLoS = true)
        {
            Map* map = p_me->GetMap();
            if (!map->IsDungeon())
                return nullptr;

            Map::PlayerList const &PlayerList = map->GetPlayers();
            if (PlayerList.isEmpty())
                return nullptr;

            std::list<Player*> temp;
            for (Map::PlayerList::const_iterator i = PlayerList.begin(); i != PlayerList.end(); ++i)
            {
                if ((p_me->IsWithinLOSInMap(i->getSource()) || !p_checkLoS) && p_me->getVictim() != i->getSource() &&
                    p_me->IsWithinDistInMap(i->getSource(), p_range) && i->getSource()->isAlive())
                    temp.push_back(i->getSource());
            }

            if (!temp.empty())
            {
                std::list<Player*>::const_iterator j = temp.begin();
                advance(j, rand() % temp.size());
                return (*j);
            }
            return nullptr;
        }


        static Player* SelectFarEnoughPlayerIncludedTank(Unit* p_me, float p_range = 0.0f, bool p_checkLoS = true)
        {
            Map* map = p_me->GetMap();
            if (!map->IsDungeon())
                return nullptr;

            Map::PlayerList const &PlayerList = map->GetPlayers();
            if (PlayerList.isEmpty())
                return nullptr;

            std::list<Player*> temp;
            for (Map::PlayerList::const_iterator i = PlayerList.begin(); i != PlayerList.end(); ++i)
            {
                if ((p_me->IsWithinLOSInMap(i->getSource()) || !p_checkLoS)
                    && !p_me->IsWithinDistInMap(i->getSource(), p_range)
                    && i->getSource()->isAlive())
                    return i->getSource();
            }

            return nullptr;
        }

        static Player* SelectRandomPlayerIncludedTank(Unit* p_me, float p_range = 0.0f, bool p_checkLoS = true)
        {
            Map* map = p_me->GetMap();
            if (!map->IsDungeon())
                return nullptr;

            Map::PlayerList const &PlayerList = map->GetPlayers();
            if (PlayerList.isEmpty())
                return nullptr;

            std::list<Player*> temp;
            for (Map::PlayerList::const_iterator i = PlayerList.begin(); i != PlayerList.end(); ++i)
            {
                if ((p_me->IsWithinLOSInMap(i->getSource()) || !p_checkLoS)
                    && p_me->IsWithinDistInMap(i->getSource(), p_range)
                    && i->getSource()->isAlive())
                    temp.push_back(i->getSource());
            }

            if (!temp.empty())
            {
                std::list<Player*>::const_iterator j = temp.begin();
                advance(j, rand() % temp.size());
                return (*j);
            }
            return nullptr;
        }
    }
}

#endif // !SKYREACH_INSTANCE_H