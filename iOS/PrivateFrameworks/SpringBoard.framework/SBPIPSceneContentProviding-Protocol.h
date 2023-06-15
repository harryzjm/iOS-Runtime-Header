//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class SBDeviceApplicationSceneHandle, SBLayoutStateTransitionContext, SBPIPContainerViewController, SBWindowScene;

@protocol SBPIPSceneContentProviding <NSObject>
@property(readonly, nonatomic) SBDeviceApplicationSceneHandle *sceneHandle;
- (_Bool)containerViewController:(SBPIPContainerViewController *)arg1 shouldHandleStashingForTransitionContext:(SBLayoutStateTransitionContext *)arg2;
- (void)containerViewControllerDidEndInteraction:(SBPIPContainerViewController *)arg1 targetWindowScene:(SBWindowScene *)arg2;
- (void)containerViewController:(SBPIPContainerViewController *)arg1 didSettleOnStashState:(_Bool)arg2;
- (void)containerViewControllerDidEndSizeChange:(SBPIPContainerViewController *)arg1;
- (void)containerViewControllerWillBeginSizeChange:(SBPIPContainerViewController *)arg1 behavior:(int)arg2;
@end

