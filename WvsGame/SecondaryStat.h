#pragma once
#include <map>
#include <vector>

#include "BasicStat.h"
#include "TemporaryStat.h"

#define ADD_TEMPORARY(stat) int nLv##stat, n##stat, t##stat, r##stat, b##stat, x##stat, c##stat, y##stat;

class User;
struct GA_Character;
class OutPacket;
class InPacket;

class SecondaryStat : public BasicStat
{
public:
	std::map<int, std::pair<long long int, std::vector<int*>>> m_mSetByTS;

	ADD_TEMPORARY(IndiePAD);
	ADD_TEMPORARY(IndieMAD);
	ADD_TEMPORARY(IndiePDD);
	ADD_TEMPORARY(IndieMDD);
	ADD_TEMPORARY(IndieMHP);
	ADD_TEMPORARY(IndieMHPR);
	ADD_TEMPORARY(IndieMMP);
	ADD_TEMPORARY(IndieMMPR);
	ADD_TEMPORARY(IndieACC);
	ADD_TEMPORARY(IndieEVA);
	ADD_TEMPORARY(IndieJump);
	ADD_TEMPORARY(IndieSpeed);
	ADD_TEMPORARY(IndieAllStat);
	ADD_TEMPORARY(IndieDodgeCriticalTime);
	ADD_TEMPORARY(IndieEXP);
	ADD_TEMPORARY(IndieBooster);
	ADD_TEMPORARY(IndieFixedDamageR);
	ADD_TEMPORARY(PyramidStunBuff);
	ADD_TEMPORARY(PyramidFrozenBuff);
	ADD_TEMPORARY(PyramidFireBuff);
	ADD_TEMPORARY(PyramidBonusDamageBuff);
	ADD_TEMPORARY(IndieRelaxEXP);
	ADD_TEMPORARY(IndieSTR);
	ADD_TEMPORARY(IndieDEX);
	ADD_TEMPORARY(IndieINT);
	ADD_TEMPORARY(IndieLUK);
	ADD_TEMPORARY(IndieDamR);
	ADD_TEMPORARY(IndieScriptBuff);
	ADD_TEMPORARY(IndieMDF);
	ADD_TEMPORARY(IndieMaxDamageOver);
	ADD_TEMPORARY(IndieAsrR);
	ADD_TEMPORARY(IndieTerR);
	ADD_TEMPORARY(IndieCr);
	ADD_TEMPORARY(IndiePDDR);
	ADD_TEMPORARY(IndieCrMax);
	ADD_TEMPORARY(IndieBDR);
	ADD_TEMPORARY(IndieStatR);
	ADD_TEMPORARY(IndieStance);
	ADD_TEMPORARY(IndieIgnoreMobpdpR);
	ADD_TEMPORARY(IndieEmpty);
	ADD_TEMPORARY(IndiePADR);
	ADD_TEMPORARY(IndieMADR);
	ADD_TEMPORARY(IndieCrMaxR);
	ADD_TEMPORARY(IndieEVAR);
	ADD_TEMPORARY(IndieMDDR);
	ADD_TEMPORARY(IndieDrainHP);
	ADD_TEMPORARY(IndiePMdR);
	ADD_TEMPORARY(IndieMaxDamageOverR);
	ADD_TEMPORARY(IndieForceJump);
	ADD_TEMPORARY(IndieForceSpeed);
	ADD_TEMPORARY(IndieQrPointTerm);
	ADD_TEMPORARY(INDIE_STAT_COUNT);
	ADD_TEMPORARY(PAD);
	ADD_TEMPORARY(PDD);
	ADD_TEMPORARY(MAD);
	ADD_TEMPORARY(MDD);
	ADD_TEMPORARY(ACC);
	ADD_TEMPORARY(EVA);
	ADD_TEMPORARY(Craft);
	ADD_TEMPORARY(Speed);
	ADD_TEMPORARY(Jump);
	ADD_TEMPORARY(MagicGuard);
	ADD_TEMPORARY(DarkSight);
	ADD_TEMPORARY(Booster);
	ADD_TEMPORARY(PowerGuard);
	ADD_TEMPORARY(MaxHP);
	ADD_TEMPORARY(MaxMP);
	ADD_TEMPORARY(Invincible);
	ADD_TEMPORARY(SoulArrow);
	ADD_TEMPORARY(Stun);
	ADD_TEMPORARY(Poison);
	ADD_TEMPORARY(Seal);
	ADD_TEMPORARY(Darkness);
	ADD_TEMPORARY(ComboCounter);
	ADD_TEMPORARY(WeaponCharge);
	ADD_TEMPORARY(HolySymbol);
	ADD_TEMPORARY(MesoUp);
	ADD_TEMPORARY(ShadowPartner);
	ADD_TEMPORARY(PickPocket);
	ADD_TEMPORARY(MesoGuard);
	ADD_TEMPORARY(Thaw);
	ADD_TEMPORARY(Weakness);
	ADD_TEMPORARY(Curse);
	ADD_TEMPORARY(Slow);
	ADD_TEMPORARY(Morph);
	ADD_TEMPORARY(Regen);
	ADD_TEMPORARY(BasicStatUp);
	ADD_TEMPORARY(Stance);
	ADD_TEMPORARY(SharpEyes);
	int mSharpEyes;

