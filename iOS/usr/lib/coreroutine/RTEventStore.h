//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <coreroutine/NSSecureCoding-Protocol.h>
#import <coreroutine/RTEventStore-Protocol.h>
#import <coreroutine/RTEventStoreAppLaunch-Protocol.h>

@class NSArray, NSString;
@protocol OS_dispatch_queue;

@interface RTEventStore : NSObject <RTEventStore, RTEventStoreAppLaunch, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_queue;
    NSArray *_applicableEventClasses;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) NSArray *applicableEventClasses; // @synthesize applicableEventClasses=_applicableEventClasses;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
- (void).cxx_destruct;
- (void)setUnderlyingQueue:(id)arg1;
@property(readonly, copy) NSString *description;
- (double)getConfidence;
- (_Bool)storesEventOfClass:(Class)arg1;
- (void)fetchAllPredictionsWithHandler:(CDUnknownBlockType)arg1;
- (void)invalidate;
- (void)_processEventsWithGlobalAppLaunchCountedSet:(id)arg1 handler:(CDUnknownBlockType)arg2;
- (void)addAppLaunchEvent:(id)arg1;
- (void)clearAllEvents;
- (unsigned long long)countOfEvents;
- (void)removeEvents:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)addEvents:(id)arg1;
- (void)addEvent:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithApplicableEventClasses:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
