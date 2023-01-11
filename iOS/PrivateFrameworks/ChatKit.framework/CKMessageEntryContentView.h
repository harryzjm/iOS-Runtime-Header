//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIScrollView.h>

#import <ChatKit/CKMessageEntryRichTextViewDelegate-Protocol.h>
#import <ChatKit/CKMessageEntryViewStyleProtocol-Protocol.h>
#import <ChatKit/UITextViewDelegate-Protocol.h>

@class CKComposition, CKConversation, CKMessageEntryRichTextView, CKMessageEntryTextView, IMPluginPayload, NSString, UIButton, UIView, UIViewController;
@protocol CKPluginEntryViewController;

@interface CKMessageEntryContentView : UIScrollView <UITextViewDelegate, CKMessageEntryRichTextViewDelegate, CKMessageEntryViewStyleProtocol>
{
    _Bool _shouldShowSubject;
    _Bool _needsTextLayout;
    _Bool _needsEnsureSelectionVisible;
    _Bool _needsEnsureTextViewVisible;
    _Bool _ignoreEndEditing;
    _Bool _isCompositionExpirable;
    _Bool _pendingShelfPayloadWillAnimateIn;
    CKComposition *_composition;
    long long _style;
    CKMessageEntryTextView *_subjectView;
    CKMessageEntryRichTextView *_textView;
    double _placeHolderWidth;
    double _maxContentWidthWhenExpanded;
    double _containerViewLineWidth;
    double _sendButtonTextInsetWidth;
    UIViewController<CKPluginEntryViewController> *_pluginEntryViewController;
    CKConversation *_conversation;
    UIView *_activeView;
    IMPluginPayload *_shelfPluginPayload;
    UIView *_textAndSubjectDividerLine;
    UIView *_pluginDividerLine;
    UIButton *_clearPluginButton;
    NSString *_requestedPlaceholderText;
    NSString *_overridePlaceholderText;
}

