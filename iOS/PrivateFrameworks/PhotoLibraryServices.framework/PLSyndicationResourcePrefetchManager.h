//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol PLSyndicationResourcePrefetchManagerDelegate;

@interface PLSyndicationResourcePrefetchManager : NSObject
{
    id <PLSyndicationResourcePrefetchManagerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) __weak id <PLSyndicationResourcePrefetchManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)prefetchResourceWithObjectID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (id)lowPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg1;
- (id)highPriorityResourcesForPrefetchWithManagedObjectContext:(id)arg1;
- (id)_resourcesForPrefetchWithManagedObjectContext:(id)arg1 predicate:(id)arg2;
- (id)initWithDelegate:(id)arg1;

@end
