//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC16NewsSubscription39FlexiblePaywallCollectionViewDataSource : NSObject
{
    MISSING_TYPE *layoutProvider;
    MISSING_TYPE *feedItemRenderer;
    MISSING_TYPE *feedItemSupplementaryRenderer;
    MISSING_TYPE *delegate;
    MISSING_TYPE *subscribeButtonDebouncer;
}

- (void).cxx_destruct;
- (id)init;
- (id)collectionView:(id)arg1 viewForSupplementaryElementOfKind:(id)arg2 atIndexPath:(id)arg3;
- (id)collectionView:(id)arg1 cellForItemAtIndexPath:(id)arg2;
- (long long)collectionView:(id)arg1 numberOfItemsInSection:(long long)arg2;

@end

