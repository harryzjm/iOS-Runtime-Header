//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <LinkPresentation/CAAnimationDelegate-Protocol.h>
#import <LinkPresentation/LPComponentViewDelegate-Protocol.h>
#import <LinkPresentation/LPTapToLoadViewDelegate-Protocol.h>
#import <LinkPresentation/LPThemeClient-Protocol.h>
#import <LinkPresentation/UIContextMenuInteractionDelegate-Protocol.h>
#import <LinkPresentation/UIGestureRecognizerDelegate-Protocol.h>

@class LPAnimationMaskView, LPCaptionBarPresentationProperties, LPCaptionButtonPresentationProperties, LPImage, LPImagePresentationProperties, LPInlineMediaPlaybackInformation, LPLinkMetadata, LPLinkViewComponents, LPTheme, LPVideo, NSArray, NSHashTable, NSMutableArray, NSString, NSURL, UIColor, UIContextMenuInteraction;
@protocol LPLinkViewDelegate;

@interface LPLinkView : UIView <UIContextMenuInteractionDelegate, UIGestureRecognizerDelegate, CAAnimationDelegate, LPComponentViewDelegate, LPTapToLoadViewDelegate, LPThemeClient>
{
    unsigned int _loggingID;
    NSHashTable *_pendingMetadataProviders;
    LPLinkMetadata *_metadata;
    NSArray *_multipleMetadata;
    NSArray *_multipleURLs;
    LPTheme *_theme;
    NSMutableArray *_tapGestureRecognizers;
    NSMutableArray *_highlightGestureRecognizers;
    UIView *_captionHighlightView;
    UIView *_mediaHighlightView;
    _Bool _isPreliminary;
    long long _style;
    LPCaptionBarPresentationProperties *_captionBar;
    LPCaptionBarPresentationProperties *_mediaTopCaptionBar;
    LPCaptionBarPresentationProperties *_mediaBottomCaptionBar;
    LPCaptionButtonPresentationProperties *_captionButton;
    NSString *_quotedText;
    LPImage *_image;
    LPImagePresentationProperties *_imageProperties;
    NSArray *_alternateImages;
    LPVideo *_video;
    UIColor *_backgroundColor;
    UIColor *_overrideBackgroundColor;
    LPInlineMediaPlaybackInformation *_inlinePlaybackInformation;
    double _minimumHeight;
    NSString *_domainNameForIndicator;
    LPLinkViewComponents *_components;
    LPLinkViewComponents *_componentsForSizing;
    UIView *_contentView;
    UIView *_animationView;
    LPAnimationMaskView *_animationMaskView;
    UIContextMenuInteraction *_contextMenuInteraction;
    _Bool _hasEverBuilt;
    _Bool _needsRebuild;
    _Bool _usesDeferredLayout;
    _Bool _shouldAnimateDuringNextBuild;
    _Bool _hasValidPresentationProperties;
    _Bool _hasSetDisableHighlightGesture;
    _Bool _hasSetDisablePreviewGesture;
    _Bool _mayReceiveAdditionalMetadata;
    _Bool _usesComputedPresentationProperties;
    _Bool _asynchronouslyLoadingMetadataFields;
    _Bool _metadataIsComplete;
    _Bool _disableAnimations;
    _Bool _needsMessagesTranscriptPushCounterAnimation;
    _Bool _disableTapGesture;
    _Bool _disableHighlightGesture;
    _Bool _disablePreviewGesture;
    _Bool _disableAutoPlay;
    _Bool _allowsLoadingMediaWithAutoPlayDisabled;
    _Bool _disablePlayback;
    _Bool _disablePlaybackControls;
    _Bool _allowsTapToLoad;
    _Bool _forceFlexibleWidth;
    _Bool _applyCornerRadius;
    long long _animationOrigin;
    NSURL *_overrideURL;
    unsigned long long _preferredSizeClass;
    NSString *_sourceBundleIdentifier;
    id <LPLinkViewDelegate> _delegate;
    NSURL *_URL;
    struct UIEdgeInsets _textSafeAreaInset;
    struct UIEdgeInsets _contentInset;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(nonatomic) struct UIEdgeInsets contentInset; // @synthesize contentInset=_contentInset;
@property(nonatomic) __weak id <LPLinkViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic, setter=_setSourceBundleIdentifier:) NSString *_sourceBundleIdentifier; // @synthesize _sourceBundleIdentifier;
@property(nonatomic, setter=_setPreferredSizeClass:) unsigned long long _preferredSizeClass; // @synthesize _preferredSizeClass;
@property(retain, nonatomic, setter=_setOverrideURL:) NSURL *_overrideURL; // @synthesize _overrideURL;
@property(nonatomic, setter=_setTextSafeAreaInset:) struct UIEdgeInsets _textSafeAreaInset; // @synthesize _textSafeAreaInset;
@property(nonatomic, setter=_setApplyCornerRadius:) _Bool _applyCornerRadius; // @synthesize _applyCornerRadius;
@property(nonatomic, setter=_setForceFlexibleWidth:) _Bool _forceFlexibleWidth; // @synthesize _forceFlexibleWidth;
@property(nonatomic, setter=_setUsesDeferredLayout:) _Bool _usesDeferredLayout; // @synthesize _usesDeferredLayout;
@property(nonatomic, setter=_setAllowsTapToLoad:) _Bool _allowsTapToLoad; // @synthesize _allowsTapToLoad;
@property(nonatomic, setter=_setAnimationOrigin:) long long _animationOrigin; // @synthesize _animationOrigin;
@property(nonatomic, setter=_setDisablePlaybackControls:) _Bool _disablePlaybackControls; // @synthesize _disablePlaybackControls;
@property(nonatomic, setter=_setDisablePlayback:) _Bool _disablePlayback; // @synthesize _disablePlayback;
@property(nonatomic, setter=_setAllowsLoadingMediaWithAutoPlayDisabled:) _Bool _allowsLoadingMediaWithAutoPlayDisabled; // @synthesize _allowsLoadingMediaWithAutoPlayDisabled;
@property(nonatomic, setter=_setDisableAutoPlay:) _Bool _disableAutoPlay; // @synthesize _disableAutoPlay;
@property(nonatomic, setter=_setDisableTapGesture:) _Bool _disableTapGesture; // @synthesize _disableTapGesture;
@property(nonatomic, setter=_setNeedsMessagesTranscriptPushCounterAnimation:) _Bool _needsMessagesTranscriptPushCounterAnimation; // @synthesize _needsMessagesTranscriptPushCounterAnimation;
@property(nonatomic, setter=_setDisableAnimations:) _Bool _disableAnimations; // @synthesize _disableAnimations;
- (void)contextMenuInteraction:(id)arg1 willDisplayMenuForConfiguration:(id)arg2 animator:(id)arg3;
- (id)contextMenuInteraction:(id)arg1 configurationForMenuAtLocation:(struct CGPoint)arg2;
- (void)_uninstallPreviewGestureRecognizer;
- (void)_installPreviewGestureRecognizer;
- (void)_openURLAllowingSensitiveSchemes:(_Bool)arg1 allowingAssociatedApplications:(_Bool)arg2;
- (_Bool)_isUsingAppClipPresentation;
- (void)tapToLoadViewWasTapped:(id)arg1;
- (void)_captionBarButtonPressed:(id)arg1;
- (void)_captionTapRecognized:(id)arg1;
- (void)_mediaTapRecognized:(id)arg1;
- (void)_captionHighlightRecognized:(id)arg1;
- (void)_mediaHighlightRecognized:(id)arg1;
- (void)_setHighlightCaption:(_Bool)arg1;
- (void)_setHighlightMedia:(_Bool)arg1;
- (void)_cancelActiveHighlight;
- (void)_didScroll;
- (_Bool)gestureRecognizer:(id)arg1 shouldRequireFailureOfGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 canPreventGestureRecognizer:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldReceiveTouch:(id)arg2;
- (_Bool)gestureRecognizer:(id)arg1 shouldRecognizeSimultaneouslyWithGestureRecognizer:(id)arg2;
- (void)_addHighlightRecognizerToView:(id)arg1 forMedia:(_Bool)arg2;
- (void)_addTapRecognizerToView:(id)arg1 forMedia:(_Bool)arg2;
@property(nonatomic, setter=_setDisablePreviewGesture:) _Bool _disablePreviewGesture; // @synthesize _disablePreviewGesture;
@property(nonatomic, setter=_setDisableHighlightGesture:) _Bool _disableHighlightGesture; // @synthesize _disableHighlightGesture;
- (void)_rebuildGestureRecognizersIfNeeded;
- (void)_uninstallTapGestureRecognizers;
- (void)_uninstallHighlightGestureRecognizers;
- (void)_installTapGestureRecognizers;
- (void)_installHighlightGestureRecognizers;
@property(readonly, nonatomic) struct CGRect _primaryCaptionBarFrame;
- (struct CGSize)_layoutLinkViewForSize:(struct CGSize)arg1 applyingLayout:(_Bool)arg2;
- (long long)componentView:(id)arg1 allowedImageFilterForFilter:(long long)arg2;
- (void)componentViewDidChangeIntrinsicContentSize:(id)arg1;
- (id)_createDomainNameIndicator;
- (id)_createQuotedTextView;
- (id)_createMediaView;
- (id)_videoViewConfiguration;
- (id)_createTapToLoadView;
- (id)_createMediaBottomCaptionBarView;
- (id)_createMediaTopCaptionBarView;
- (id)_createCaptionBar;
- (void)_invalidateLayout;
- (void)_layoutLinkView;
- (_Bool)_shouldUseAnimations;
- (void)_rebuildSubviewsWithAnimation:(_Bool)arg1;
- (id)_createComponents;
- (void)animateBackgroundColor;
- (void)setSuppressMask:(_Bool)arg1;
- (void)animateFromOldFrame:(struct CGRect)arg1 oldMediaBackgroundFrame:(struct CGRect)arg2 oldCaptionBarView:(id)arg3;
- (void)_setMaskImage:(id)arg1;
- (void)animateInViews;
- (void)animationDidStop:(id)arg1 finished:(_Bool)arg2;
- (void)animateOutAndRemoveViews;
- (unsigned long long)_edgesPropagatingSafeAreaInsetsToDescendants;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (struct CGSize)intrinsicContentSize;
- (void)layoutSubviews;
@property(readonly, nonatomic) long long _style;
- (void)_setPresentationProperties:(id)arg1;
- (void)_computePresentationPropertiesFromMetadataIfNeeded;
- (void)_updateMetadataIsComplete;
- (void)_invalidatePresentationProperties;
- (void)_setAction:(CDUnknownBlockType)arg1 withText:(id)arg2;
- (void)set_preferredSizeClass:(unsigned long long)arg1;
- (void)_setMultipleMetadata:(id)arg1;
- (void)_setMetadata:(id)arg1 isFinal:(_Bool)arg2;
@property(copy, nonatomic) LPLinkMetadata *metadata;
- (void)_setMetadataInternal:(id)arg1;
- (void)themeParametersDidChange;
- (void)_setupView;
- (void)_fetchMetadata;
- (id)_fetchMetadataForURL:(id)arg1 withSubresources:(_Bool)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)_configureWithoutLoadingMetadataFromURLs:(id)arg1;
- (_Bool)_shouldClipAnimationView;
- (_Bool)_shouldApplyCornerRadius;
- (void)_commonInitWithURL:(id)arg1;
- (id)initWithPresentationProperties:(id)arg1 URL:(id)arg2;
- (id)initWithPresentationProperties:(id)arg1;
- (id)initWithURL:(id)arg1;
- (id)_initWithMultipleMetadata:(id)arg1;
- (id)initWithMetadata:(id)arg1;
- (id)_initWithMetadataLoadedFromURLs:(id)arg1;
- (id)initWithMetadataLoadedFromURL:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
