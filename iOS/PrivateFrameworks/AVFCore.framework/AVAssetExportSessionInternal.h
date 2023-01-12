//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAsset, AVAudioMix, AVCustomVideoCompositorSession, AVMetadataItemFilter, AVVideoComposition, NSArray;

__attribute__((visibility("hidden")))
@interface AVAssetExportSessionInternal : NSObject
{
    struct OpaqueFigAssetExportSession *figExportSession;
    AVAsset *asset;
    AVAudioMix *audioMix;
    unsigned long long audioTrackGroupHandling;
    void *figVideoCompositor;
    AVCustomVideoCompositorSession *customVideoCompositorSession;
    AVVideoComposition *videoComposition;
    NSArray *metadata;
    AVMetadataItemFilter *metadataItemFilter;
    CDUnknownBlockType handler;
}

@end

