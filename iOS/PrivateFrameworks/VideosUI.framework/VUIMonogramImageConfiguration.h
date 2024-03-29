//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface VUIMonogramImageConfiguration : NSObject
{
    long long _style;
    NSString *_firstName;
    NSString *_lastName;
    NSString *_text;
    UIFont *_font;
    UIColor *_bgColor;
    double _diameter;
    double _focusedSizeIncrease;
    UIColor *_textColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *textColor; // @synthesize textColor=_textColor;
@property(nonatomic) double focusedSizeIncrease; // @synthesize focusedSizeIncrease=_focusedSizeIncrease;
@property(nonatomic) double diameter; // @synthesize diameter=_diameter;
@property(retain, nonatomic) UIColor *bgColor; // @synthesize bgColor=_bgColor;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(copy, nonatomic) NSString *text; // @synthesize text=_text;
@property(copy, nonatomic) NSString *lastName; // @synthesize lastName=_lastName;
@property(copy, nonatomic) NSString *firstName; // @synthesize firstName=_firstName;
@property(readonly, nonatomic) long long style; // @synthesize style=_style;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStyle:(long long)arg1;

@end

