//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface WFQueryDispatcher : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    NSMutableDictionary *_queriesPendingResponse;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *queriesPendingResponse; // @synthesize queriesPendingResponse=_queriesPendingResponse;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void)fetchFavoriteLocationsWithTaskIdentifier:(id)arg1 results:(CDUnknownBlockType)arg2;
- (void)invalidateCacheWithIdentifier:(id)arg1;
- (void)cancelTaskWithIdentifier:(id)arg1;
- (void)locationForSearchCompletion:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForString:(id)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)locationForCoordinate:(struct CLLocationCoordinate2D)arg1 taskIdentifier:(id)arg2 results:(CDUnknownBlockType)arg3;
- (void)removePendingQueryWithIdentifier:(id)arg1;
- (void)dispatchQuery:(id)arg1;
- (id)init;

@end

