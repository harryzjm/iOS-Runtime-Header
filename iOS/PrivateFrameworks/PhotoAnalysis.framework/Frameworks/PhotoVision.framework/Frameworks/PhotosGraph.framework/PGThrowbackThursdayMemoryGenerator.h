//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDate;

@interface PGThrowbackThursdayMemoryGenerator
{
    NSDate *_localDate;
}

@property(retain) NSDate *localDate; // @synthesize localDate=_localDate;
- (void).cxx_destruct;
- (id)_potentialMemoriesForDryTesting;
- (void)_postProcessMemory:(id)arg1 withPotentialMemory:(id)arg2;
- (void)_enumeratePotentialMemoriesUsingBlock:(CDUnknownBlockType)arg1;
- (id)_oldWeekInHistoryMomentNodesForLocalDate:(id)arg1;

@end
