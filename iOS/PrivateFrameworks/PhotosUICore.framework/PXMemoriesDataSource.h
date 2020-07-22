//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSObject, PXMemoriesDataSourceState;
@protocol OS_dispatch_queue;

@interface PXMemoriesDataSource
{
    NSObject<OS_dispatch_queue> *_queue;
    PXMemoriesDataSourceState *__state;
}

@property(readonly, nonatomic) PXMemoriesDataSourceState *_state; // @synthesize _state=__state;
- (void).cxx_destruct;
- (struct PXSimpleIndexPath)indexPathForObjectReference:(id)arg1;
- (id)memoryInfoAtItemIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)memoryEntryInfoAtSectionIndexPath:(struct PXSimpleIndexPath)arg1;
- (id)objectAtIndexPath:(struct PXSimpleIndexPath)arg1;
- (long long)numberOfItemsInSection:(long long)arg1;
- (long long)numberOfSections;
- (id)initWithState:(id)arg1;

@end
