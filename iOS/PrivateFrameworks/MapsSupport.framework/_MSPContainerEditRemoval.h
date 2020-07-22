//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapsSupport/MSPContainerEditRemoval-Protocol.h>

@class NSArray, NSIndexSet, NSString;

__attribute__((visibility("hidden")))
@interface _MSPContainerEditRemoval <MSPContainerEditRemoval>
{
    NSArray *_originalObjects;
    NSArray *_removedImmutableObjects;
    NSIndexSet *_indexesOfRemovedObjects;
}

@property(readonly, nonatomic) NSIndexSet *indexesOfRemovedObjects; // @synthesize indexesOfRemovedObjects=_indexesOfRemovedObjects;
@property(readonly, nonatomic) NSArray *removedImmutableObjects; // @synthesize removedImmutableObjects=_removedImmutableObjects;
@property(readonly, nonatomic) NSArray *originalObjects; // @synthesize originalObjects=_originalObjects;
- (void).cxx_destruct;
- (void)useImmutableObjectsFromMap:(id)arg1 intermediateMutableObjectTransferBlock:(CDUnknownBlockType)arg2;
@property(readonly, copy) NSString *description;
- (id)initWithRemovedObjects:(id)arg1 indexes:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

