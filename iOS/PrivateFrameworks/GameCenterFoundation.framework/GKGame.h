//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GameCenterFoundation/NSCoding-Protocol.h>
#import <GameCenterFoundation/NSSecureCoding-Protocol.h>

@class GKGameInternal, GKStoreItemInternal, NSDictionary, NSNumber, NSString;

@interface GKGame : NSObject <NSCoding, NSSecureCoding>
{
    GKGameInternal *_internal;
    long long _environment;
}

+ (_Bool)instancesRespondToSelector:(SEL)arg1;
+ (id)instanceMethodSignatureForSelector:(SEL)arg1;
+ (void)updateGames:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (void)loadTopGamesWithCompletionHandler:(CDUnknownBlockType)arg1;
+ (void)loadGamesWithBundleIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
+ (_Bool)supportsSecureCoding;
+ (void)setCurrentGameFromInternal:(id)arg1 serverEnvironment:(long long)arg2;
+ (id)currentGameIncludingGameCenter:(_Bool)arg1;
+ (id)currentGame;
+ (_Bool)isGameCenter;
+ (_Bool)isPreferences;
@property long long environment; // @synthesize environment=_environment;
@property(retain) GKGameInternal *internal; // @synthesize internal=_internal;
@property(readonly, nonatomic, getter=isDownloading) _Bool downloading;
@property(readonly, nonatomic, getter=isInstalled) _Bool installedGame;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (_Bool)respondsToSelector:(SEL)arg1;
- (id)methodSignatureForSelector:(SEL)arg1;
- (id)forwardingTargetForSelector:(SEL)arg1;
- (_Bool)isStoreItemUnexpired;
@property(readonly, nonatomic) struct GKGameInfo gameInfo;
@property(readonly, nonatomic) NSString *cacheKey;
@property(readonly, nonatomic) NSDictionary *gameDescriptor;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;
- (id)initWithInternalRepresentation:(id)arg1;
- (_Bool)isGameCenter;
- (void)loadTellAFriendMessageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)getFriendPlayersForAchievement:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getFriendPlayersForLeaderboard:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)getFriendPlayersIncludingCompatibleGames:(_Bool)arg1 handler:(CDUnknownBlockType)arg2;
- (void)submitRating:(float)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)loadGameRatingWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, nonatomic) NSNumber *adamID; // @dynamic adamID;
@property(readonly, nonatomic) NSString *bundleIdentifier; // @dynamic bundleIdentifier;
@property(readonly, nonatomic) NSString *bundleVersion; // @dynamic bundleVersion;
@property(readonly, nonatomic) NSString *defaultCategory; // @dynamic defaultCategory;
@property(readonly, nonatomic) NSNumber *externalVersion; // @dynamic externalVersion;
@property(readonly, nonatomic) NSString *name; // @dynamic name;
@property(nonatomic) unsigned char platform; // @dynamic platform;
@property(nonatomic, getter=isPrerendered) _Bool prerendered; // @dynamic prerendered;
@property(retain, nonatomic) GKStoreItemInternal *storeItem; // @dynamic storeItem;
@property(readonly, nonatomic) _Bool supportsMultiplayer; // @dynamic supportsMultiplayer;
@property(readonly, nonatomic) _Bool supportsTurnBasedMultiplayer; // @dynamic supportsTurnBasedMultiplayer;

@end