	ADD_TEMPORARY(ManaReflection);
	ADD_TEMPORARY(Attract);
	ADD_TEMPORARY(NoBulletConsume);
	ADD_TEMPORARY(Infinity);
	ADD_TEMPORARY(AdvancedBless);

	ADD_TEMPORARY(IllusionStep);
	ADD_TEMPORARY(Blind);
	ADD_TEMPORARY(Concentration);
	ADD_TEMPORARY(BanMap);
	ADD_TEMPORARY(MaxLevelBuff);
	ADD_TEMPORARY(MesoUpByItem);
	ADD_TEMPORARY(Ghost);
	ADD_TEMPORARY(Barrier);
	ADD_TEMPORARY(ReverseInput);
	ADD_TEMPORARY(ItemUpByItem);
	ADD_TEMPORARY(RespectPImmune);
	ADD_TEMPORARY(RespectMImmune);
	ADD_TEMPORARY(DefenseAtt);
	ADD_TEMPORARY(DefenseState);
	ADD_TEMPORARY(DojangBerserk);
	ADD_TEMPORARY(DojangInvincible);
	ADD_TEMPORARY(DojangShield);
	ADD_TEMPORARY(SoulMasterFinal);
	ADD_TEMPORARY(WindBreakerFinal);
	ADD_TEMPORARY(ElementalReset);
	ADD_TEMPORARY(HideAttack);
	ADD_TEMPORARY(EventRate);
	ADD_TEMPORARY(ComboAbilityBuff);
	ADD_TEMPORARY(ComboDrain);
	ADD_TEMPORARY(ComboBarrier);
	ADD_TEMPORARY(BodyPressure);
	ADD_TEMPORARY(RepeatEffect);
	ADD_TEMPORARY(ExpBuffRate);
	ADD_TEMPORARY(StopPortion);
	ADD_TEMPORARY(StopMotion);
	ADD_TEMPORARY(Fear);
	ADD_TEMPORARY(HiddenPieceOn);
	ADD_TEMPORARY(MagicShield);
	ADD_TEMPORARY(MagicResistance);
	ADD_TEMPORARY(SoulStone);
	ADD_TEMPORARY(Flying);
	ADD_TEMPORARY(Frozen);
	ADD_TEMPORARY(AssistCharge);
	ADD_TEMPORARY(Enrage);
	ADD_TEMPORARY(DrawBack);
	ADD_TEMPORARY(NotDamaged);
	ADD_TEMPORARY(FinalCut);
	ADD_TEMPORARY(HowlingAttackDamage);
	ADD_TEMPORARY(BeastFormDamageUp);
	ADD_TEMPORARY(Dance);
	ADD_TEMPORARY(DAMAGE_RATE);
	ADD_TEMPORARY(EMHP);
	ADD_TEMPORARY(EMMP);
	ADD_TEMPORARY(EPAD);
	ADD_TEMPORARY(EMAD);
	ADD_TEMPORARY(EPDD);
	ADD_TEMPORARY(EMDD);
	ADD_TEMPORARY(GUARD);

