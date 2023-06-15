//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NewsCore/FCSportsProviding-Protocol.h>

@class NSArray, NSDate, NSDictionary, NSString;
@protocol FCSportsProviding;

@protocol FCSportsEventProviding <FCSportsProviding>
@property(readonly, copy, nonatomic) NSDate *sportsEventStartTime;
@property(readonly, nonatomic) _Bool isRouteable;
@property(readonly, nonatomic) _Bool isDeprecated;
@property(readonly, nonatomic) NSDictionary *rosterResourceIDs;
@property(readonly, nonatomic) id <FCSportsProviding> eventLeagueTag;
@property(readonly, nonatomic) NSString *eventArticleListID;
@property(readonly, nonatomic) NSArray *eventCompetitorTags;
@end

