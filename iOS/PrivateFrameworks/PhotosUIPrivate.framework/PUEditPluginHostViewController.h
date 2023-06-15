//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSNumber, NSString, PUEditPlugin, PUEditingExtensionUndoProxyHostSide, UIBarButtonItem;
@protocol NSCopying, PUEditPluginHostViewControllerDataSource, PUEditPluginHostViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUEditPluginHostViewController : UIViewController
{
    _Bool _extensionDidBeginContentEditing;
    _Bool _didHandleCancel;
    _Bool _didHandleDone;
    _Bool _showUndoRedoButtons;
    PUEditPlugin *_plugin;
    id <PUEditPluginHostViewControllerDataSource> _dataSource;
    id <PUEditPluginHostViewControllerDelegate> _delegate;
    UIViewController *_remoteViewController;
    id <NSCopying> _request;
    id _disablingIdleTimerToken;
    NSNumber *_allowsFullScreen;
    PUEditingExtensionUndoProxyHostSide *_undoProxy;
    UIBarButtonItem *_undoBarButtonItem;
    UIBarButtonItem *_redoBarButtonItem;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool showUndoRedoButtons; // @synthesize showUndoRedoButtons=_showUndoRedoButtons;
@property(nonatomic) __weak UIBarButtonItem *redoBarButtonItem; // @synthesize redoBarButtonItem=_redoBarButtonItem;
@property(nonatomic) __weak UIBarButtonItem *undoBarButtonItem; // @synthesize undoBarButtonItem=_undoBarButtonItem;
@property(retain, nonatomic) PUEditingExtensionUndoProxyHostSide *undoProxy; // @synthesize undoProxy=_undoProxy;
@property(retain, nonatomic) NSNumber *allowsFullScreen; // @synthesize allowsFullScreen=_allowsFullScreen;
@property(retain, nonatomic) id disablingIdleTimerToken; // @synthesize disablingIdleTimerToken=_disablingIdleTimerToken;
@property(nonatomic) _Bool didHandleDone; // @synthesize didHandleDone=_didHandleDone;
@property(nonatomic) _Bool didHandleCancel; // @synthesize didHandleCancel=_didHandleCancel;
@property(nonatomic) _Bool extensionDidBeginContentEditing; // @synthesize extensionDidBeginContentEditing=_extensionDidBeginContentEditing;
@property(copy) id <NSCopying> request; // @synthesize request=_request;
@property(retain) UIViewController *remoteViewController; // @synthesize remoteViewController=_remoteViewController;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <PUEditPluginHostViewControllerDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(readonly, nonatomic) PUEditPlugin *plugin; // @synthesize plugin=_plugin;
- (void)handleRedoButton:(id)arg1;
- (void)handleUndoButton:(id)arg1;
- (void)setUndoEnabled:(_Bool)arg1 redoEnabled:(_Bool)arg2;
- (void)setShowUndoRedo:(_Bool)arg1;
- (void)_setupUndoProxy;
- (void)_endDisablingIdleTimerIfNecessary;
- (void)_beginDisablingIdleTimer;
- (void)_handleDoneButton:(id)arg1;
- (void)_handleCancel;
- (void)_handleCancelButton:(id)arg1;
- (_Bool)prepareForDismissingForced:(_Bool)arg1;
- (void)_updateBarButtonsWithUndoRedoVisible:(_Bool)arg1;
- (void)_dismiss;
- (id)_extensionVendorProxy;
- (id)_hostContext;
- (void)_addRemoteViewControllerIfNeededAllowingFullscreen:(_Bool)arg1;
- (void)_beginContentEditingWithCompletionHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)_queryShouldShowCancelConfirmationWithResponseHandler:(CDUnknownBlockType)arg1 timeout:(double)arg2;
- (void)queryHandlingCapabilityForAdjustmentData:(id)arg1 withResponseHandler:(CDUnknownBlockType)arg2 timeout:(double)arg3;
- (void)_handleVendorVersion:(unsigned int)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_queryAllowsFullScreen:(CDUnknownBlockType)arg1;
- (void)loadRemoteViewControllerWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (_Bool)prefersStatusBarHidden;
- (void)loadView;
- (void)dealloc;
- (id)initWithPlugin:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

