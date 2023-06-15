//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "UIView.h"

@class NSArray, NSIndexPath, NSMutableArray, NSString, UIKBTree, UIKeyboardEmojiWellView, UIStackView;

__attribute__((visibility("hidden")))
@interface UIKeyboardEmojiFamilyConfigurationView : UIView
{
    double _metachronalRhythmAnimationStartTime;
    _Bool _usesDarkStyle;
    _Bool _hasSplitFontSupport;
    UIView *_touchForwardingView;
    NSMutableArray *_familyMemberStackViews;
    UIView *_separatorView;
    UIStackView *_previewWellStackView;
    UIKeyboardEmojiWellView *_neutralWellView;
    UIKeyboardEmojiWellView *_configuredWellView;
    NSIndexPath *_lastSelectedIndexPath;
    NSString *_baseEmojiString;
    NSMutableArray *_selectedVariantIndices;
    NSArray *_skinToneVariantRows;
    NSArray *_variantDisplayRows;
    UIKBTree *_representedKey;
}

+ (struct CGSize)preferredContentViewSizeForKey:(id)arg1 withTraits:(id)arg2;
+ (id)_selectionAndSeparatorColorForDarkMode:(_Bool)arg1;
- (void).cxx_destruct;
@property(nonatomic) _Bool hasSplitFontSupport; // @synthesize hasSplitFontSupport=_hasSplitFontSupport;
@property(retain, nonatomic) UIKBTree *representedKey; // @synthesize representedKey=_representedKey;
@property(retain, nonatomic) NSArray *variantDisplayRows; // @synthesize variantDisplayRows=_variantDisplayRows;
@property(retain, nonatomic) NSArray *skinToneVariantRows; // @synthesize skinToneVariantRows=_skinToneVariantRows;
@property(retain, nonatomic) NSMutableArray *selectedVariantIndices; // @synthesize selectedVariantIndices=_selectedVariantIndices;
@property(retain, nonatomic) NSString *baseEmojiString; // @synthesize baseEmojiString=_baseEmojiString;
@property(retain, nonatomic) NSIndexPath *lastSelectedIndexPath; // @synthesize lastSelectedIndexPath=_lastSelectedIndexPath;
@property(retain, nonatomic) UIKeyboardEmojiWellView *configuredWellView; // @synthesize configuredWellView=_configuredWellView;
@property(retain, nonatomic) UIKeyboardEmojiWellView *neutralWellView; // @synthesize neutralWellView=_neutralWellView;
@property(retain, nonatomic) UIStackView *previewWellStackView; // @synthesize previewWellStackView=_previewWellStackView;
@property(retain, nonatomic) UIView *separatorView; // @synthesize separatorView=_separatorView;
@property(retain, nonatomic) NSMutableArray *familyMemberStackViews; // @synthesize familyMemberStackViews=_familyMemberStackViews;
@property(nonatomic) _Bool usesDarkStyle; // @synthesize usesDarkStyle=_usesDarkStyle;
@property(retain, nonatomic) UIView *touchForwardingView; // @synthesize touchForwardingView=_touchForwardingView;
- (id)nextResponder;
- (void)updateRenderConfig:(id)arg1;
- (void)updateForKeyplane:(id)arg1 key:(id)arg2;
- (void)retestForTouchUpSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (void)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2;
- (_Bool)retestSelectedVariantIndexForKey:(id)arg1 atPoint:(struct CGPoint)arg2 phase:(long long)arg3;
- (void)layoutSubviews;
- (void)_beginFamilyMetachronalRhythmAnimation;
- (void)_updateReferencedKeySelectedVariantIndexBasedOnCurrentConfiguration;
- (_Bool)_hasCompletelyConfiguredSkinToneConfiguration;
- (void)_updatePreviewWellForCurrentSelection;
- (void)_updateBottomRowForSelections:(id)arg1;
- (void)_setCurrentlySelectedSkinToneConfiguration:(id)arg1;
- (id)_currentlySelectedSkinToneConfiguration;
- (unsigned long long)_silhouetteFromCurrentSelections;
- (id)_wellViewForSection:(long long)arg1 item:(long long)arg2;
- (void)_configureFamilyMemberWellStackViews;
- (void)_configureSkinToneVariantSpecifiersForBaseString:(id)arg1;
- (void)_colorConfigurationDidChange;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

