//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ICLRUCache, NSMapTable;
@protocol OS_dispatch_source;

@interface ICImageLRUCache : NSObject
{
    unsigned long long _bigImageCacheCount;
    unsigned long long _smallImageCacheCount;
    unsigned long long _imagePixelThreshold;
    ICLRUCache *_bigImageCache;
    ICLRUCache *_smallImageCache;
    NSMapTable *_weakImageMap;
    NSObject<OS_dispatch_source> *_memoryWarningEventSource;
}

@property(retain, nonatomic) NSObject<OS_dispatch_source> *memoryWarningEventSource; // @synthesize memoryWarningEventSource=_memoryWarningEventSource;
@property(readonly) NSMapTable *weakImageMap; // @synthesize weakImageMap=_weakImageMap;
@property(readonly) ICLRUCache *smallImageCache; // @synthesize smallImageCache=_smallImageCache;
@property(readonly) ICLRUCache *bigImageCache; // @synthesize bigImageCache=_bigImageCache;
@property(readonly, nonatomic) unsigned long long imagePixelThreshold; // @synthesize imagePixelThreshold=_imagePixelThreshold;
@property(readonly, nonatomic) unsigned long long smallImageCacheCount; // @synthesize smallImageCacheCount=_smallImageCacheCount;
@property(readonly, nonatomic) unsigned long long bigImageCacheCount; // @synthesize bigImageCacheCount=_bigImageCacheCount;
- (void).cxx_destruct;
- (void)receivedMemoryWarning;
- (void)unregisterForMemoryWarnings;
- (void)registerForMemoryWarnings;
- (void)dealloc;
- (struct UIImage *)objectForKey:(id)arg1;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id)arg1;
- (void)setObject:(struct UIImage *)arg1 forKey:(id)arg2;
- (id)initWithBigImageCount:(unsigned long long)arg1 smallImageCount:(unsigned long long)arg2 pixelThreshold:(unsigned long long)arg3;

@end

