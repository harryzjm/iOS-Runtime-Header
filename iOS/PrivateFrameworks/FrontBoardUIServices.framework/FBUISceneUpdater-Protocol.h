//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class FBSSceneSettings, FBSSceneTransitionContext, NSSet, UIView;

@protocol FBUISceneUpdater
- (UIView *)contentView;
- (void)sendActions:(NSSet *)arg1;
- (void)updateSettings:(FBSSceneSettings *)arg1 withTransitionContext:(FBSSceneTransitionContext *)arg2 completion:(void (^)(_Bool))arg3;
@end
