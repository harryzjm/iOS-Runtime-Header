//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <ChatKit/CKBrowserViewControllerProtocol-Protocol.h>
#import <ChatKit/CKFullScreenAppViewControllerProtocol-Protocol.h>
#import <ChatKit/UIGestureRecognizerDelegate-Protocol.h>

@class CKBrowserDragManager, CKConversation, CKDismissView, IMBalloonPlugin, IMBalloonPluginDataSource, NSArray, NSData, NSNumber, NSObject, NSString, UIView;
@protocol CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate, CKFullScreenAppViewControllerDelegate, UIViewControllerTransitioningDelegate;

@interface CKFullScreenCardAppViewController : UIViewController <CKBrowserViewControllerProtocol, UIGestureRecognizerDelegate, CKFullScreenAppViewControllerProtocol>
{
    _Bool _inTransition;
    UIViewController<CKBrowserViewControllerProtocol> *_contentViewController;
    id <CKFullScreenAppViewControllerDelegate> _delegate;
    long long _parentModalPresentationStyle;
    id <UIViewControllerTransitioningDelegate> _parentTransitioningDelegate;
    UIView *_contentView;
    CKDismissView *_dismissView;
    CKConversation *_conversation;
    long long _lastKnownDeviceOrientation;
}

@property(nonatomic) long long lastKnownDeviceOrientation; // @synthesize lastKnownDeviceOrientation=_lastKnownDeviceOrientation;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) _Bool inTransition; // @synthesize inTransition=_inTransition;
@property(retain, nonatomic) CKDismissView *dismissView; // @synthesize dismissView=_dismissView;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) __weak id <UIViewControllerTransitioningDelegate> parentTransitioningDelegate; // @synthesize parentTransitioningDelegate=_parentTransitioningDelegate;
@property(readonly, nonatomic) long long parentModalPresentationStyle; // @synthesize parentModalPresentationStyle=_parentModalPresentationStyle;
@property(nonatomic) __weak id <CKFullScreenAppViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *contentViewController; // @synthesize contentViewController=_contentViewController;
- (void).cxx_destruct;
- (_Bool)_shouldShowDimmingView;
- (void)_updateDimmingViewAlpha;
- (_Bool)_currentPluginIsJellyfish;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (_Bool)canBecomeFirstResponder;
- (id)inputAccessoryView;
- (long long)preferredStatusBarStyle;
- (_Bool)shouldAutorotate;
- (unsigned long long)supportedInterfaceOrientations;
- (void)willMoveToParentViewController:(id)arg1;
- (void)dealloc;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (struct CGRect)finalContentViewFrame;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (void)animateBrowserViewToTargetRect:(struct CGRect)arg1 grabberView:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)animateBrowserViewFromSourceRect:(struct CGRect)arg1 interactive:(_Bool)arg2 grabberView:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithConversation:(id)arg1 plugin:(id)arg2;
- (void)_handleRemoteConnectionInterrupted:(id)arg1;
@property(readonly, nonatomic) _Bool inFullScreenModalPresentation;
@property(readonly, nonatomic) _Bool inExpandedPresentation;
- (_Bool)isLoaded;
- (void)dismiss;
- (id)initWithBalloonPlugin:(id)arg1;
- (id)initWithBalloonPlugin:(id)arg1 dataSource:(id)arg2;
@property(readonly, nonatomic) long long browserPresentationStyle;
@property(nonatomic) NSString *conversationID;
@property(nonatomic) _Bool isiMessage;
@property(readonly, nonatomic) _Bool shouldShowChatChrome;
@property(retain, nonatomic) IMBalloonPluginDataSource *balloonPluginDataSource;
@property(readonly, nonatomic) IMBalloonPlugin *balloonPlugin;
@property(nonatomic) __weak NSObject<CKBrowserViewControllerSendDelegate> *sendDelegate;
@property(retain, nonatomic) UIViewController *presentationViewController;
@property(readonly, nonatomic) _Bool shouldSuppressEntryView;
@property(readonly, nonatomic) _Bool mayBeKeptInViewHierarchy;
@property(readonly, nonatomic) _Bool supportsQuickView;
@property(readonly, nonatomic) _Bool wantsOpaqueUI;
@property(readonly, nonatomic) _Bool wantsDarkUI;

// Remaining properties
@property(retain, nonatomic) NSNumber *adamID;
@property(readonly, nonatomic) unsigned long long badgeValue;
@property(readonly, nonatomic) CKBrowserDragManager *browserDragManager;
@property(readonly, nonatomic) _Bool canReplaceDataSource;
@property(retain, nonatomic) NSData *conversationEngramID;
@property(nonatomic) long long currentBrowserConsumer;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly, nonatomic) struct CGRect horizontalSwipeExclusionRect;
@property(nonatomic) _Bool isPrimaryViewController;
@property(retain, nonatomic) NSArray *recipients;
@property(readonly, nonatomic) UIViewController *remoteViewController;
@property(retain, nonatomic) NSString *sender;
@property(readonly) Class superclass;
@property(readonly, nonatomic) _Bool wasExpandedPresentation;

@end

