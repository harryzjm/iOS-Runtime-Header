//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSAttributedString, NSNumber, NSString, UIColor, UIImage, UIImageSymbolConfiguration;

__attribute__((visibility("hidden")))
@interface UIButtonContent : NSObject
{
    NSString *title;
    NSAttributedString *attributedTitle;
    UIImage *image;
    UIImage *background;
    UIColor *titleColor;
    UIColor *imageColor;
    UIColor *shadowColor;
    NSNumber *drawingStroke;
    UIImageSymbolConfiguration *preferredSymbolConfiguration;
    _Bool isWidthVariant;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageSymbolConfiguration *preferredSymbolConfiguration; // @synthesize preferredSymbolConfiguration;
@property(retain, nonatomic) NSNumber *drawingStroke; // @synthesize drawingStroke;
@property(retain, nonatomic) UIColor *shadowColor; // @synthesize shadowColor;
@property(retain, nonatomic) UIColor *imageColor; // @synthesize imageColor;
@property(retain, nonatomic) UIColor *titleColor; // @synthesize titleColor;
@property(retain, nonatomic) UIImage *background; // @synthesize background;
@property(retain, nonatomic) UIImage *image; // @synthesize image;
@property(retain, nonatomic) NSAttributedString *attributedTitle; // @synthesize attributedTitle;
@property(retain, nonatomic) NSString *title; // @synthesize title;
- (_Bool)updateVariableLengthStringForView:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) _Bool isEmpty; // @dynamic isEmpty;

@end

