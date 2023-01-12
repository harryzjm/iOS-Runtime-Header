//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/SBHViewControllerTransitionAnimating-Protocol.h>

@class SBFTouchPassThroughView, SBHPeopleWidgetPersonDetailInteractionSettings;

@interface SBHPeopleWidgetPersonDetailZoomAnimator : NSObject <SBHViewControllerTransitionAnimating>
{
    SBHPeopleWidgetPersonDetailInteractionSettings *_settings;
    SBFTouchPassThroughView *_matchMoveView;
    SBFTouchPassThroughView *_sourceContainerView;
    long long _currentEndpoint;
    struct CGRect _sourceContentFrameInMatchMoveViewSpace;
    struct CGRect _targetContentFrameInMatchMoveViewSpace;
}

- (void).cxx_destruct;
@property(nonatomic) long long currentEndpoint; // @synthesize currentEndpoint=_currentEndpoint;
@property(nonatomic) struct CGRect targetContentFrameInMatchMoveViewSpace; // @synthesize targetContentFrameInMatchMoveViewSpace=_targetContentFrameInMatchMoveViewSpace;
@property(nonatomic) struct CGRect sourceContentFrameInMatchMoveViewSpace; // @synthesize sourceContentFrameInMatchMoveViewSpace=_sourceContentFrameInMatchMoveViewSpace;
@property(retain, nonatomic) SBFTouchPassThroughView *sourceContainerView; // @synthesize sourceContainerView=_sourceContainerView;
@property(retain, nonatomic) SBFTouchPassThroughView *matchMoveView; // @synthesize matchMoveView=_matchMoveView;
@property(readonly, nonatomic) SBHPeopleWidgetPersonDetailInteractionSettings *settings; // @synthesize settings=_settings;
- (void)_configureForEndpoint:(long long)arg1 context:(id)arg2 inMode:(long long)arg3 completion:(CDUnknownBlockType)arg4;
- (void)finalizeAnimationAtEndpoint:(long long)arg1 withContext:(id)arg2;
- (void)animateToEndpoint:(long long)arg1 withContext:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)prepareToAnimateFromEndpoint:(long long)arg1 withContext:(id)arg2;
- (id)init;

@end
