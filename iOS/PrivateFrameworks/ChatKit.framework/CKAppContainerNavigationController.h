//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UINavigationController.h>

@class NSString, UIViewController;
@protocol CKBrowserViewControllerProtocol;

__attribute__((visibility("hidden")))
@interface CKAppContainerNavigationController : UINavigationController
{
    UIViewController<CKBrowserViewControllerProtocol> *_browserVC;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIViewController<CKBrowserViewControllerProtocol> *browserVC; // @synthesize browserVC=_browserVC;
- (void)startEditingPayload:(id)arg1 dismiss:(_Bool)arg2;
- (void)startEditingPayload:(id)arg1;
- (void)setLocalUserIsTyping:(_Bool)arg1;
- (void)requestPresentationStyleExpanded:(_Bool)arg1;
- (void)presentAlertWithTitle:(id)arg1 message:(id)arg2 buttonTitle:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (void)openURL:(id)arg1 pluginID:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)openURL:(id)arg1 applicationIdentifier:(id)arg2 pluginID:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)dragControllerTranscriptDelegate;
- (void)dismissToKeyboard:(_Bool)arg1;
- (void)dismissAndReloadInputViews:(_Bool)arg1;
- (void)dismiss;
- (void)commitSticker:(id)arg1 withDragTarget:(id)arg2 draggedSticker:(id)arg3;
- (void)commitSticker:(id)arg1 stickerFrame:(struct CGRect)arg2;
- (void)commitPayload:(id)arg1;
- (void)transitionBrowserToMediumDetent;
- (void)transitionBrowserToLargeDetent;
- (void)_sheetPresentationController:(id)arg1 didChangeIndexOfCurrentDetent:(long long)arg2;
- (void)closeButtonPressed:(id)arg1;
- (id)initWithRemoteViewController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

