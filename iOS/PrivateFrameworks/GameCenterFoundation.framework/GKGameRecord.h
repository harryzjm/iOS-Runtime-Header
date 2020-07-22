//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKGameRecordInternal, GKPlayer, NSDate, NSString;

@interface GKGameRecord
{
    GKPlayer *_player;
}

+ (void)loadGameRecordsForPlayer:(id)arg1 games:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadGameRecordForPlayer:(id)arg1 game:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (id)gameRecordForPlayer:(id)arg1 game:(id)arg2;
+ (id)internalRepresentationForPlayer:(id)arg1 game:(id)arg2;
+ (void)invalidateCaches;
+ (id)internalRepresentationCache;
+ (id)cacheKeyForPlayer:(id)arg1 internal:(id)arg2;
+ (id)cacheKeyForPlayer:(id)arg1 game:(id)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)partitionGameRecords:(id)arg1 returniOS:(id *)arg2 returnMac:(id *)arg3;
@property(retain, nonatomic) GKPlayer *player; // @synthesize player=_player;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
@property(readonly, nonatomic) _Bool played;
- (void)dealloc;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1;
- (id)initWithInternalRepresentation:(id)arg1 player:(id)arg2;

// Remaining properties
@property(readonly, nonatomic) unsigned long long achievementPoints; // @dynamic achievementPoints;
@property(readonly, nonatomic) unsigned long long achievements; // @dynamic achievements;
@property(readonly, nonatomic) NSString *defaultLeaderboardIdentifier; // @dynamic defaultLeaderboardIdentifier;
@property(readonly, nonatomic) unsigned long long friendRank; // @dynamic friendRank;
@property(readonly, retain) GKGameRecordInternal *internal; // @dynamic internal;
@property(readonly, nonatomic) NSDate *lastPlayedDate; // @dynamic lastPlayedDate;
@property(readonly, nonatomic) unsigned long long maxAchievementPoints; // @dynamic maxAchievementPoints;
@property(readonly, nonatomic) unsigned long long maxAchievements; // @dynamic maxAchievements;
@property(readonly, nonatomic) unsigned long long maxFriendRank; // @dynamic maxFriendRank;
@property(readonly, nonatomic) unsigned long long maxRank; // @dynamic maxRank;
@property(readonly, nonatomic) unsigned long long numberOfCategories; // @dynamic numberOfCategories;
@property(readonly, nonatomic) unsigned long long numberOfLeaderboardSets; // @dynamic numberOfLeaderboardSets;
@property(readonly, nonatomic) unsigned long long numberOfLeaderboards; // @dynamic numberOfLeaderboards;
@property(readonly, nonatomic) NSDate *purchaseDate; // @dynamic purchaseDate;
@property(readonly, nonatomic) unsigned long long rank; // @dynamic rank;
@property(readonly, nonatomic) _Bool supportsAchievements; // @dynamic supportsAchievements;
@property(readonly, nonatomic) _Bool supportsLeaderboardSets; // @dynamic supportsLeaderboardSets;
@property(readonly, nonatomic) _Bool supportsLeaderboards; // @dynamic supportsLeaderboards;

@end

