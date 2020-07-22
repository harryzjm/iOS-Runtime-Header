//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVPlayerItemMetadataCollectorInternal, NSObject;
@protocol AVPlayerItemMetadataCollectorPushDelegate, OS_dispatch_queue;

@interface AVPlayerItemMetadataCollector
{
    AVPlayerItemMetadataCollectorInternal *_metadataCollectorInternal;
}

@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *delegateQueue;
@property(readonly, nonatomic) __weak id <AVPlayerItemMetadataCollectorPushDelegate> delegate;
- (void)setDelegate:(id)arg1 queue:(id)arg2;
- (void)finalize;
- (void)dealloc;
- (id)initWithIdentifiers:(id)arg1 classifyingLabels:(id)arg2;
- (id)init;
- (void)_updateTaggedRangeMetadataArray:(id)arg1;
- (id)_getFilteredMetadataGroups:(id)arg1 fromIdentifiers:(id)arg2 andClassifyingLabels:(id)arg3 modifiedIndexesOut:(id *)arg4 newIndexesOut:(id *)arg5;
- (_Bool)_isAttachedToPlayerItem;
- (void)_detatchFromPlayerItem;
- (_Bool)_attachToPlayerItem:(id)arg1;

@end

