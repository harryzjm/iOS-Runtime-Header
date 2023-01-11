//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class BSUIMappedImageCache, NSCache;

@interface NTKSiderealCache : NSObject
{
    NSCache *_dataCache;
    BSUIMappedImageCache *_imageCache;
}

+ (id)sharedCache;
- (void).cxx_destruct;
- (id)gradientData:(CDUnknownBlockType)arg1;
- (id)waypointViewImage:(CDUnknownBlockType)arg1;
- (id)dialViewImage:(CDUnknownBlockType)arg1;
- (void)purgeCachedKey:(id)arg1;
- (void)_purgeEverything;
- (id)_init;

@end
