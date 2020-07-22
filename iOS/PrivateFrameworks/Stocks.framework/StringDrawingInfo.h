//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString, UIColor, UIFont;

@interface StringDrawingInfo : NSObject
{
    NSString *_string;
    UIColor *_color;
    UIFont *_font;
    struct CGSize _size;
}

+ (id)stringDrawingInfoWithString:(id)arg1 color:(id)arg2 font:(id)arg3 size:(struct CGSize)arg4;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(retain, nonatomic) UIFont *font; // @synthesize font=_font;
@property(retain, nonatomic) UIColor *color; // @synthesize color=_color;
@property(retain, nonatomic) NSString *string; // @synthesize string=_string;
- (void).cxx_destruct;

@end
