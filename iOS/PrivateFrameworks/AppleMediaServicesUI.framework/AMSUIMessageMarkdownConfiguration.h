//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSParagraphStyle, UIColor, UIFont;

__attribute__((visibility("hidden")))
@interface AMSUIMessageMarkdownConfiguration : NSObject
{
    UIColor *_color;
    UIFont *_font;
    NSParagraphStyle *_paragraphStyle;
    UIColor *_strikeThroughColor;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIColor *strikeThroughColor; // @synthesize strikeThroughColor=_strikeThroughColor;
@property(retain, nonatomic) NSParagraphStyle *paragraphStyle; // @synthesize paragraphStyle=_paragraphStyle;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
- (id)initWithColor:(id)arg1 font:(id)arg2;

@end

