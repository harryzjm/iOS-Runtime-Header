//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SASportsAthlete;

@interface SASportsMatchupPlaySummary <SAAceSerializable>
{
}

+ (id)matchupPlaySummaryWithDictionary:(id)arg1 context:(id)arg2;
+ (id)matchupPlaySummary;
@property(copy, nonatomic) NSString *time;
@property(copy, nonatomic) NSString *summaryDescription;
@property(retain, nonatomic) SASportsAthlete *offensivePlayer;
@property(copy, nonatomic) NSString *nonFormattedTime;
@property(nonatomic) _Bool appliesToHomeTeam;
@property(nonatomic) _Bool appliesToAwayTeam;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
