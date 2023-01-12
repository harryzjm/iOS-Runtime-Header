//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;

__attribute__((visibility("hidden")))
@interface _CGFontCacheKey : NSObject
{
    unsigned long long _hash;
    NSURL *_url;
    double _opticalSize;
}

@property(readonly, nonatomic) double opticalSize; // @synthesize opticalSize=_opticalSize;
@property(readonly, nonatomic) NSURL *url; // @synthesize url=_url;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

