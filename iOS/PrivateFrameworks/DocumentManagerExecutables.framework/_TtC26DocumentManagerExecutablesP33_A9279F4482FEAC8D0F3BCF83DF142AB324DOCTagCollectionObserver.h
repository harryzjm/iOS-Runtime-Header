//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

@interface _TtC26DocumentManagerExecutablesP33_A9279F4482FEAC8D0F3BCF83DF142AB324DOCTagCollectionObserver : NSObject
{
    MISSING_TYPE *gatheringKeyPath;
    MISSING_TYPE *serialQueue;
    MISSING_TYPE *group;
    MISSING_TYPE *spotlightQueryTimeout;
    MISSING_TYPE *collection;
    MISSING_TYPE *finishedGathering;
    MISSING_TYPE *collectionObservationContext;
}

- (void).cxx_destruct;
- (id)init;
- (void)collection:(id)arg1 didPerformBatchUpdateWithReplayBlock:(CDUnknownBlockType)arg2;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateItemsAtIndexPaths:(id)arg2 changes:(id)arg3;
- (void)collection:(id)arg1 didDeleteItemsAtIndexPaths:(id)arg2;
- (void)collection:(id)arg1 didMoveItemsFromIndexPaths:(id)arg2 toIndexPaths:(id)arg3;
- (void)collection:(id)arg1 didInsertItemsAtIndexPaths:(id)arg2;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;

@end

