//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class GKMatchRequest, GKPlayer, NSData, NSString;

@protocol _TtP20GameCenterFoundation33GKGroupActivityMatchmakingSupport_
- (void)showSharePlayMatchDeclinedToJoinAlertWithReason:(long long)arg1;
- (void)sendGroupActivityInviteTo:(GKPlayer *)arg1 participantID:(NSString *)arg2 pushToken:(NSData *)arg3;
@property(nonatomic, readonly) long long inviteeCount;
@property(nonatomic, readonly) long long totalPlayerCount;
@property(nonatomic, readonly) GKMatchRequest *currentMatchRequest;
@end

