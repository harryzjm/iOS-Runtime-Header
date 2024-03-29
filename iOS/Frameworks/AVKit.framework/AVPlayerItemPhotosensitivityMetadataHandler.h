//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPlayerItem, AVPlayerItemMediaDataCollector, AVPlayerItemMetadataCollector, NSArray, NSString;

__attribute__((visibility("hidden")))
@interface AVPlayerItemPhotosensitivityMetadataHandler : NSObject
{
    AVPlayerItemMetadataCollector *_metadataCollector;
    CDUnknownBlockType _handler;
    AVPlayerItem *_item;
    NSArray *_photosensitivityRegions;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) AVPlayerItemMediaDataCollector *metadataCollector; // @synthesize metadataCollector=_metadataCollector;
@property(retain, nonatomic) NSArray *photosensitivityRegions; // @synthesize photosensitivityRegions=_photosensitivityRegions;
- (void)metadataCollector:(id)arg1 didCollectDateRangeMetadataGroups:(id)arg2 indexesOfNewGroups:(id)arg3 indexesOfModifiedGroups:(id)arg4;
- (void)dealloc;
- (id)initWithPlayerItem:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

