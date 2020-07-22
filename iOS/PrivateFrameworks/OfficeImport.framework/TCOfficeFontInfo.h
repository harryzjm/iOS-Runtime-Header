//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface TCOfficeFontInfo : NSObject
{
    _Bool _isBold;
    _Bool _isItalic;
    NSString *_fontName;
    NSString *_alphaFontName;
}

+ (id)officeFontInfoWithFontName:(id)arg1 alphaFontName:(id)arg2 isBold:(_Bool)arg3 isItalic:(_Bool)arg4;
@property(readonly, nonatomic) _Bool isItalic; // @synthesize isItalic=_isItalic;
@property(readonly, nonatomic) _Bool isBold; // @synthesize isBold=_isBold;
@property(readonly, nonatomic) NSString *alphaFontName; // @synthesize alphaFontName=_alphaFontName;
@property(readonly, nonatomic) NSString *fontName; // @synthesize fontName=_fontName;
- (id)description;
- (void)dealloc;
- (id)initWithFontName:(id)arg1 alphaFontName:(id)arg2 isBold:(_Bool)arg3 isItalic:(_Bool)arg4;

@end

