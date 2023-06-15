//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAssetTrack, AVOutputSettings, AVWeakReference, NSString;

__attribute__((visibility("hidden")))
@interface AVAssetReaderTrackOutputInternal : NSObject
{
    AVAssetTrack *track;
    AVOutputSettings *outputSettings;
    NSString *audioTimePitchAlgorithm;
    _Bool appliesPreferredTrackTransform;
    _Bool limitsImageQueueCapacityToOneFrame;
    AVWeakReference *weakReferenceToAttachedAdaptor;
}

@end