	ADD_TEMPORARY(Cyclone);
	ADD_TEMPORARY(HowlingCritical);
	ADD_TEMPORARY(HowlingMaxMP);
	ADD_TEMPORARY(HowlingDefence);
	ADD_TEMPORARY(HowlingEvasion);
	ADD_TEMPORARY(Conversion);
	ADD_TEMPORARY(Revive);
	ADD_TEMPORARY(PinkbeanMinibeenMove);
	ADD_TEMPORARY(Sneak);
	ADD_TEMPORARY(Mechanic);
	ADD_TEMPORARY(BeastFormMaxHP);
	ADD_TEMPORARY(Dice);
	ADD_TEMPORARY(BlessingArmor);
	ADD_TEMPORARY(DamR);
	ADD_TEMPORARY(TeleportMasteryOn);


	ADD_TEMPORARY(CombatOrders);
	ADD_TEMPORARY(Beholder);
	int sBeholder, ssBeholder;

	ADD_TEMPORARY(DispelItemOption);
	ADD_TEMPORARY(Inflation);
	ADD_TEMPORARY(OnyxDivineProtection);
	ADD_TEMPORARY(Web);
	ADD_TEMPORARY(Bless);
	ADD_TEMPORARY(TimeBomb);
	ADD_TEMPORARY(DisOrder);
	ADD_TEMPORARY(Thread);
	ADD_TEMPORARY(Team);
	ADD_TEMPORARY(Explosion);
	ADD_TEMPORARY(BuffLimit);
	ADD_TEMPORARY(STR);
	ADD_TEMPORARY(INT);
	ADD_TEMPORARY(DEX);
	ADD_TEMPORARY(LUK);
	ADD_TEMPORARY(DispelItemOptionByField);
	ADD_TEMPORARY(DarkTornado);
	ADD_TEMPORARY(PVPDamage);
	ADD_TEMPORARY(PvPScoreBonus);
	ADD_TEMPORARY(PvPInvincible);
	ADD_TEMPORARY(PvPRaceEffect);
	ADD_TEMPORARY(WeaknessMdamage);
	ADD_TEMPORARY(Frozen2);
	ADD_TEMPORARY(PVPDamageSkill);
	ADD_TEMPORARY(AmplifyDamage);
	ADD_TEMPORARY(IceKnight);
	ADD_TEMPORARY(Shock);
	ADD_TEMPORARY(InfinityForce);
	ADD_TEMPORARY(IncMaxHP);
	ADD_TEMPORARY(IncMaxMP);
	ADD_TEMPORARY(HolyMagicShell);
	ADD_TEMPORARY(KeyDownTimeIgnore);
	ADD_TEMPORARY(ArcaneAim);
	ADD_TEMPORARY(MasterMagicOn);
	ADD_TEMPORARY(AsrR);
	ADD_TEMPORARY(TerR);
	ADD_TEMPORARY(DamAbsorbShield);
	ADD_TEMPORARY(DevilishPower);
	ADD_TEMPORARY(Roulette);
	ADD_TEMPORARY(SpiritLink);
	ADD_TEMPORARY(AsrRByItem);
	ADD_TEMPORARY(Event);
	ADD_TEMPORARY(CriticalBuff);
	ADD_TEMPORARY(DropRate);
	ADD_TEMPORARY(PlusExpRate);
	ADD_TEMPORARY(ItemInvincible);
	ADD_TEMPORARY(Awake);
	ADD_TEMPORARY(ItemCritical);
	ADD_TEMPORARY(ItemEvade);
	ADD_TEMPORARY(Event2);
	ADD_TEMPORARY(VampiricTouch);
	ADD_TEMPORARY(DDR);
	ADD_TEMPORARY(IncCriticalDamMin);
	ADD_TEMPORARY(IncCriticalDamMax);
	ADD_TEMPORARY(IncTerR);
	ADD_TEMPORARY(IncAsrR);
	ADD_TEMPORARY(DeathMark);

