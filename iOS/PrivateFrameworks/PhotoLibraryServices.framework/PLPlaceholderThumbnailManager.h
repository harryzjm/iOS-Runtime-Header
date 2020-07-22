//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSCache;
@protocol OS_dispatch_queue;

@interface PLPlaceholderThumbnailManager : NSObject
{
    NSCache *_placeholderDataCache;
    NSCache *_placeholderImageCache;
    NSObject<OS_dispatch_queue> *_isolation;
}

+ (id)sharedManager;
- (id)_placeholderImage;
- (id)newPlaceholderImageForFormat:(int)arg1 photoImageSize:(struct CGSize)arg2;
- (id)placeholderDataForFormat:(int)arg1 photoImageSize:(struct CGSize)arg2 width:(int *)arg3 height:(int *)arg4 bytesPerRow:(int *)arg5 dataWidth:(int *)arg6 dataHeight:(int *)arg7 imageDataOffset:(int *)arg8;
- (id)_cacheKeyForFormat:(id)arg1 photoImageSize:(struct CGSize)arg2;
- (void)dealloc;
- (id)init;

@end

