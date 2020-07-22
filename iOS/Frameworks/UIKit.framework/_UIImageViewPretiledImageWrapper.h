//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIImage, _UIImageViewPretiledImageCacheKey;

__attribute__((visibility("hidden")))
@interface _UIImageViewPretiledImageWrapper : NSObject
{
    UIImage *_pretiledImage;
    _UIImageViewPretiledImageCacheKey *_cacheKey;
}

+ (id)cacheValueWithPretiledImage:(id)arg1 cacheKey:(id)arg2;
@property(readonly, nonatomic) UIImage *pretiledImage; // @synthesize pretiledImage=_pretiledImage;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)dealloc;

@end

