//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIColor.h>

@class NSString;

@interface UIColor (IC)
+ (id)ic_colorFromString:(id)arg1;
+ (id)ic_notePreviewBackgroundLightContent:(_Bool)arg1;
+ (id)ic_gridThumbnailBackgroundLightContent:(_Bool)arg1;
+ (id)ic_lightAttachmentBackground;
+ (id)ic_attachmentBackground;
+ (id)ic_imageFromColor:(id)arg1 size:(struct CGSize)arg2;
+ (id)ICUnknownInlineAttachmentTextColor;
+ (id)ICMentionUnconfirmedColor;
+ (id)ICMentionAllColor;
+ (id)ICHashtagColor;
+ (id)ICHashtagUnconfirmedColor;
+ (id)ICLearnMoreLinkColor;
+ (id)ICLearnMoreButtonPressedColor;
+ (id)ICLearnMoreButtonUnpressedColor;
+ (id)ICFindInNoteHighlightColor;
+ (id)ICListStatusIndicatorColor;
+ (id)ICTodoButtonAccentColor;
+ (id)ICGrayTodoButtonHighlightColor;
+ (id)ICGrayTodoButtonColor;
+ (id)ICSelectedAttachmentBrickHighlightColor;
+ (id)ICTintColor;
+ (id)ICGroupedBackgroundColor;
+ (id)ICBackgroundColor;
+ (id)preferredDefaultFontColor;
+ (id)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 unitAlpha:(double)arg4;
+ (id)ic_colorWith256Red:(double)arg1 green:(double)arg2 blue:(double)arg3 alpha:(double)arg4;
+ (id)ic_attachmentBackgroundForTraitCollection:(id)arg1;
+ (id)ic_dynamicWhiteBlackColor;
+ (id)ICListTitleTextColor;
+ (id)ICDefaultFindBarColor;
+ (id)ICShareActionBackgroundColor;
+ (id)ICMoveActionBackgroundColor;
+ (id)ICNoteEditorToolbarColor;
+ (id)ICTintedSelectionColor;
+ (id)ICExtractedDocumentViewControllerBackgroundColor;
+ (id)ICPinActionColor;
+ (id)ICPasswordProtectActionColor;
+ (id)ic_darkerAccessibilityColorForColor:(id)arg1;
+ (id)ICDarkenedTintColor;
+ (id)icaxHueNameForValue:(double)arg1;
+ (id)ic_notesDefaultTextColor;
+ (id)ic_notesAppYellowColor;
- (id)ic_colorBlendedWithColor:(id)arg1 fraction:(double)arg2;
- (id)ic_colorBlendedWithColor:(id)arg1;
@property(readonly, nonatomic) _Bool ic_isWhite;
@property(readonly, nonatomic) _Bool ic_isBlack;
@property(readonly, copy, nonatomic) NSString *ic_colorString;
@property(readonly, copy, nonatomic) UIColor *ic_resolvedColor;
- (id)_icaxColorDescriptionForHue:(id)arg1 saturation:(id)arg2 lightness:(id)arg3;
@property(readonly, nonatomic) NSString *icaxDescriptionWithLuma;
- (id)icaxSaturationModifier;
- (id)icaxLightnessModifier;
- (id)icaxHueName;
@property(readonly, nonatomic) NSString *icaxApproximateColorDescription;
@property(readonly, nonatomic) double icaxLuma;
- (double)icaxSaturation;
- (double)icaxHue;
@property(retain, nonatomic, setter=_icaxSetCachedApproximateColorDescription:) NSString *_icaxCachedApproximateColorDescription;

// Remaining properties
@property(readonly, nonatomic) double alphaComponent;
@end

