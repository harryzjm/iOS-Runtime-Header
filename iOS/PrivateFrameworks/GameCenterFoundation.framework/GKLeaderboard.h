//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GKLeaderboardInternal, GKScore, NSArray, NSString;
@protocol GKLeaderboardDelegate;

@interface GKLeaderboard : NSObject
{
    int _loadingCount;
    struct os_unfair_lock_s _lock;
    long long _timeScope;
    long long _playerScope;
    NSArray *_players;
    NSArray *_scores;
    GKScore *_localPlayerScore;
    id <GKLeaderboardDelegate> _weakDelegate;
    GKLeaderboardInternal *_internal;
    struct _NSRange _range;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)setDefaultLeaderboard:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadLeaderboardsForGame:(id)arg1 withPlayer:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
+ (void)loadLeaderboardWithIdentifier:(id)arg1 forGame:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsForGame:(id)arg1 forSet:(id)arg2 withPlayer:(id)arg3 withCompletionHandler:(CDUnknownBlockType)arg4;
+ (void)loadLeaderboardsWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadCategoriesWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(nonatomic) struct os_unfair_lock_s lock; // @synthesize lock=_lock;
@property(nonatomic) int loadingCount; // @synthesize loadingCount=_loadingCount;
@property(retain) GKLeaderboardInternal *internal; // @synthesize internal=_internal;
@property(retain, nonatomic) GKScore *localPlayerScore; // @synthesize localPlayerScore=_localPlayerScore;
@property(retain, nonatomic) NSArray *scores; // @synthesize scores=_scores;
@property(retain, nonatomic) NSArray *players; // @synthesize players=_players;
@property(nonatomic) long long playerScope; // @synthesize playerScope=_playerScope;
@property(nonatomic) long long timeScope; // @synthesize timeScope=_timeScope;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (void)decrementLoadingCountAtomically;
- (void)incrementLoadingCountAtomically;
- (void)loadScoresForGame:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadScoresForRequest:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (id)scoreRequestForGame:(id)arg1;
- (void)loadScoresWithCompletionHandler:(CDUnknownBlockType)arg1;
@property(readonly, getter=isLoading) _Bool loading; // @dynamic loading;
@property(nonatomic) struct _NSRange range; // @synthesize range=_range;
@property(nonatomic) id <GKLeaderboardDelegate> delegate; // @synthesize delegate=_weakDelegate;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)dealloc;
- (id)initWithPlayerIDs:(id)arg1;
- (id)initWithPlayers:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;

// Remaining properties
@property(copy, nonatomic) NSString *category; // @dynamic category;
@property(readonly, nonatomic) long long friendRank; // @dynamic friendRank;
@property(readonly, nonatomic) long long friendRankCount; // @dynamic friendRankCount;
@property(readonly, retain, nonatomic) NSString *groupIdentifier; // @dynamic groupIdentifier;
@property(copy, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, retain, nonatomic) NSString *localizedTitle; // @dynamic localizedTitle;
@property(readonly, nonatomic) unsigned long long maxRange; // @dynamic maxRange;
@property(readonly, nonatomic) long long overallRank; // @dynamic overallRank;
@property(readonly, nonatomic) long long overallRankCount; // @dynamic overallRankCount;
@property(readonly, copy, nonatomic) NSString *title; // @dynamic title;

@end

