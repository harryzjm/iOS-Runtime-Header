//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <PhotosUICore/PXGAXResponder-Protocol.h>
#import <PhotosUICore/PXTapToRadarDiagnosticProvider-Protocol.h>
#import <PhotosUICore/PXTouchingUIGestureRecognizerDelegate-Protocol.h>
#import <PhotosUICore/UIGestureRecognizerDelegate-Protocol.h>

@class NSString, PXGView, PXStoryFeedViewLayout, PXStoryFeedViewModel, PXStoryTransitionableTungstenViewManager, PXTouchingUIGestureRecognizer;
@protocol PXGAXResponder;

@interface PXStoryFeedView : UIView <UIGestureRecognizerDelegate, PXTouchingUIGestureRecognizerDelegate, PXGAXResponder, PXTapToRadarDiagnosticProvider>
{
    _Bool _isActive;
    id <PXGAXResponder> _axNextResponder;
    PXTouchingUIGestureRecognizer *_touchingGestureRecognizer;
    PXStoryFeedViewLayout *_feedViewLayout;
    CDUnknownBlockType _currentTouchCompletion;
    PXStoryFeedViewModel *_viewModel;
    PXStoryTransitionableTungstenViewManager *_tungstenViewManager;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) PXStoryTransitionableTungstenViewManager *tungstenViewManager; // @synthesize tungstenViewManager=_tungstenViewManager;
@property(readonly, nonatomic) PXStoryFeedViewModel *viewModel; // @synthesize viewModel=_viewModel;
@property(copy, nonatomic) CDUnknownBlockType currentTouchCompletion; // @synthesize currentTouchCompletion=_currentTouchCompletion;
@property(readonly, nonatomic) PXStoryFeedViewLayout *feedViewLayout; // @synthesize feedViewLayout=_feedViewLayout;
@property(readonly, nonatomic) PXTouchingUIGestureRecognizer *touchingGestureRecognizer; // @synthesize touchingGestureRecognizer=_touchingGestureRecognizer;
@property(nonatomic) _Bool isActive; // @synthesize isActive=_isActive;
@property(nonatomic) __weak id <PXGAXResponder> axNextResponder; // @synthesize axNextResponder=_axNextResponder;
- (void)collectTapToRadarDiagnosticsIntoContainer:(id)arg1;
- (void)touchingUIGestureRecognizerWillEndTouching:(id)arg1;
- (void)touchingUIGestureRecognizerWillBeginTouching:(id)arg1;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizerShouldBegin:(id)arg1;
- (void)_handleTouch:(id)arg1;
- (void)_installGestureRecognizers;
- (_Bool)axGroup:(id)arg1 didRequestToPerformAction:(long long)arg2 userInfo:(id)arg3;
- (void)_handleChangeToModifySelectionWithUserInfo:(id)arg1;
- (void)axGroup:(id)arg1 didChange:(unsigned long long)arg2 userInfo:(id)arg3;
- (id)axContainingScrollViewForAXGroup:(id)arg1;
- (void)endTouching;
- (void)beginTouchingAtPoint:(struct CGPoint)arg1;
- (_Bool)handlePrimaryInteractionAtPoint:(struct CGPoint)arg1;
- (id)itemPlacementControllerForItemReference:(id)arg1;
- (id)regionOfInterestForObjectReference:(id)arg1;
@property(readonly, nonatomic) PXGView *tungstenView;
- (id)initWithFrame:(struct CGRect)arg1 configuration:(id)arg2;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
