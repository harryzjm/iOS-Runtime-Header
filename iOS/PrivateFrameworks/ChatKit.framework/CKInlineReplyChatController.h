//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKInlineReplyCollectionViewController, CKInlineReplyTransitionContext, IMMessageItem, NSString, UINavigationBarAppearance, UIVisualEffectView;
@protocol CKInlineReplyInteractionDelegate;

@interface CKInlineReplyChatController
{
    _Bool _animatingIn;
    _Bool _animatingOut;
    _Bool _isInitialLoad;
    _Bool _isInitialSizing;
    _Bool _showNavbarKeyline;
    NSString *_threadIdentifier;
    IMMessageItem *_threadOriginator;
    CKInlineReplyTransitionContext *_transitionContext;
    id <CKInlineReplyInteractionDelegate> _interactionDelegate;
    UIVisualEffectView *_blurView;
    UINavigationBarAppearance *_navBarAppearance;
}

+ (Class)_gradientReferenceViewClass;
+ (Class)transcriptControllerClass;
- (void).cxx_destruct;
@property(retain, nonatomic) UINavigationBarAppearance *navBarAppearance; // @synthesize navBarAppearance=_navBarAppearance;
@property(nonatomic) _Bool showNavbarKeyline; // @synthesize showNavbarKeyline=_showNavbarKeyline;
@property(retain, nonatomic) UIVisualEffectView *blurView; // @synthesize blurView=_blurView;
@property(nonatomic) _Bool isInitialSizing; // @synthesize isInitialSizing=_isInitialSizing;
@property(nonatomic) _Bool isInitialLoad; // @synthesize isInitialLoad=_isInitialLoad;
@property(nonatomic) __weak id <CKInlineReplyInteractionDelegate> interactionDelegate; // @synthesize interactionDelegate=_interactionDelegate;
@property(nonatomic) _Bool animatingOut; // @synthesize animatingOut=_animatingOut;
@property(nonatomic) _Bool animatingIn; // @synthesize animatingIn=_animatingIn;
@property(retain, nonatomic) CKInlineReplyTransitionContext *transitionContext; // @synthesize transitionContext=_transitionContext;
@property(retain, nonatomic) IMMessageItem *threadOriginator; // @synthesize threadOriginator=_threadOriginator;
@property(copy, nonatomic) NSString *threadIdentifier; // @synthesize threadIdentifier=_threadIdentifier;
- (void)stageAssetArchive:(id)arg1 skipShelf:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (id)_visibleGUIDs;
- (id)_imMessageForIMMessageItem:(id)arg1;
- (void)_requestDismissal;
- (void)_setInitialScrollPositionIfNecessary;
- (void)_animateOut;
- (void)_animateIn;
- (double)transcriptCollectionViewController:(id)arg1 targetAlphaForChatItem:(id)arg2;
- (void)transcriptCollectionViewController:(id)arg1 didScroll:(struct CGPoint)arg2;
- (void)transcriptCollectionViewController:(id)arg1 collectionViewContentSizeDidChange:(struct CGSize)arg2;
- (void)transcriptCollectionViewControllerRestingStateDidChange:(id)arg1;
- (void)transcriptCollectionViewControllerChatItemsDidChange:(id)arg1;
- (void)viewDidAppear:(_Bool)arg1;
- (struct CGRect)_initialFrameForCollectionView;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)_navigationBarAppearanceWithKeyline:(_Bool)arg1;
- (id)_defaultTranscriptNavBarAppearance;
- (void)tapGestureRecognized:(id)arg1;
- (void)_didSendCompositionInConversation:(id)arg1;
- (void)sendMessage:(id)arg1 forConversation:(id)arg2 newComposition:(_Bool)arg3;
- (void)sendMessage:(id)arg1 forConversation:(id)arg2 onService:(id)arg3 newComposition:(_Bool)arg4;
- (double)throwAnimationManagerTopHeaderHeight:(id)arg1;
- (double)throwAnimationFinalFrameOffset:(id)arg1;
- (struct UIEdgeInsets)_contentInsetForSendAnimation;
- (void)cleanUpDarkEffectStyle;
- (void)setUpStyleForDarkEffect;
- (void)_updateNavigationUI;
- (void)_saveDraftState;
- (void)_restoreDraftState;
- (void)messageEntryViewDidBeginEditing:(id)arg1;
@property(readonly, nonatomic) CKInlineReplyCollectionViewController *inlineCollectionViewController;
- (void)setIsShowingPreview:(_Bool)arg1;
- (_Bool)getContainerWidth:(double *)arg1 offset:(double *)arg2;
- (long long)targetFirstResponder;
- (void)setTargetFirstResponder:(long long)arg1;
- (_Bool)becomeFirstResponder;
- (void)reloadEntryViewIfNeeded;
- (id)inputController;
- (void)reloadInputViews;
- (id)inputViewController;
- (id)inputAccessoryView;
- (struct CGRect)gradientFrameWithInsets:(struct UIEdgeInsets)arg1;
- (struct UIEdgeInsets)navigationBarInsetsWithoutPalette;
- (struct CGSize)contentSizeForPinning;
- (void)updateScrollGeometry;
- (double)accessoryViewHeight;
- (void)dismissController;
- (_Bool)shouldListParticipantsInTitle;
- (_Bool)isInline;
- (id)initWithConversation:(id)arg1 threadIdentifier:(id)arg2 threadOriginator:(id)arg3 transitionContext:(id)arg4;

@end
