//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString, UIFont;

@interface TSUFont : NSObject
{
    struct __CTFont *_ctFont;
}

+ (id)systemFontOfSize:(double)arg1 weight:(double)arg2;
+ (id)italicSystemFontOfSize:(double)arg1;
+ (id)boldSystemFontOfSize:(double)arg1;
+ (id)systemFontOfSize:(double)arg1;
+ (id)fontWithName:(id)arg1 size:(double)arg2;
+ (id)fontWithUIFont:(id)arg1;
@property(readonly, nonatomic) struct __CTFont *CTFont; // @synthesize CTFont=_ctFont;
- (id)convertFontToBold:(_Bool)arg1 italic:(_Bool)arg2;
- (id)fontWithScale:(double)arg1;
- (id)fontWithSize:(double)arg1;
@property(readonly, nonatomic) double lineHeight;
@property(readonly, nonatomic) double xHeight;
@property(readonly, nonatomic) double capHeight;
@property(readonly, nonatomic) double descender;
@property(readonly, nonatomic) double ascender;
@property(readonly, nonatomic) double pointSize;
@property(readonly, retain, nonatomic) NSString *fontName;
@property(readonly, retain, nonatomic) NSString *familyName;
- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont *)arg1;
@property(readonly, nonatomic) UIFont *platformFont;
@property(readonly, nonatomic) UIFont *UIFont;
- (id)initWithUIFont:(id)arg1;

@end

