//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <PhotoLibrary/NSObject-Protocol.h>

@class PLCachedImage, PLImageLoadingQueue, PLImageSource, PLManagedAsset;

@protocol PLImageLoadingQueueDelegate <NSObject>
- (void)imageLoadingQueue:(PLImageLoadingQueue *)arg1 didLoadImage:(PLCachedImage *)arg2 forAsset:(PLManagedAsset *)arg3 fromSource:(PLImageSource *)arg4;
@end

