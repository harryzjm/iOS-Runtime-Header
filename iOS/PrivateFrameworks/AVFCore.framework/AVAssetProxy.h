//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "AVAsset.h"

@class AVAssetProxyInternal;

__attribute__((visibility("hidden")))
@interface AVAssetProxy : AVAsset
{
    AVAssetProxyInternal *_assetProxy;
}

+ (id)assetProxyWithPropertyList:(id)arg1;
+ (id)makePropertyListForMovieProxyHeader:(id)arg1 name:(id)arg2;
- (id)tracks;
- (Class)_classForTrackInspectors;
- (id)_assetInspector;
- (id)_assetInspectorLoader;
- (struct OpaqueFigPlaybackItem *)_playbackItem;
- (struct OpaqueFigFormatReader *)_formatReader;
- (struct OpaqueFigAsset *)_figAsset;
- (_Bool)isProxy;
- (void)dealloc;
- (id)initWithPropertyList:(id)arg1;

@end

