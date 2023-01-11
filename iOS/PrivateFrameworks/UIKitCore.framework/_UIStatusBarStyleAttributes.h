//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <UIKitCore/NSCopying-Protocol.h>
#import <UIKitCore/NSSecureCoding-Protocol.h>

@class NSArray, UIColor, UIFont, UITraitCollection;

@interface _UIStatusBarStyleAttributes : NSObject <NSSecureCoding, NSCopying>
{
    long long _style;
    long long _mode;
    UITraitCollection *_traitCollection;
    long long _effectiveLayoutDirection;
    double _iconScale;
    UIFont *_font;
    UIFont *_emphasizedFont;
    UIFont *_smallFont;
    UIColor *_textColor;
    UIColor *_imageTintColor;
    UIColor *_imageDimmedTintColor;
    NSArray *_imageNamePrefixes;
}

+ (id)overriddenStyleAttributes;
+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSArray *imageNamePrefixes; // @synthesize imageNamePrefixes=_imageNamePrefixes;
@property(copy, nonatomic) UIColor *imageDimmedTintColor; // @synthesize imageDimmedTintColor=_imageDimmedTintColor;
@property(copy, nonatomic) UIColor *imageTintColor; // @synthesize imageTintColor=_imageTintColor;
@property(copy, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(copy, nonatomic) UIFont *smallFont; // @synthesize smallFont=_smallFont;
@property(copy, nonatomic) UIFont *emphasizedFont; // @synthesize emphasizedFont=_emphasizedFont;
@property(copy, nonatomic) UIFont *font; // @synthesize font=_font;
@property(nonatomic) double iconScale; // @synthesize iconScale=_iconScale;
@property(nonatomic) long long effectiveLayoutDirection; // @synthesize effectiveLayoutDirection=_effectiveLayoutDirection;
@property(copy, nonatomic) UITraitCollection *traitCollection; // @synthesize traitCollection=_traitCollection;
@property(readonly, nonatomic) long long mode; // @synthesize mode=_mode;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
- (id)styleAttributesWithOverrides:(id)arg1;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (id)initWithStatusBar:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end
