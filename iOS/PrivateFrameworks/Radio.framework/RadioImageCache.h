//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSOperationQueue;

@interface RadioImageCache : NSObject
{
    NSOperationQueue *_imageRequestQueue;
}

+ (struct __CFURLStorageSession *)_newSharedCacheStorageSession;
+ (struct _CFURLCache *)_sharedCFURLCache;
+ (id)sharedCache;
- (void).cxx_destruct;
- (id)_requestForRadioArtwork:(id)arg1;
- (id)_cachedResponseForRequest:(id)arg1;
- (void)_removeAllCachedImages;
- (void)loadImageForStation:(id)arg1 withSize:(struct CGSize)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)loadImageForRadioArtwork:(id)arg1 withCompletionHandler:(CDUnknownBlockType)arg2;
- (id)cachedImageDataForStation:(id)arg1 withExactSize:(struct CGSize)arg2 MIMEType:(id *)arg3;
- (id)cachedImageDataForRadioArtwork:(id)arg1 MIMEType:(id *)arg2;
- (void)dealloc;
- (id)_init;
- (id)init;

@end

