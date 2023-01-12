//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>
#import <UIKitCore/_UIButtonConfigurationShim-Protocol.h>

@class NSAttributedString, NSString, UIBackgroundConfiguration, UIColor, UIImage, UIImageSymbolConfiguration, _UIButtonConfigurationStyleBehaviors;

@interface UIButtonConfiguration : NSObject <_UIButtonConfigurationShim, NSCopying, NSSecureCoding>
{
    _UIButtonConfigurationStyleBehaviors *_behaviors;
    NSAttributedString *_resolvedTitle;
    NSAttributedString *_resolvedSubtitle;
    UIColor *_resolvedImageColor;
    UIImageSymbolConfiguration *_resolvedSymbolConfig;
    UIColor *_resolvedActivityIndicatorColor;
    double _resolvedActivityIndicatorSize;
    double _resolvedImageReservation;
    struct {
        unsigned int macIdiomStyle:4;
        unsigned int buttonSize:2;
        unsigned int showsActivityIndicator:1;
        unsigned int useCustomContentInsets:1;
        unsigned int contentInsetsExpansion:3;
        unsigned int titleLineBreakMode:3;
        unsigned int subtitleLineBreakMode:3;
        unsigned int automaticallyUpdateForSelection:1;
        unsigned int resolvedTitleIsOversized:1;
        unsigned int resolvedSubtitleIsOversized:1;
    } _flags;
    UIBackgroundConfiguration *_background;
    long long _cornerStyle;
    UIColor *_baseForegroundColor;
    UIColor *_baseBackgroundColor;
    UIImage *_image;
    CDUnknownBlockType _imageColorTransformer;
    UIImageSymbolConfiguration *_preferredSymbolConfigurationForImage;
    CDUnknownBlockType _activityIndicatorColorTransformer;
    NSAttributedString *_attributedTitle;
    CDUnknownBlockType _titleTextAttributesTransformer;
    NSAttributedString *_attributedSubtitle;
    CDUnknownBlockType _subtitleTextAttributesTransformer;
    unsigned long long _imagePlacement;
    double _imagePadding;
    double _titlePadding;
    long long _titleAlignment;
    double _imageReservation;
    struct NSDirectionalEdgeInsets _contentInsets;
}

+ (_Bool)supportsSecureCoding;
+ (id)borderedProminentButtonConfiguration;
+ (id)borderedTintedButtonConfiguration;
+ (id)borderedButtonConfiguration;
+ (id)borderlessButtonConfiguration;
+ (id)filledButtonConfiguration;
+ (id)grayButtonConfiguration;
+ (id)tintedButtonConfiguration;
+ (id)plainButtonConfiguration;
- (void).cxx_destruct;
@property(nonatomic) double imageReservation; // @synthesize imageReservation=_imageReservation;
@property(nonatomic) long long titleAlignment; // @synthesize titleAlignment=_titleAlignment;
@property(nonatomic) double titlePadding; // @synthesize titlePadding=_titlePadding;
@property(nonatomic) double imagePadding; // @synthesize imagePadding=_imagePadding;
@property(nonatomic) unsigned long long imagePlacement; // @synthesize imagePlacement=_imagePlacement;
@property(copy, nonatomic) CDUnknownBlockType subtitleTextAttributesTransformer; // @synthesize subtitleTextAttributesTransformer=_subtitleTextAttributesTransformer;
@property(copy, nonatomic) NSAttributedString *attributedSubtitle; // @synthesize attributedSubtitle=_attributedSubtitle;
@property(copy, nonatomic) CDUnknownBlockType titleTextAttributesTransformer; // @synthesize titleTextAttributesTransformer=_titleTextAttributesTransformer;
@property(copy, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle=_attributedTitle;
@property(copy, nonatomic) CDUnknownBlockType activityIndicatorColorTransformer; // @synthesize activityIndicatorColorTransformer=_activityIndicatorColorTransformer;
@property(copy, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfigurationForImage; // @synthesize preferredSymbolConfigurationForImage=_preferredSymbolConfigurationForImage;
@property(copy, nonatomic) CDUnknownBlockType imageColorTransformer; // @synthesize imageColorTransformer=_imageColorTransformer;
@property(retain, nonatomic) UIImage *image; // @synthesize image=_image;
@property(retain, nonatomic) UIColor *baseBackgroundColor; // @synthesize baseBackgroundColor=_baseBackgroundColor;
@property(retain, nonatomic) UIColor *baseForegroundColor; // @synthesize baseForegroundColor=_baseForegroundColor;
@property(nonatomic) long long cornerStyle; // @synthesize cornerStyle=_cornerStyle;
@property(retain, nonatomic) UIBackgroundConfiguration *background; // @synthesize background=_background;
- (void)_setSwiftBridgingBackground:(id)arg1;
- (_Bool)_hasObscuringBackground;
- (_Bool)_isRoundButton;
- (_Bool)_hasSymbolImage;
- (_Bool)_hasOversizedSubtitle;
- (_Bool)_hasOversizedTitle;
- (_Bool)_hasMultilineSubtitle;
- (_Bool)_hasMultilineTitle;
- (id)_resolvedActivityIndicatorColor;
- (double)_resolvedActivityIndicatorSize;
- (double)_resolvedImageReservation;
- (id)_resolvedSymbolConfiguration;
- (id)_resolvedImageColor;
- (id)_resolvedImage;
- (long long)_resolvedTitleAlignment;
- (id)_resolvedSubtitle;
- (id)_resolvedTitle;
- (void)_resolveValuesWithButton:(id)arg1;
- (void)_copyValuesFromConfiguration:(id)arg1;
@property(nonatomic) _Bool automaticallyUpdateForSelection;
- (void)setDefaultContentInsets;
@property(nonatomic) struct NSDirectionalEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
@property(nonatomic) long long subtitleLineBreakMode;
@property(copy, nonatomic) NSString *subtitle;
@property(nonatomic) long long titleLineBreakMode;
@property(copy, nonatomic) NSString *title;
@property(nonatomic) _Bool showsActivityIndicator;
- (long long)_resolvedMacIdiomStyle;
@property(nonatomic) long long macIdiomStyle;
@property(nonatomic) long long buttonSize;
- (id)updatedConfigurationForButton:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)_initWithBehaviors:(id)arg1;
- (id)_spiValue;
- (id)_apiValue;
- (id)_updateFromButton:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end