+ (id)_createSubjectView;
+ (id)_createTextView;
+ (void)prewarmTextView;
@property(nonatomic) _Bool pendingShelfPayloadWillAnimateIn; // @synthesize pendingShelfPayloadWillAnimateIn=_pendingShelfPayloadWillAnimateIn;
@property(retain, nonatomic) NSString *overridePlaceholderText; // @synthesize overridePlaceholderText=_overridePlaceholderText;
@property(retain, nonatomic) NSString *requestedPlaceholderText; // @synthesize requestedPlaceholderText=_requestedPlaceholderText;
@property(retain, nonatomic) UIButton *clearPluginButton; // @synthesize clearPluginButton=_clearPluginButton;
@property(nonatomic) _Bool isCompositionExpirable; // @synthesize isCompositionExpirable=_isCompositionExpirable;
@property(nonatomic) _Bool ignoreEndEditing; // @synthesize ignoreEndEditing=_ignoreEndEditing;
@property(nonatomic) _Bool needsEnsureTextViewVisible; // @synthesize needsEnsureTextViewVisible=_needsEnsureTextViewVisible;
@property(nonatomic) _Bool needsEnsureSelectionVisible; // @synthesize needsEnsureSelectionVisible=_needsEnsureSelectionVisible;
@property(nonatomic) _Bool needsTextLayout; // @synthesize needsTextLayout=_needsTextLayout;
@property(retain, nonatomic) UIView *pluginDividerLine; // @synthesize pluginDividerLine=_pluginDividerLine;
@property(retain, nonatomic) UIView *textAndSubjectDividerLine; // @synthesize textAndSubjectDividerLine=_textAndSubjectDividerLine;
@property(retain, nonatomic) IMPluginPayload *shelfPluginPayload; // @synthesize shelfPluginPayload=_shelfPluginPayload;
@property(nonatomic) __weak UIView *activeView; // @synthesize activeView=_activeView;
@property(nonatomic) __weak CKConversation *conversation; // @synthesize conversation=_conversation;
@property(retain, nonatomic) UIViewController<CKPluginEntryViewController> *pluginEntryViewController; // @synthesize pluginEntryViewController=_pluginEntryViewController;
@property(nonatomic) double sendButtonTextInsetWidth; // @synthesize sendButtonTextInsetWidth=_sendButtonTextInsetWidth;
@property(nonatomic) double containerViewLineWidth; // @synthesize containerViewLineWidth=_containerViewLineWidth;
@property(nonatomic) double maxContentWidthWhenExpanded; // @synthesize maxContentWidthWhenExpanded=_maxContentWidthWhenExpanded;
@property(nonatomic) double placeHolderWidth; // @synthesize placeHolderWidth=_placeHolderWidth;
@property(retain, nonatomic) CKMessageEntryRichTextView *textView; // @synthesize textView=_textView;
@property(retain, nonatomic) CKMessageEntryTextView *subjectView; // @synthesize subjectView=_subjectView;
@property(nonatomic) _Bool shouldShowSubject; // @synthesize shouldShowSubject=_shouldShowSubject;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (void)clearPluginButtonTapped:(id)arg1;
- (_Bool)shouldLayoutPluginEdgeToEdge;
- (_Bool)shouldShowClearButton;
- (void)_updateUI;
- (void)_layoutDividerLine:(id)arg1 leftInset:(double)arg2 rightInset:(double)arg3 currentYOffset:(double *)arg4;
- (void)_layoutTextView:(id)arg1 currentYOffset:(double *)arg2 originX:(double)arg3 maxWidth:(double)arg4;
- (void)invalidateComposition;
- (void)ensureTextViewVisibleIfNeeded;
- (void)ensureSelectionVisibleIfNeeded;
- (double)_calcuateIdealMaxPluginHeight:(_Bool)arg1;
- (void)plugingPayloadDidLoad:(id)arg1;
- (void)pluginPayloadWantsResize:(id)arg1;
- (void)messageEntryRichTextViewDidTapHandwritingKey:(id)arg1;
- (void)messageEntryRichTextView:(id)arg1 pastedURL:(id)arg2;
- (void)messageEntryRichTextViewWasTapped:(id)arg1 isLongPress:(_Bool)arg2;
- (void)messageEntryRichTextView:(id)arg1 didTapMediaObject:(id)arg2;
- (_Bool)messageEntryRichTextView:(id)arg1 shouldPasteMediaObjects:(id)arg2;
- (double)_maxWidthForTextView;
- (double)maxWidthForPreviewImagesInMessageEntryRichTextView:(id)arg1;
- (void)textViewDidChange:(id)arg1;
- (void)textViewDidEndEditing:(id)arg1;
- (void)textViewDidBeginEditing:(id)arg1;
- (_Bool)textViewShouldBeginEditing:(id)arg1;
- (void)didFinishAnimatedBoundsChange;
- (void)willAnimateBoundsChange;
- (void)acceptAutocorrection;
@property(nonatomic) BOOL balloonColor;
@property(readonly, nonatomic) struct UIEdgeInsets contentTextAlignmentInsets;
@property(readonly, nonatomic, getter=isShowingDictationPlaceholder) _Bool showingDictationPlaceholder;
@property(copy, nonatomic) NSString *placeholderText;
@property(readonly, nonatomic, getter=isSingleLine) _Bool singleLine;
- (_Bool)_shouldDeferUpdateUI;
- (_Bool)makeActive;
@property(readonly, nonatomic, getter=isActive) _Bool active;
@property(readonly, nonatomic) UIView *pluginView;
- (void)prepareForShelfPayloadAnimation;
- (void)configureShelfForPluginPayload:(id)arg1;
@property(retain, nonatomic) CKComposition *composition; // @synthesize composition=_composition;
@property(readonly, nonatomic) _Bool shouldShowPlugin;
- (id)initWithFrame:(struct CGRect)arg1 shouldShowSubject:(_Bool)arg2;
- (void)setFrame:(struct CGRect)arg1;
- (void)setBounds:(struct CGRect)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (void)dealloc;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

