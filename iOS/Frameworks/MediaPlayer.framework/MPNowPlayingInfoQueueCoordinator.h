//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlayer/MPAVQueueCoordinating-Protocol.h>

@class MPAVItem, NSArray, NSString;
@protocol MPAVQueueCoordinatingDataSource;

@interface MPNowPlayingInfoQueueCoordinator : NSObject <MPAVQueueCoordinating>
{
    _Bool _shouldExpectEmptyQueue;
    _Bool _shouldDeferItemLoading;
    MPAVItem *_currentItem;
    NSArray *_items;
    id <MPAVQueueCoordinatingDataSource> _dataSource;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <MPAVQueueCoordinatingDataSource> dataSource; // @synthesize dataSource=_dataSource;
@property(nonatomic) _Bool shouldDeferItemLoading; // @synthesize shouldDeferItemLoading=_shouldDeferItemLoading;
@property(nonatomic) _Bool shouldExpectEmptyQueue; // @synthesize shouldExpectEmptyQueue=_shouldExpectEmptyQueue;
@property(readonly, nonatomic) NSArray *items; // @synthesize items=_items;
@property(readonly, nonatomic) MPAVItem *currentItem; // @synthesize currentItem=_currentItem;
- (void)reloadItemsKeepingCurrentItem:(_Bool)arg1;
- (void)reset;
- (id)initWithDataSource:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