	ADD_TEMPORARY(UsefulAdvancedBless);
	ADD_TEMPORARY(Lapidification);
	ADD_TEMPORARY(VenomSnake);
	ADD_TEMPORARY(CarnivalAttack);
	ADD_TEMPORARY(CarnivalDefence);
	ADD_TEMPORARY(CarnivalExp);
	ADD_TEMPORARY(SlowAttack);
	ADD_TEMPORARY(PyramidEffect);
	ADD_TEMPORARY(KillingPoint);
	ADD_TEMPORARY(HollowPointBullet);
	ADD_TEMPORARY(KeyDownMoving);
	ADD_TEMPORARY(IgnoreTargetDEF);
	ADD_TEMPORARY(ReviveOnce);
	ADD_TEMPORARY(Invisible);
	ADD_TEMPORARY(EnrageCr);


	ADD_TEMPORARY(EnrageCrDamMin);
	ADD_TEMPORARY(Judgement);
	ADD_TEMPORARY(DojangLuckyBonus);
	ADD_TEMPORARY(PainMark);
	ADD_TEMPORARY(Magnet);
	ADD_TEMPORARY(MagnetArea);
	ADD_TEMPORARY(GuideArrow);
	ADD_TEMPORARY(SoulElement);
	ADD_TEMPORARY(VampDeath);
	ADD_TEMPORARY(BlessingArmorIncPAD);
	ADD_TEMPORARY(KeyDownAreaMoving);
	ADD_TEMPORARY(Larkness);
	int dgLarkness, lgLarkness;
	ADD_TEMPORARY(StackBuff);
	int mStackBuff;

	ADD_TEMPORARY(BlessOfDarkness);
	ADD_TEMPORARY(AntiMagicShell);
	ADD_TEMPORARY(LifeTidal);
	ADD_TEMPORARY(HitCriDamR);
	ADD_TEMPORARY(SmashStack);
	ADD_TEMPORARY(PartyBarrier);
	ADD_TEMPORARY(ReshuffleSwitch);
	ADD_TEMPORARY(SpecialAction);
	ADD_TEMPORARY(VampDeathSummon);
	ADD_TEMPORARY(StopForceAtomInfo);
	ADD_TEMPORARY(SoulGazeCriDamR);
	ADD_TEMPORARY(SoulRageCount);
	ADD_TEMPORARY(PowerTransferGauge);
	ADD_TEMPORARY(AffinitySlug);
	ADD_TEMPORARY(Trinity);
	int mTrinity;
	ADD_TEMPORARY(IncMaxDamage);
	ADD_TEMPORARY(BossShield);
	ADD_TEMPORARY(MobZoneState);
	ADD_TEMPORARY(GiveMeHeal);
	ADD_TEMPORARY(TouchMe);
	ADD_TEMPORARY(Contagion);
	ADD_TEMPORARY(ComboUnlimited);
	ADD_TEMPORARY(SoulExalt);
	ADD_TEMPORARY(IgnorePCounter);
	ADD_TEMPORARY(IgnoreAllCounter);
	ADD_TEMPORARY(IgnorePImmune);
	ADD_TEMPORARY(IgnoreAllImmune);

