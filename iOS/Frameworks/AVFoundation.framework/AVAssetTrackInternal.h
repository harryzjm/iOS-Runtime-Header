//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrackInspector, AVWeakReference;

__attribute__((visibility("hidden")))
@interface AVAssetTrackInternal : NSObject
{
    AVWeakReference *weakReferenceToSelf;
    AVAssetTrackInspector *trackInspector;
    AVWeakReference *assetWeakReference;
    AVWeakReference *figAssetTrackNotificationListenerWeakReference;
    struct OpaqueFigAssetTrack *figAssetTrackNotificationSource;
}

@end

