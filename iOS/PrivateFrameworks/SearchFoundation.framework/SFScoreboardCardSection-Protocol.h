//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/SFTitleCardSection-Protocol.h>

@class NSData, NSDictionary, NSString, SFSportsTeam;

@protocol SFScoreboardCardSection <SFTitleCardSection>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(copy, nonatomic) NSString *eventStatus;
@property(copy, nonatomic) NSString *accessibilityDescription;
@property(retain, nonatomic) SFSportsTeam *team2;
@property(retain, nonatomic) SFSportsTeam *team1;
@end

