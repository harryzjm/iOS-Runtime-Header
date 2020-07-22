//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TVMLKit/NSCopying-Protocol.h>

@class NSString, UIColor, UIImage;

@interface TVMonogramViewConfiguration : NSObject <NSCopying>
{
    long long _style;
    double _focusedSizeIncrease;
    UIColor *_unfocusedBgColor;
    UIColor *_focusedBgColor;
    double _unfocusedShadowAlpha;
    double _focusedShadowAlpha;
    UIImage *_unfocusedShadowImage;
    UIImage *_focusedShadowImage;
    NSString *_titleTextStyle;
    UIColor *_titleUnfocusedColor;
    UIColor *_titleFocusedColor;
    NSString *_subtitleTextStyle;
    UIColor *_subtitleUnfocusedColor;
    UIColor *_subtitleFocusedColor;
}

@property(retain, nonatomic) UIColor *subtitleFocusedColor; // @synthesize subtitleFocusedColor=_subtitleFocusedColor;
@property(retain, nonatomic) UIColor *subtitleUnfocusedColor; // @synthesize subtitleUnfocusedColor=_subtitleUnfocusedColor;
@property(copy, nonatomic) NSString *subtitleTextStyle; // @synthesize subtitleTextStyle=_subtitleTextStyle;
@property(retain, nonatomic) UIColor *titleFocusedColor; // @synthesize titleFocusedColor=_titleFocusedColor;
@property(retain, nonatomic) UIColor *titleUnfocusedColor; // @synthesize titleUnfocusedColor=_titleUnfocusedColor;
@property(copy, nonatomic) NSString *titleTextStyle; // @synthesize titleTextStyle=_titleTextStyle;
@property(retain, nonatomic) UIImage *focusedShadowImage; // @synthesize focusedShadowImage=_focusedShadowImage;
@property(retain, nonatomic) UIImage *unfocusedShadowImage; // @synthesize unfocusedShadowImage=_unfocusedShadowImage;
@property(nonatomic) double focusedShadowAlpha; // @synthesize focusedShadowAlpha=_focusedShadowAlpha;
@property(nonatomic) double unfocusedShadowAlpha; // @synthesize unfocusedShadowAlpha=_unfocusedShadowAlpha;
@property(retain, nonatomic) UIColor *focusedBgColor; // @synthesize focusedBgColor=_focusedBgColor;
@property(retain, nonatomic) UIColor *unfocusedBgColor; // @synthesize unfocusedBgColor=_unfocusedBgColor;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) long long style; // @synthesize style=_style;
- (void).cxx_destruct;
@property(readonly, nonatomic) double unfocusedImageAlpha;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithShadowImages:(_Bool)arg1;
- (id)initWithStyle:(long long)arg1;

@end

