//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SpringBoard/NSObject-Protocol.h>

@class NSArray, NSString, SBPIPContentViewLayoutSettings, SBPIPInteractionController, SBSystemGestureManager, SBSystemPointerInteractionManager, SBWindowScene, UIPanGestureRecognizer, _UIHyperInteractor;

@protocol SBPIPInteractionControllerDataSource <NSObject>
- (_Bool)shouldPointerInteractionBeginForInteractionController:(SBPIPInteractionController *)arg1;
- (struct UIEdgeInsets)interactionController:(SBPIPInteractionController *)arg1 stashedPaddingForWindowScene:(SBWindowScene *)arg2;
- (struct UIEdgeInsets)interactionController:(SBPIPInteractionController *)arg1 edgeInsetsForWindowScene:(SBWindowScene *)arg2;
- (NSArray *)interactionControllerConnectedWindowScenes:(SBPIPInteractionController *)arg1;
- (void)interactionController:(SBPIPInteractionController *)arg1 updateScaleInteractor:(_UIHyperInteractor *)arg2 pipSize:(struct CGSize)arg3 forPanGesture:(UIPanGestureRecognizer *)arg4;
- (_Bool)interactionControllerScalesDuringPanGesture:(SBPIPInteractionController *)arg1;
- (double)currentCornerRadiusForInteractionController:(SBPIPInteractionController *)arg1;
- (SBSystemPointerInteractionManager *)systemPointerInteractionManagerForInteractionController:(SBPIPInteractionController *)arg1;
- (SBSystemGestureManager *)systemGestureManagerForInteractionControllerResizing:(SBPIPInteractionController *)arg1;
- (NSArray *)defaultPositionHyperregionComposers;
- (SBPIPContentViewLayoutSettings *)layoutSettings;
- (NSString *)debugName;

@optional
- (_Bool)interactionControllerIsExternalPanGestureRecognizing:(SBPIPInteractionController *)arg1;
@end

