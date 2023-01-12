//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <EventKit/EKAutocompletePendingSearchProtocol-Protocol.h>

@class EKEvent, EKEventStore, NSString;
@protocol CalSpotlightQueryPendingSearchProtocol;

@interface EKAutocompletePendingSearch : NSObject <EKAutocompletePendingSearchProtocol>
{
    EKEventStore *_eventStore;
    unsigned long long _maximumResultCount;
    _Bool _ignoreScheduledEvents;
    EKEvent *_initialEvent;
    id <CalSpotlightQueryPendingSearchProtocol> _pendingSearch;
}

+ (void)_updateResult:(id)arg1 withEvent:(id)arg2;
+ (id)_eventKitQueue;
+ (id)_queue;
- (void).cxx_destruct;
- (void)cancel;
- (void)searchWithString:(id)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (_Bool)_shouldReturnResultForEvent:(id)arg1;
- (id)firstNaturalLanguageResultWithSearchString:(id)arg1;
- (id)initWithEventStore:(id)arg1 searchString:(id)arg2 maximumResultCount:(unsigned long long)arg3 ignoreScheduledEvents:(_Bool)arg4 initialEvent:(id)arg5 completionHandler:(CDUnknownBlockType)arg6;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
