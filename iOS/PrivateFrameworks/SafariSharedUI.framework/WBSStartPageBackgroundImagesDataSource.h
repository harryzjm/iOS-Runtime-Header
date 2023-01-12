//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSMutableDictionary, NSURL;
@protocol OS_dispatch_queue;

@interface WBSStartPageBackgroundImagesDataSource : NSObject
{
    NSObject<OS_dispatch_queue> *_imageLoadingQueue;
    NSObject<OS_dispatch_queue> *_imageSavingQueue;
    NSArray *_defaultImageURLs;
    NSArray *_imageURLsWithLuminance;
    NSMutableDictionary *_pendingImageThumbnailRequests;
    struct Vector<WTF::RetainPtr<CGImage *>, 0, WTF::CrashOnOverflow, 16, WTF::FastMalloc> _imageCache;
    NSURL *_thumbnailsPath;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (long long)indexOfBackgroundImageWithName:(id)arg1;
- (RetainPtr_c27edd19)_createThumbnail:(id)arg1 imageSource:(RetainPtr_36f90b78)arg2;
- (id)_thumbnailURLWithItemIndex:(long long)arg1;
- (id)imageURLAndLuminanceWithItemIndex:(long long)arg1;
- (void)imageThumbnailWithItemIndex:(long long)arg1 completion:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) long long itemCount;
- (id)initWithBundle:(id)arg1 localCachesDirectory:(id)arg2;
- (id)initWithBuiltInImageURLs:(id)arg1 localCachesDirectory:(id)arg2;

@end