	ADD_TEMPORARY(FinalJudgement);
	ADD_TEMPORARY(IceAura);
	ADD_TEMPORARY(FireAura);
	ADD_TEMPORARY(VengeanceOfAngel);
	ADD_TEMPORARY(HeavensDoor);
	ADD_TEMPORARY(Preparation);
	ADD_TEMPORARY(BullsEye);
	ADD_TEMPORARY(IncEffectHPPotion);
	ADD_TEMPORARY(IncEffectMPPotion);
	ADD_TEMPORARY(BleedingToxin);
	ADD_TEMPORARY(IgnoreMobDamR);
	ADD_TEMPORARY(Asura);

	ADD_TEMPORARY(FlipTheCoin);
	ADD_TEMPORARY(UnityOfPower);
	ADD_TEMPORARY(Stimulate);
	ADD_TEMPORARY(ReturnTeleport);
	ADD_TEMPORARY(DropRIncrease);

	ADD_TEMPORARY(IgnoreMobpdpR);
	ADD_TEMPORARY(BDR);
	ADD_TEMPORARY(CapDebuff);
	ADD_TEMPORARY(Exceed);
	ADD_TEMPORARY(DiabolikRecovery);
	ADD_TEMPORARY(FinalAttackProp);
	ADD_TEMPORARY(ExceedOverload);
	ADD_TEMPORARY(OverloadCount);
	ADD_TEMPORARY(BuckShot);
	ADD_TEMPORARY(FireBomb);
	ADD_TEMPORARY(HalfstatByDebuff);
	ADD_TEMPORARY(SurplusSupply);
	ADD_TEMPORARY(SetBaseDamage);
	ADD_TEMPORARY(EVAR);
	ADD_TEMPORARY(NewFlying);
	ADD_TEMPORARY(AmaranthGenerator);
	ADD_TEMPORARY(OnCapsule);
	ADD_TEMPORARY(CygnusElementSkill);
	ADD_TEMPORARY(StrikerHyperElectric);
	ADD_TEMPORARY(EventPointAbsorb);
	ADD_TEMPORARY(EventAssemble);
	ADD_TEMPORARY(StormBringer);
	ADD_TEMPORARY(ACCR);
	ADD_TEMPORARY(DEXR);
	ADD_TEMPORARY(Albatross);
	ADD_TEMPORARY(Translucence);
	ADD_TEMPORARY(PoseType);
	ADD_TEMPORARY(LightOfSpirit);
	ADD_TEMPORARY(ElementSoul);
	ADD_TEMPORARY(GlimmeringTime);
	ADD_TEMPORARY(TrueSight);
	ADD_TEMPORARY(SoulExplosion);
	ADD_TEMPORARY(SoulMP);
	ADD_TEMPORARY(FullSoulMP);
	ADD_TEMPORARY(SoulSkillDamageUp);
	ADD_TEMPORARY(ElementalCharge);
	int mElementalCharge, wElementalCharge, uElementalCharge, zElementalCharge;

	ADD_TEMPORARY(Restoration);
	ADD_TEMPORARY(CrossOverChain);
	ADD_TEMPORARY(ChargeBuff);
	ADD_TEMPORARY(Reincarnation);
	ADD_TEMPORARY(KnightsAura);
	ADD_TEMPORARY(ChillingStep);
	ADD_TEMPORARY(DotBasedBuff);
	ADD_TEMPORARY(BlessEnsenble);
	ADD_TEMPORARY(ComboCostInc);
	ADD_TEMPORARY(ExtremeArchery);

