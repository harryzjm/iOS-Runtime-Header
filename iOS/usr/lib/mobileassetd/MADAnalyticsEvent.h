//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAnalyticsEvent : NSObject
{
    NSString *_eventName;
    NSString *_eventUUID;
    NSMutableDictionary *_mutableEventPayload;
    NSObject<OS_dispatch_queue> *_stateQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)eventWithName:(id)arg1 payload:(id)arg2;
- (void).cxx_destruct;
@property(readonly, retain, nonatomic) NSObject<OS_dispatch_queue> *stateQueue; // @synthesize stateQueue=_stateQueue;
@property(retain, nonatomic) NSMutableDictionary *mutableEventPayload; // @synthesize mutableEventPayload=_mutableEventPayload;
@property(retain, nonatomic) NSString *eventUUID; // @synthesize eventUUID=_eventUUID;
@property(readonly, retain, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (id)description;
- (void)_queue_removeEventPayloadEntry:(id)arg1;
- (void)_queue_setEventPayloadEntryToNull:(id)arg1;
- (void)_queue_setEventPayloadEntry:(id)arg1 value:(id)arg2;
- (void)removeEventPayloadEntry:(id)arg1;
- (void)setEventPayloadEntryToNull:(id)arg1;
- (void)setEventPayloadEntry:(id)arg1 value:(id)arg2;
@property(readonly, retain, nonatomic) NSDictionary *eventPayload;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithEventName:(id)arg1;
- (id)init;

@end

