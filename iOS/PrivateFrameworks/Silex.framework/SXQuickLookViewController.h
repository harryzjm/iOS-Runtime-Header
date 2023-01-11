//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <Silex/SXQuickLookEventHandlerDelegate-Protocol.h>

@class NFStateMachine, NFStateMachineState, NSString, UIButton, UIImageView, UILabel;
@protocol SXQuickLookEventHandler, SXQuickLookRenderer;

@interface SXQuickLookViewController : UIViewController <SXQuickLookEventHandlerDelegate>
{
    id <SXQuickLookEventHandler> _eventHandler;
    id <SXQuickLookRenderer> _renderer;
    NFStateMachine *_stateMachine;
    NFStateMachineState *_loadingState;
    NFStateMachineState *_presentingState;
    NFStateMachineState *_errorState;
    UIImageView *_thumbnailImageView;
    UIButton *_thumbnailControl;
    UILabel *_errorLabel;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILabel *errorLabel; // @synthesize errorLabel=_errorLabel;
@property(readonly, nonatomic) UIButton *thumbnailControl; // @synthesize thumbnailControl=_thumbnailControl;
@property(readonly, nonatomic) UIImageView *thumbnailImageView; // @synthesize thumbnailImageView=_thumbnailImageView;
@property(readonly, nonatomic) NFStateMachineState *errorState; // @synthesize errorState=_errorState;
@property(readonly, nonatomic) NFStateMachineState *presentingState; // @synthesize presentingState=_presentingState;
@property(readonly, nonatomic) NFStateMachineState *loadingState; // @synthesize loadingState=_loadingState;
@property(readonly, nonatomic) NFStateMachine *stateMachine; // @synthesize stateMachine=_stateMachine;
@property(readonly, nonatomic) id <SXQuickLookRenderer> renderer; // @synthesize renderer=_renderer;
@property(readonly, nonatomic) id <SXQuickLookEventHandler> eventHandler; // @synthesize eventHandler=_eventHandler;
- (void)showThumbnailErrorWithMessage:(id)arg1;
- (void)showThumbnailImage:(id)arg1;
- (void)handleTap;
- (id)createErrorState;
- (id)createPresentingState;
- (id)createLoadingState;
- (void)configureStateMachine;
- (void)viewDidLayoutSubviews;
- (void)viewDidAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)initWithEventHandler:(id)arg1 renderer:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
