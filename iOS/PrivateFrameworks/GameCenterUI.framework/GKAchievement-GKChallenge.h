//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKAchievement.h>

@interface GKAchievement (GKChallenge)
+ (void)reportAchievements:(id)arg1 withEligibleChallenges:(id)arg2 withCompletionHandler:(CDUnknownBlockType)arg3;
- (void)selectChallengeablePlayers:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)selectChallengeablePlayerIDs:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)issueChallengeToPlayers:(id)arg1 message:(id)arg2;
- (id)challengeComposeControllerWithPlayers:(id)arg1 message:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)challengeComposeControllerWithMessage:(id)arg1 players:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
@end

