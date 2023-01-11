//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BusinessChatService/BCSQueryChopperProtocol-Protocol.h>

@class NSString;
@protocol BCSMetricFactoryProtocol, OS_dispatch_queue;

@interface BCSQueryChopper : NSObject <BCSQueryChopperProtocol>
{
    NSObject<OS_dispatch_queue> *_serialDispatchQueue;
    id <BCSMetricFactoryProtocol> _metricFactory;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) id <BCSMetricFactoryProtocol> metricFactory; // @synthesize metricFactory=_metricFactory;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *serialDispatchQueue; // @synthesize serialDispatchQueue=_serialDispatchQueue;
- (id)_removeLinkItemDuplicatesInOrderFromArray:(id)arg1;
- (id)_chopItemIdentifiersToFetchFromURL:(id)arg1;
- (void)_returnHighestPriorityLinkItemWithItemIdentifiersToFetch:(id)arg1 fetchedItems:(id)arg2 fetchedErrors:(id)arg3 metric:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (_Bool)_allHigherPriorityRemoteFetchesHaveCompletedWithLinkItemIdentifier:(id)arg1 itemsFound:(id)arg2 itemIdentifiersToFetch:(id)arg3;
- (long long)_indexOfItemIdentifierInfo:(id)arg1 inItemIdentifierInfos:(id)arg2;
- (void)queryChopperDelegate:(id)arg1 isBusinessRegisteredForURL:(id)arg2 forClientBundleID:(id)arg3 metric:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)queryChopperDelegate:(id)arg1 fetchLinkItemModelWithURL:(id)arg2 forClientBundleID:(id)arg3 metric:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (id)initWithMetricFactory:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
