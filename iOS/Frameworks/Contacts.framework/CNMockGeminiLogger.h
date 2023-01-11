//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNGeminiLogger-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface CNMockGeminiLogger : NSObject <CNGeminiLogger>
{
}

- (void)fetchBestResultForInteraction:(id)arg1 error:(id)arg2;
- (void)fetchedBestResult:(id)arg1 forInteraction:(id)arg2;
- (void)fetchedSortedResults:(id)arg1 forInteraction:(id)arg2;
- (void)fetchSortedResultsForInteraction:(id)arg1 error:(id)arg2;
- (void)updateSubscriptionInfoError:(id)arg1;
- (void)updatedSubscriptionInfo:(id)arg1;
- (void)unregisteredForContextUpdatesWithToken:(id)arg1;
- (void)registeredForContextUpdatesWithToken:(id)arg1;
- (void)recordInteractionError:(id)arg1;
- (void)recordedInteraction:(id)arg1 forContext:(id)arg2;
- (void)fetchingBestResultForDestinationHandle:(CDUnknownBlockType)arg1;
- (void)updatingSubscriptionInfo:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

