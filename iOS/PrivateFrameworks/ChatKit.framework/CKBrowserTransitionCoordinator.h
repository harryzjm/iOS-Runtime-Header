//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <ChatKit/CKFullScreenAppViewControllerDelegate-Protocol.h>

@class CKConversation, CKFullScreenAppViewController, CKPresentationControllerWindow, NSString, UIViewController, UIWindow;
@protocol CKBrowserTransitionCoordinatorDelegate, CKBrowserViewControllerProtocol, CKBrowserViewControllerSendDelegate;

@interface CKBrowserTransitionCoordinator : NSObject <CKFullScreenAppViewControllerDelegate>
{
    _Bool _expanded;
    _Bool _underTest;
    id <CKBrowserTransitionCoordinatorDelegate> _delegate;
    long long _currentConsumer;
    CKFullScreenAppViewController *_fullscreenViewController;
    UIViewController *_presentingViewController;
    CKConversation *_conversation;
    id <CKBrowserViewControllerSendDelegate> _sendDelegate;
    UIViewController<CKBrowserViewControllerProtocol> *_currentBrowser;
    CKPresentationControllerWindow *_appWindow;
    UIWindow *_previousKeyWindow;
    long long _lastTransitionReason;
    struct CGRect _cachedCompactFrame;
}

@property(nonatomic) long long lastTransitionReason; // @synthesize lastTransitionReason=_lastTransitionReason;
@property(nonatomic) struct CGRect cachedCompactFrame; // @synthesize cachedCompactFrame=_cachedCompactFrame;
@property(nonatomic) __weak UIWindow *previousKeyWindow; // @synthesize previousKeyWindow=_previousKeyWindow;
@property(retain, nonatomic) CKPresentationControllerWindow *appWindow; // @synthesize appWindow=_appWindow;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *currentBrowser; // @synthesize currentBrowser=_currentBrowser;
@property(nonatomic) _Bool underTest; // @synthesize underTest=_underTest;
@property(nonatomic) __weak id <CKBrowserViewControllerSendDelegate> sendDelegate; // @synthesize sendDelegate=_sendDelegate;
@property(retain, nonatomic) CKConversation *conversation; // @synthesize conversation=_conversation;
@property(nonatomic) __weak UIViewController *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
@property(retain, nonatomic) CKFullScreenAppViewController *fullscreenViewController; // @synthesize fullscreenViewController=_fullscreenViewController;
@property(nonatomic, getter=isExpanded) _Bool expanded; // @synthesize expanded=_expanded;
@property(nonatomic) long long currentConsumer; // @synthesize currentConsumer=_currentConsumer;
@property(nonatomic) __weak id <CKBrowserTransitionCoordinatorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)setExpanded:(_Bool)arg1 withReason:(long long)arg2;
- (void)fullscreenAppViewControllerDidTransitionFromOrientation:(long long)arg1 toOrientation:(long long)arg2;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppManager:(id)arg1;
- (void)fullscreenAppViewControllerSwitcherDidSelectAppStore:(id)arg1;
- (void)fullscreenAppViewController:(id)arg1 hasUpdatedLastTouchDate:(id)arg2;
- (void)fullscreenAppViewController:(id)arg1 wantsToSwitchToPlugin:(id)arg2;
- (void)fullscreenAppViewControllerWantsToCollapse:(id)arg1;
- (void)dismissCurrentFullscreenBrowserAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)presentCurrentBrowserFullscreenAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionCurrentBrowserToCollapsedPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)transitionCurrentBrowserToExpandedPresentationAnimated:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)releaseOwnershipOfBrowserForConsumer:(long long)arg1;
- (id)requestOwnershipOfBrowserForConsumer:(long long)arg1;
- (_Bool)updateBrowserSessionForPlugin:(id)arg1 datasource:(id)arg2;
- (_Bool)isHostingRemoteKeyboardView;
@property(readonly, nonatomic) _Bool wasCurrentBrowserExpanded;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

