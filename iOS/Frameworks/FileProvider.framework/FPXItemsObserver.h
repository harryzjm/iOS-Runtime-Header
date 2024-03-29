//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSData, NSMutableArray, NSString;

__attribute__((visibility("hidden")))
@interface FPXItemsObserver
{
    NSMutableArray *_items;
    CDUnknownBlockType _finishedBlock;
    NSData *_syncAnchor;
    long long _suggestedPageSize;
}

- (void).cxx_destruct;
@property(nonatomic) long long suggestedPageSize; // @synthesize suggestedPageSize=_suggestedPageSize;
@property(copy) NSData *syncAnchor; // @synthesize syncAnchor=_syncAnchor;
@property(copy) CDUnknownBlockType finishedBlock; // @synthesize finishedBlock=_finishedBlock;
- (void)finishEnumeratingWithError:(id)arg1;
- (void)finishEnumeratingUpToPage:(id)arg1;
- (void)didEnumerateItems:(id)arg1;
- (id)initWithObservedItemID:(id)arg1 domainContext:(id)arg2 nsFileProviderRequest:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

