//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface PGSeasonMemoryGenerator
{
    NSDate *_localDate;
    unsigned long long _type;
}

+ (unsigned long long)numberOfPotentialMemoriesWithGraph:(id)arg1;
+ (_Bool)_isMomentPartOfTrip:(id)arg1;
+ (_Bool)isMoment:(id)arg1 duringSeason:(id)arg2;
+ (id)seasonNodeForMomentNode:(id)arg1;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)initWithController:(id)arg1;
- (id)_seasonInHistoryPotentialMemories;
- (id)_lastSeasonPotentialMemory;
- (id)_potentialMemoryForMomentNodes:(id)arg1 seasonNode:(id)arg2 category:(long long)arg3;
- (void)seasonInHistoryMomentNodesForLocalDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (void)lastSeasonMomentNodesForLocalDate:(id)arg1 resultBlock:(CDUnknownBlockType)arg2;
- (id)_previousSeasonForSeason:(id)arg1;

@end

