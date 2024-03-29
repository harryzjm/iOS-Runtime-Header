//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;
@protocol FPCollectionDataSourceDelegate;

__attribute__((visibility("hidden")))
@interface _FPUnionDataSource : NSObject
{
    NSArray *_collections;
    _Bool _isRunning;
    id <FPCollectionDataSourceDelegate> delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <FPCollectionDataSourceDelegate> delegate; // @synthesize delegate;
@property(readonly, nonatomic) _Bool hasMoreIncoming;
- (void)enumerationMightHaveResumed;
- (void)invalidate;
- (void)start;
- (void)dataForCollectionShouldBeReloaded:(id)arg1;
- (void)collection:(id)arg1 didUpdateObservedItem:(id)arg2;
- (void)collection:(id)arg1 didEncounterError:(id)arg2;
- (void)collection:(id)arg1 didUpdateItems:(id)arg2 replaceItemsByFormerID:(id)arg3 deleteItemsWithIDs:(id)arg4;
- (id)initWithCollections:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