	ADD_TEMPORARY(NaviFlying);
	ADD_TEMPORARY(QuiverCatridge);
	ADD_TEMPORARY(AdvancedQuiver);
	ADD_TEMPORARY(UserControlMob);
	ADD_TEMPORARY(ImmuneBarrier);
	ADD_TEMPORARY(ArmorPiercing);
	ADD_TEMPORARY(ZeroAuraStr);
	ADD_TEMPORARY(ZeroAuraSpd);
	ADD_TEMPORARY(CriticalGrowing);
	ADD_TEMPORARY(QuickDraw);
	ADD_TEMPORARY(BowMasterConcentration);
	ADD_TEMPORARY(TimeFastABuff);
	ADD_TEMPORARY(TimeFastBBuff);
	ADD_TEMPORARY(GatherDropR);
	ADD_TEMPORARY(AimBox2D);
	ADD_TEMPORARY(IncMonsterBattleCaptureRate);
	ADD_TEMPORARY(CursorSniping);
	ADD_TEMPORARY(DebuffTolerance);
	ADD_TEMPORARY(DotHealHPPerSecond);

	ADD_TEMPORARY(SpiritGuard);
	ADD_TEMPORARY(PreReviveOnce);
	ADD_TEMPORARY(SetBaseDamageByBuff);
	ADD_TEMPORARY(LimitMP);
	ADD_TEMPORARY(ReflectDamR);
	ADD_TEMPORARY(ComboTempest);
	ADD_TEMPORARY(MHPCutR);
	ADD_TEMPORARY(MMPCutR);
	ADD_TEMPORARY(SelfWeakness);
	ADD_TEMPORARY(ElementDarkness);
	ADD_TEMPORARY(FlareTrick);
	ADD_TEMPORARY(Ember);
	ADD_TEMPORARY(Dominion);
	ADD_TEMPORARY(SiphonVitality);
	ADD_TEMPORARY(DarknessAscension);
	ADD_TEMPORARY(BossWaitingLinesBuff);
	ADD_TEMPORARY(DamageReduce);
	ADD_TEMPORARY(ShadowServant);
	ADD_TEMPORARY(ShadowIllusion);
	ADD_TEMPORARY(KnockBack);

	ADD_TEMPORARY(AddAttackCount);
	ADD_TEMPORARY(ComplusionSlant);
	ADD_TEMPORARY(JaguarSummoned);
	ADD_TEMPORARY(JaguarCount);
	ADD_TEMPORARY(SSFShootingAttack);
	ADD_TEMPORARY(DevilCry);
	ADD_TEMPORARY(ShieldAttack);

	ADD_TEMPORARY(BMageAura);
	ADD_TEMPORARY(DarkLighting);
	ADD_TEMPORARY(AttackCountX);
	ADD_TEMPORARY(BMageDeath);
	ADD_TEMPORARY(BombTime);
	ADD_TEMPORARY(NoDebuff);
	ADD_TEMPORARY(BattlePvP_Mike_Shield);
	ADD_TEMPORARY(BattlePvP_Mike_Bugle);
	ADD_TEMPORARY(XenonAegisSystem);
	ADD_TEMPORARY(AngelicBursterSoulSeeker);
	ADD_TEMPORARY(HiddenPossession);
	ADD_TEMPORARY(NightWalkerBat);
	ADD_TEMPORARY(NightLordMark);
	ADD_TEMPORARY(WizardIgnite);
	ADD_TEMPORARY(FireBarrier);
	ADD_TEMPORARY(ChangeFoxMan);

	ADD_TEMPORARY(BattlePvP_Helena_WindSpirit);
	ADD_TEMPORARY(BattlePvP_LangE_Protection);
	ADD_TEMPORARY(BattlePvP_LeeMalNyun_ScaleUp);
	ADD_TEMPORARY(PinkbeanAttackBuff);

	ADD_TEMPORARY(PinkbeanRollingGrade);
	ADD_TEMPORARY(PinkbeanYoYoStack);
	ADD_TEMPORARY(RandAreaAttack);
	ADD_TEMPORARY(HayatoChangeMode);
	ADD_TEMPORARY(HayatoCombo);
	ADD_TEMPORARY(BeastModeChange);
	ADD_TEMPORARY(BattlePvP_Helena_Mark);



	ADD_TEMPORARY(BattlePvP_Revive);

	ADD_TEMPORARY(PinkbeanRelax);



