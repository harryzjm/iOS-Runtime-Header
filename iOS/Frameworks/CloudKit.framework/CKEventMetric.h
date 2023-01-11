//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudKit/NSSecureCoding-Protocol.h>

@class NSDate, NSMutableDictionary, NSString, NSUUID;

@interface CKEventMetric : NSObject <NSSecureCoding>
{
    _Bool _hasBeenSubmitted;
    _Bool _inferredAllowsCellular;
    _Bool _inferredPreferAnonymousRequests;
    _Bool _isCKInternalMetric;
    _Bool _isPushTriggerFired;
    NSString *_eventName;
    NSDate *_startTime;
    NSDate *_endTime;
    NSUUID *_metricUUID;
    NSMutableDictionary *_attributes;
    NSMutableDictionary *_associatedOperations;
    NSMutableDictionary *_associatedOperationGroups;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) _Bool isPushTriggerFired; // @synthesize isPushTriggerFired=_isPushTriggerFired;
@property(nonatomic) _Bool isCKInternalMetric; // @synthesize isCKInternalMetric=_isCKInternalMetric;
@property(readonly, nonatomic) NSMutableDictionary *associatedOperationGroups; // @synthesize associatedOperationGroups=_associatedOperationGroups;
@property(readonly, nonatomic) NSMutableDictionary *associatedOperations; // @synthesize associatedOperations=_associatedOperations;
@property(readonly, nonatomic) NSMutableDictionary *attributes; // @synthesize attributes=_attributes;
@property(nonatomic) _Bool inferredPreferAnonymousRequests; // @synthesize inferredPreferAnonymousRequests=_inferredPreferAnonymousRequests;
@property(nonatomic) _Bool inferredAllowsCellular; // @synthesize inferredAllowsCellular=_inferredAllowsCellular;
@property(readonly, nonatomic) NSUUID *metricUUID; // @synthesize metricUUID=_metricUUID;
@property(nonatomic) _Bool hasBeenSubmitted; // @synthesize hasBeenSubmitted=_hasBeenSubmitted;
@property(retain) NSDate *endTime; // @synthesize endTime=_endTime;
@property(retain) NSDate *startTime; // @synthesize startTime=_startTime;
@property(readonly, nonatomic) NSString *eventName; // @synthesize eventName=_eventName;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)generateEventMetricInfo;
- (void)setMetricValue:(id)arg1 forKey:(id)arg2;
- (void)setObject:(id)arg1 forKeyedSubscript:(id)arg2;
- (_Bool)associateWithCompletedOperation:(id)arg1;
- (id)initWithEventName:(id)arg1 atTime:(id)arg2;
- (id)initWithEventName:(id)arg1;

@end
