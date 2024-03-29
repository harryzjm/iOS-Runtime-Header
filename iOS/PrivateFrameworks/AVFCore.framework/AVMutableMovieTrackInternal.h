//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVWeakReference;
@protocol OS_dispatch_semaphore;

__attribute__((visibility("hidden")))
@interface AVMutableMovieTrackInternal : NSObject
{
    struct OpaqueFigMutableMovie *figMutableMovie;
    int trackID;
    struct OpaqueFigAssetTrack *figAssetTrack;
    NSObject<OS_dispatch_semaphore> *metadataWaitingSemaphore;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack *figAssetTrackNotificationSource;
}

- (void).cxx_destruct;

@end

