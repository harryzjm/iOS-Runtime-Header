//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MediaPlayer/MPAVRoutingViewControllerDelegate-Protocol.h>

@class MPAVRoutingViewController, NSString, UIButton, UIWindow;

@interface MPAVRoutingSheet : UIView <MPAVRoutingViewControllerDelegate>
{
    UIWindow *_presentationWindow;
    UIView *_backgroundView;
    UIButton *_dismissBackgroundButton;
    UIButton *_dismissControlsViewButton;
    UIView *_controlsView;
    UIButton *_cancelButton;
    MPAVRoutingViewController *_routingViewController;
    CDUnknownBlockType _completionHandler;
    _Bool _mirroringOnly;
}

@property(nonatomic) _Bool mirroringOnly; // @synthesize mirroringOnly=_mirroringOnly;
- (void).cxx_destruct;
- (struct CGSize)_maxRoutingViewSize;
- (struct CGRect)_controlsViewFrame;
- (struct CGRect)_cancelButtonFrame;
- (struct CGRect)_routingViewFrame;
- (void)_updateDismissButtonText;
- (void)_updateRoutingSheetFrame;
- (void)_animateControls:(_Bool)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)_cancelButtonAction:(id)arg1;
- (void)routingViewControllerDidShowAirPlayDebugScreen:(id)arg1;
- (void)routingViewControllerDidUpdateContents:(id)arg1;
- (void)routingViewController:(id)arg1 didPickRoute:(id)arg2;
- (void)dismiss;
- (void)showInView:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (void)tintColorDidChange;
- (void)layoutSubviews;
@property(nonatomic, setter=setAVItemType:) long long avItemType;
- (void)dealloc;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)initWithAVItemType:(long long)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