	ADD_TEMPORARY(NextAttackEnhance);
	ADD_TEMPORARY(AranBeyonderDamAbsorb);
	ADD_TEMPORARY(AranCombotempastOption);
	ADD_TEMPORARY(NautilusFinalAttack);
	ADD_TEMPORARY(ViperTimeLeap);
	ADD_TEMPORARY(RoyalGuardState);
	ADD_TEMPORARY(RoyalGuardPrepare);
	ADD_TEMPORARY(MichaelSoulLink);
	ADD_TEMPORARY(MichaelStanceLink);
	ADD_TEMPORARY(TriflingWhimOnOff);
	ADD_TEMPORARY(AddRangeOnOff);
	ADD_TEMPORARY(KinesisPsychicPoint);
	ADD_TEMPORARY(KinesisPsychicOver);
	ADD_TEMPORARY(KinesisPsychicShield);
	ADD_TEMPORARY(KinesisIncMastery);
	ADD_TEMPORARY(KinesisPsychicEnergeShield);
	ADD_TEMPORARY(BladeStance);
	ADD_TEMPORARY(DebuffActiveSkillHPCon);
	ADD_TEMPORARY(DebuffIncHP);
	ADD_TEMPORARY(BowMasterMortalBlow);
	ADD_TEMPORARY(AngelicBursterSoulResonance);
	ADD_TEMPORARY(Fever);
	ADD_TEMPORARY(IgnisRore);
	ADD_TEMPORARY(RpSiksin);
	ADD_TEMPORARY(BunnerBullet);
	ADD_TEMPORARY(TeleportMasteryRange);
	ADD_TEMPORARY(FixCoolTime);
	ADD_TEMPORARY(IncMobRateDummy);
	ADD_TEMPORARY(AdrenalinBoost);
	ADD_TEMPORARY(AranSmashSwing);
	ADD_TEMPORARY(AranDrain);
	ADD_TEMPORARY(AranBoostEndHunt);
	ADD_TEMPORARY(PreciseMissle);
	ADD_TEMPORARY(HiddenHyperLinkMaximization);
	ADD_TEMPORARY(RWCylinder);
	ADD_TEMPORARY(RWCombination);
	ADD_TEMPORARY(RWMagnumBlow);
	ADD_TEMPORARY(RWBarrier);
	ADD_TEMPORARY(RWBarrierHeal);
	ADD_TEMPORARY(RWMaximizeCannon);
	ADD_TEMPORARY(RWOverHeat);
	ADD_TEMPORARY(UsingScouter);
	ADD_TEMPORARY(RWMovingEvar);
	ADD_TEMPORARY(Stigma);

	ADD_TEMPORARY(EnergyCharged);
	ADD_TEMPORARY(Dash_Speed);
	ADD_TEMPORARY(Dash_Jump);
	ADD_TEMPORARY(RideVehicle);
	ADD_TEMPORARY(PartyBooster);
	ADD_TEMPORARY(GuidedBullet);
	ADD_TEMPORARY(Undead);
	ADD_TEMPORARY(RideVehicleExpire);
public:
	SecondaryStat();
	~SecondaryStat();

	void SetFrom(int nFieldType, GA_Character* pChar, BasicStat* pBS, void *pFs, void* pNonBodyEquip, int nMHPForPvP, void* pPSD);
	void EncodeForLocal(OutPacket *oPacket, TemporaryStat::TS_Flag& flag);
	void EncodeForRemote(OutPacket *oPacket, TemporaryStat::TS_Flag& flag);
	void EncodeIndieTempStat(OutPacket *oPacket, TemporaryStat::TS_Flag& flag);
	bool EnDecode4Byte(TemporaryStat::TS_Flag& flag);
	void ResetByTime(int tCur);

	void DecodeInternal(User* pUser, InPacket *iPacket);
	void EncodeInternal(User* pUser, OutPacket *oPacket);
};

