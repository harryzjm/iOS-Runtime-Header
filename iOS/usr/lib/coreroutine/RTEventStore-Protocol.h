//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <coreroutine/NSObject-Protocol.h>

@class NSArray, NSCountedSet, RTEvent;

@protocol RTEventStore <NSObject>
- (double)getConfidence;
- (id)initWithApplicableEventClasses:(NSArray *)arg1;
- (_Bool)storesEventOfClass:(Class)arg1;
- (void)fetchAllPredictionsWithHandler:(void (^)(NSArray *, NSError *))arg1;
- (void)invalidate;
- (void)_processEventsWithGlobalAppLaunchCountedSet:(NSCountedSet *)arg1 handler:(void (^)(NSArray *, NSError *))arg2;
- (void)clearAllEvents;
- (unsigned long long)countOfEvents;
- (void)removeEvents:(NSArray *)arg1;
- (void)removeEvent:(RTEvent *)arg1;
- (void)addEvents:(NSArray *)arg1;
- (void)addEvent:(RTEvent *)arg1;
@end

