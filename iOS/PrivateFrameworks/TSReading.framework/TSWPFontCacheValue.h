//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@interface TSWPFontCacheValue : NSObject
{
    struct __CTFont *_ctFont;
}

+ (id)cacheValueWithCTFont:(struct __CTFont *)arg1;
@property(readonly, nonatomic) struct __CTFont *ctFont; // @synthesize ctFont=_ctFont;
- (void)dealloc;
- (id)initWithCTFont:(struct __CTFont *)arg1;

@end

