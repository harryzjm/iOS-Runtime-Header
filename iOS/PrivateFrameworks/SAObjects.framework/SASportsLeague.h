//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SAObjects/SAAceSerializable-Protocol.h>

@class NSString, SASportsSeason;

@interface SASportsLeague <SAAceSerializable>
{
}

+ (id)leagueWithDictionary:(id)arg1 context:(id)arg2;
+ (id)league;
@property(copy, nonatomic) NSString *sport;
@property(retain, nonatomic) SASportsSeason *season;
@property(copy, nonatomic) NSString *identifier;
@property(copy, nonatomic) NSString *displayedText;
@property(nonatomic) _Bool displayTeamLocationOverName;
@property(copy, nonatomic) NSString *diplayedText;
- (id)encodedClassName;
- (id)groupIdentifier;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

