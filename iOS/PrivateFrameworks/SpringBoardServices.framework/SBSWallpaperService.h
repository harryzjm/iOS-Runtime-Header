//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SBSWallpaperClient;
@protocol OS_dispatch_queue;

@interface SBSWallpaperService : NSObject
{
    SBSWallpaperClient *_client;
    NSObject<OS_dispatch_queue> *_callbackQueue;
    _Bool _wasInvalidated;
}

- (void).cxx_destruct;
- (void)fetchThumbnailForVariant:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)invalidate;
- (void)dealloc;
- (id)init;

@end

