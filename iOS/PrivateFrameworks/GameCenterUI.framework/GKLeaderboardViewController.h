//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString;
@protocol GKLeaderboardViewControllerDelegate;

@interface GKLeaderboardViewController
{
    id <GKLeaderboardViewControllerDelegate> _leaderboardDelegate;
}

@property(nonatomic) id <GKLeaderboardViewControllerDelegate> leaderboardDelegate; // @synthesize leaderboardDelegate=_leaderboardDelegate;
- (void)notifyDelegateOnWillFinish;
@property(copy, nonatomic) NSString *category;
@property(nonatomic) long long timeScope;
- (id)init;

@end

