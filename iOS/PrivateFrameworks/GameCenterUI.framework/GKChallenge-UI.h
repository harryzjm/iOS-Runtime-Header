//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <GameCenterFoundation/GKChallenge.h>

@interface GKChallenge (UI)
+ (id)tooManyPlayersAlertController;
+ (id)challengesNotSupportedAlertController;
- (id)iconURLString;
- (id)smallIconURLString;
- (id)iconSource;
- (id)detailFromText;
- (id)detailGoalText;
- (id)composeGoalText;
- (id)listGoalText;
- (id)listTitleText;
- (id)alertGoalText;
- (void)loadImageWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)loadBannerImageWithHandler:(CDUnknownBlockType)arg1;
- (void)loadImageWithSource:(id)arg1 URLString:(id)arg2 withHandler:(CDUnknownBlockType)arg3;
@end

