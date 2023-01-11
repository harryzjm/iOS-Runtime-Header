//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/MPAVQueueCoordinating-Protocol.h>

@class MPAVItem, NSArray, NSString;
@protocol MFPlaybackStackController><MFQueueManagement;

@interface MPCMediaFoundationQueueCoordinator : NSObject <MPAVQueueCoordinating>
{
    id <MFPlaybackStackController><MFQueueManagement> _playbackStackController;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <MFPlaybackStackController><MFQueueManagement> playbackStackController; // @synthesize playbackStackController=_playbackStackController;
- (void)reset;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
@property(readonly, nonatomic) NSArray *items;
@property(nonatomic) _Bool shouldDeferItemLoading;
@property(nonatomic) _Bool shouldExpectEmptyQueue;
@property(readonly, nonatomic) MPAVItem *currentItem;
- (id)initWithStackController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
