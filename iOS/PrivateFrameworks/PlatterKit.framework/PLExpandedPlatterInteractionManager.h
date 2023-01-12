//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PlatterKit/UIContextMenuInteractionDelegate_Private-Protocol.h>

@class NSString, UIContextMenuInteraction, UIViewController;
@protocol PLExpandedPlatterInteractionHosting, PLExpandedPlatterInteractionManagerDelegate;

@interface PLExpandedPlatterInteractionManager : NSObject <UIContextMenuInteractionDelegate_Private>
{
    UIContextMenuInteraction *_contextMenuInteraction;
    CDUnknownBlockType _cachedCompletion;
    struct {
        unsigned int delegateImplementsIdentifier:1;
        unsigned int delegateImplementsContentViewController:1;
        unsigned int delegateImplementsMenu:1;
        unsigned int delegateImplementsShouldBeginInteraction:1;
        unsigned int delegateImplementsWillPresentContent:1;
        unsigned int delegateImplementsShouldCommitInteraction:1;
        unsigned int delegateImplementsShouldAllowInitialSwipeToDismiss:1;
        unsigned int delegateImplementsWillDismissContent:1;
        unsigned int delegateImplementsShouldAllowLongPressGesture:1;
    } _expandedPlatterInteractionManagerDelegateFlags;
    _Bool _initialPanOccurred;
    UIViewController<PLExpandedPlatterInteractionHosting> *_presentingViewController;
    id <PLExpandedPlatterInteractionManagerDelegate> _delegate;
}

+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PLExpandedPlatterInteractionManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) __weak UIViewController<PLExpandedPlatterInteractionHosting> *presentingViewController; // @synthesize presentingViewController=_presentingViewController;
- (void)_setPresentingViewControllerHighlighted:(_Bool)arg1 animated:(_Bool)arg2;
- (id)_contextMenuConfigurationIdentifier;
- (id)_identifier;
- (unsigned long long)_activationMethodForContextMenuInteraction:(id)arg1;
- (void)_contextMenuInteraction:(id)arg1 shouldPresentWithCompletion:(CDUnknownBlockType)arg2;
- (_Bool)_contextMenuInteractionShouldAllowSwipeToDismiss:(id)arg1;
- (id)_contextMenuInteraction:(id)arg1 styleForMenuWithConfiguration:(id)arg2;
- (void)contextMenuInteraction:(id)arg1 willEndForConfiguration:(id)arg2 animator:(id)arg3;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 previewForHighlightingMenuWithConfiguration:(id)arg2;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
@property(readonly, nonatomic, getter=reachedForceThreshold) _Bool reachedForceThreshold;
- (void)dismiss;
- (void)updateVisibleMenuWithBlock:(CDUnknownBlockType)arg1;
- (void)presentAtLocation:(struct CGPoint)arg1 completion:(CDUnknownBlockType)arg2;
- (id)initWithPresentingViewController:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
