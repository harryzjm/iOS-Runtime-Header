//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIView, UIViewController, _UIAsyncInvocation, _UITextDragCaretView;
@protocol UIKeyboardMediaControllerDelegate;

__attribute__((visibility("hidden")))
@interface UIKeyboardMediaController : NSObject
{
    UIViewController *_remoteCardViewController;
    _UIAsyncInvocation *_remoteCardViewControllerRequest;
    UIViewController *_recentlyUsedMediaViewController;
    _UIAsyncInvocation *_recentlyUsedMediaViewControllerRequest;
    UIView *_targetViewAwaitingRecents;
    _Bool _hasRequestedRecentlyUsedMediaViewController;
    unsigned long long _viewServiceTerminationCount;
    _UITextDragCaretView *_dropCaret;
    _Bool _shouldRetryFetchingRecents;
    id <UIKeyboardMediaControllerDelegate> _delegate;
}

+ (id)sharedKeyboardMediaController;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool shouldRetryFetchingRecents; // @synthesize shouldRetryFetchingRecents=_shouldRetryFetchingRecents;
@property(nonatomic) __weak id <UIKeyboardMediaControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)draggedStickerToPoint:(struct CGPoint)arg1;
- (void)requestInsertionPointCompletion:(CDUnknownBlockType)arg1;
- (void)stickerPickerCardDidLoad;
- (_Bool)_stickerIsSupportedPayload;
- (_Bool)remoteHandlesRecentsStickerDonation;
- (void)remoteHandlesRecentsStickerDonationWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)_didInsertMedia;
- (void)stageStickerWithIdentifier:(id)arg1 representations:(id)arg2 name:(id)arg3 externalURI:(id)arg4 accessibilityLabel:(id)arg5;
- (void)stageSticker:(id)arg1;
- (void)stageStickerWithFileHandle:(id)arg1 url:(id)arg2 accessibilityLabel:(id)arg3;
- (void)pasteImageAtFileHandle:(id)arg1;
- (void)dismissCard;
- (void)_didPresentCard;
- (void)_instantiateCardFromViewService;
- (void)dismissCardAnimated;
- (void)presentCard;
- (void)viewServiceDidTerminateWithError:(id)arg1;
- (void)_tearDownRemoteViews;
- (void)_displayiMessageAppWithID:(id)arg1;
- (void)_keyboardDidChangeFrame:(id)arg1;
- (void)dismissCardIfNeeded;
- (void)_instantiateViewServiceRecentlyUsedMediaWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)prefetchRecentsViewControllerWithCompletion:(CDUnknownBlockType)arg1;
- (void)releaseRecentlyUsedMediaViewIfNeeded;
- (void)showRecentlyUsedMediaInView:(id)arg1;
- (void)_embedRecentlyUsedMediaViewInView:(id)arg1 animated:(_Bool)arg2;
- (_Bool)recentsViewWillBeVisible;
- (_Bool)shouldPrefetchRemoteView;
- (void)handleStickerSuggestionWithTISticker:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

