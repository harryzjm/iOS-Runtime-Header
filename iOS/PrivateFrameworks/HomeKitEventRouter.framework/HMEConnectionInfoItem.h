//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class HMEPendingEventsCollection, NSDate, NSUUID;

__attribute__((visibility("hidden")))
@interface HMEConnectionInfoItem : NSObject
{
    _Bool _hasPendingRequest;
    NSUUID *_identifier;
    HMEPendingEventsCollection *_pendingEventItems;
    HMEPendingEventsCollection *_pendingCachedEventItems;
    NSDate *_expiry;
    NSDate *_debounceStartTime;
    id _connection;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool hasPendingRequest; // @synthesize hasPendingRequest=_hasPendingRequest;
@property(nonatomic) __weak id connection; // @synthesize connection=_connection;
@property(retain, nonatomic) NSDate *debounceStartTime; // @synthesize debounceStartTime=_debounceStartTime;
@property(retain, nonatomic) NSDate *expiry; // @synthesize expiry=_expiry;
@property(readonly, nonatomic) HMEPendingEventsCollection *pendingCachedEventItems; // @synthesize pendingCachedEventItems=_pendingCachedEventItems;
@property(readonly, nonatomic) HMEPendingEventsCollection *pendingEventItems; // @synthesize pendingEventItems=_pendingEventItems;
@property(readonly, copy, nonatomic) NSUUID *identifier; // @synthesize identifier=_identifier;
- (id)initWithConnection:(id)arg1 expiry:(id)arg2;

@end

