//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LPPointUnit, LPTextViewStyle, UIColor;

__attribute__((visibility("hidden")))
@interface LPTapToLoadViewStyle : NSObject
{
    UIColor *_backgroundColor;
    UIColor *_tapHighlightColor;
    LPTextViewStyle *_caption;
    LPPointUnit *_width;
    LPPointUnit *_height;
}

- (void).cxx_destruct;
@property(retain, nonatomic) LPPointUnit *height; // @synthesize height=_height;
@property(retain, nonatomic) LPPointUnit *width; // @synthesize width=_width;
@property(readonly, nonatomic) LPTextViewStyle *caption; // @synthesize caption=_caption;
@property(retain, nonatomic) UIColor *tapHighlightColor; // @synthesize tapHighlightColor=_tapHighlightColor;
@property(retain, nonatomic) UIColor *backgroundColor; // @synthesize backgroundColor=_backgroundColor;
- (id)initWithPlatform:(long long)arg1;

@end
