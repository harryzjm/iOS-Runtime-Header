//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSAttributedString, NSString, SAUIAppPunchOut, SAUIConfirmationOptions, UICollectionReusableView, UIColor, UIView;
@protocol SiriUIReusableView, SiriUISnippetViewControllerDelegate;

@interface SiriUISnippetViewController
{
    UICollectionReusableView<SiriUIReusableView> *_headerView;
    UICollectionReusableView<SiriUIReusableView> *_footerView;
    UICollectionReusableView<SiriUIReusableView> *_transparentHeaderView;
    UICollectionReusableView<SiriUIReusableView> *_transparentFooterView;
    _Bool _topKeylineHidden;
    _Bool _wantsConfirmationInsets;
    _Bool _isFullPadWidth;
    _Bool _isTransparent;
    _Bool _loading;
    _Bool _confirmed;
    _Bool _cancelled;
    _Bool _virgin;
    _Bool _willAnimateConfirmation;
    _Bool _willAnimateCancellation;
    _Bool _showHeaderChevron;
    _Bool _provisional;
    UIColor *_titleTextColor;
    UIColor *_titleBackgroundColor;
    NSAttributedString *_attributedSubtitle;
    NSString *_navigationTitle;
    NSArray *_requestContext;
    SAUIAppPunchOut *_headerPunchOut;
    SAUIAppPunchOut *_snippetPunchOut;
    UIView *_containingView;
    long long _defaultKeylineType;
    SAUIConfirmationOptions *_previousConfirmationOptions;
    struct UIEdgeInsets _defaultViewInsets;
}

@property(nonatomic, getter=_isProvisional, setter=_setProvisional:) _Bool provisional; // @synthesize provisional=_provisional;
@property(nonatomic) _Bool showHeaderChevron; // @synthesize showHeaderChevron=_showHeaderChevron;
@property(retain, nonatomic, getter=_previousConfirmationOptions, setter=_setPreviousConfirmationOptions:) SAUIConfirmationOptions *previousConfirmationOptions; // @synthesize previousConfirmationOptions=_previousConfirmationOptions;
@property(nonatomic, getter=_willAnimateCancellation, setter=_setWillAnimateCancellation:) _Bool willAnimateCancellation; // @synthesize willAnimateCancellation=_willAnimateCancellation;
@property(nonatomic, getter=_willAnimateConfirmation, setter=_setWillAnimateConfirmation:) _Bool willAnimateConfirmation; // @synthesize willAnimateConfirmation=_willAnimateConfirmation;
@property(nonatomic) long long defaultKeylineType; // @synthesize defaultKeylineType=_defaultKeylineType;
@property(readonly, nonatomic, getter=isVirgin) _Bool virgin; // @synthesize virgin=_virgin;
@property(nonatomic) __weak UIView *containingView; // @synthesize containingView=_containingView;
@property(nonatomic, getter=isCancelled) _Bool cancelled; // @synthesize cancelled=_cancelled;
@property(nonatomic, getter=isConfirmed) _Bool confirmed; // @synthesize confirmed=_confirmed;
@property(nonatomic, getter=isLoading) _Bool loading; // @synthesize loading=_loading;
@property(nonatomic) _Bool isTransparent; // @synthesize isTransparent=_isTransparent;
@property(nonatomic) _Bool isFullPadWidth; // @synthesize isFullPadWidth=_isFullPadWidth;
@property(nonatomic) _Bool wantsConfirmationInsets; // @synthesize wantsConfirmationInsets=_wantsConfirmationInsets;
@property(nonatomic) struct UIEdgeInsets defaultViewInsets; // @synthesize defaultViewInsets=_defaultViewInsets;
@property(retain, nonatomic) SAUIAppPunchOut *snippetPunchOut; // @synthesize snippetPunchOut=_snippetPunchOut;
@property(retain, nonatomic) SAUIAppPunchOut *headerPunchOut; // @synthesize headerPunchOut=_headerPunchOut;
@property(copy, nonatomic) NSArray *requestContext; // @synthesize requestContext=_requestContext;
@property(copy, nonatomic) NSString *navigationTitle; // @synthesize navigationTitle=_navigationTitle;
@property(nonatomic) _Bool topKeylineHidden; // @synthesize topKeylineHidden=_topKeylineHidden;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(copy, nonatomic) UIColor *titleBackgroundColor; // @synthesize titleBackgroundColor=_titleBackgroundColor;
@property(copy, nonatomic) UIColor *titleTextColor; // @synthesize titleTextColor=_titleTextColor;
- (void).cxx_destruct;
- (void)confirmSnippet;
- (void)confirmButtonTapped:(id)arg1;
- (void)cancelButtonTapped:(id)arg1;
- (void)headerTapped:(id)arg1;
- (void)_snippetPunchOutButtonTapped;
- (id)_createReusableViewIfNeededWithClass:(Class)arg1;
- (id)_transparentFooterView;
- (id)_transparentHeaderView;
- (id)_footerView;
- (id)_headerView;
- (double)desiredHeightForTransparentFooterView;
- (double)desiredHeightForTransparentHeaderView;
- (double)desiredHeightForFooterView;
- (double)desiredHeightForHeaderView;
- (void)configureReusableTransparentFooterView:(id)arg1;
- (void)configureReusableTransparentHeaderView:(id)arg1;
- (void)configureReusableFooterView:(id)arg1;
- (void)configureReusableHeaderView:(id)arg1;
- (void)_cellDidLayoutSubviews;
- (Class)transparentFooterViewClass;
- (Class)transparentHeaderViewClass;
- (Class)footerViewClass;
- (Class)headerViewClass;
@property(copy, nonatomic) NSString *subtitle;
- (_Bool)wantsToManageBackgroundColor;
- (void)setManageBackgroundColor:(_Bool)arg1;
- (void)siriDidLayoutSnippetView;
- (void)siriWillLayoutSnippetView;
- (void)willConfirm;
- (void)willCancel;
- (void)_resumeTouchesIfNecessary;
- (void)_cancelTouchesIfNecessary;
- (id)alternativeAceCommandsToPerformIfNotExposingViews;
- (void)_snippetViewControllerWillBeRemoved;
- (id)_privateDelegate;
- (_Bool)_hasConfirmationButtons;
- (_Bool)_hasConfirmationOrCancelledInsets;
- (long long)_replacementAnimation;
- (long long)_insertionAnimation;
- (long long)_pinAnimationType;
- (void)_setVirgin:(_Bool)arg1;
- (_Bool)logContentsIfApplicable;
@property(readonly, nonatomic, getter=isIndicatingActivity) _Bool indicatingActivity;
- (_Bool)usePlatterStyle;
- (_Bool)isMemoryIntensive;
- (_Bool)removedAfterDialogProgresses;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(nonatomic) __weak id <SiriUISnippetViewControllerDelegate> delegate; // @dynamic delegate;

@end

