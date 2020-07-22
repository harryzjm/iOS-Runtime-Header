//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <UIKit/UIPreviewInteractionDelegatePrivate-Protocol.h>
#import <UIKit/UIViewControllerPreviewing_Internal-Protocol.h>

@class NSString, UIGestureRecognizer, UIPreviewInteraction, UIView, UIViewController;
@protocol UIViewControllerPreviewingDelegate;

__attribute__((visibility("hidden")))
@interface _UIInteractiveHighlightPreviewingContext : NSObject <UIPreviewInteractionDelegatePrivate, UIViewControllerPreviewing_Internal>
{
    UIPreviewInteraction *_previewInteraction;
    UIViewController *_previewViewController;
    id <UIViewControllerPreviewingDelegate> _delegate;
    UIView *_customViewForInteractiveHighlight;
    UIView *_sourceView;
    UIViewController *_viewController;
    struct CGRect _sourceRect;
}

@property(nonatomic) __weak UIViewController *viewController; // @synthesize viewController=_viewController;
@property(retain, nonatomic) UIView *sourceView; // @synthesize sourceView=_sourceView;
@property(retain, nonatomic) UIView *customViewForInteractiveHighlight; // @synthesize customViewForInteractiveHighlight=_customViewForInteractiveHighlight;
@property(nonatomic) struct CGRect sourceRect; // @synthesize sourceRect=_sourceRect;
- (void)setDelegate:(id)arg1;
@property(readonly, nonatomic) id <UIViewControllerPreviewingDelegate> delegate;
- (void).cxx_destruct;
- (void)previewInteractionController:(id)arg1 commitViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 didDismissViewController:(id)arg2 committing:(_Bool)arg3;
- (void)previewInteractionController:(id)arg1 willDismissViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2;
- (void)previewInteractionController:(id)arg1 willPresentViewController:(id)arg2 forLocation:(struct CGPoint)arg3 inSourceView:(id)arg4;
- (id)_preferredHighlightViewForSourceRect:(struct CGRect)arg1 inTableView:(id)arg2;
- (id)_preferredHighlightViewForSourceRect:(struct CGRect)arg1;
- (void)previewInteraction:(id)arg1 didUpdateCommitTransition:(double)arg2 ended:(_Bool)arg3;
- (id)_previewInteraction:(id)arg1 viewControllerPresentationForPresentingViewController:(id)arg2;
- (id)_previewInteractionHighlighterForPreviewTransition:(id)arg1;
- (void)previewInteractionDidCancel:(id)arg1;
- (void)previewInteraction:(id)arg1 didUpdatePreviewTransition:(double)arg2 ended:(_Bool)arg3;
- (_Bool)previewInteractionShouldBegin:(id)arg1;
- (void)unregister;
- (struct CGRect)preferredSourceViewRectInCoordinateSpace:(id)arg1;
@property(readonly, nonatomic) UIGestureRecognizer *previewingGestureRecognizerForFailureRelationship;
- (id)initWithSourceView:(id)arg1 viewController:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

