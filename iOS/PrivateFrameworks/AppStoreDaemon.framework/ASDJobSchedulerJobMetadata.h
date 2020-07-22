//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AppStoreDaemon/NSCopying-Protocol.h>
#import <AppStoreDaemon/NSSecureCoding-Protocol.h>

@class NSError, NSNumber, NSString;

@interface ASDJobSchedulerJobMetadata : NSObject <NSCopying, NSSecureCoding>
{
    NSNumber *_accountIdentifier;
    NSString *_bundleID;
    NSNumber *_externalPriority;
    NSNumber *_itemID;
    NSString *_jobState;
    NSString *_jobType;
    NSError *_lastError;
    NSNumber *_lastSoftFailureTimestamp;
    NSNumber *_priority;
    NSNumber *_priorityBucket;
    NSString *_skippedReason;
    long long _softFailureCount;
    NSNumber *_softFailureTimeout;
    NSNumber *_timestamp;
}

+ (_Bool)supportsSecureCoding;
@property(copy) NSNumber *timestamp; // @synthesize timestamp=_timestamp;
@property(copy) NSNumber *softFailureTimeout; // @synthesize softFailureTimeout=_softFailureTimeout;
@property(nonatomic) long long softFailureCount; // @synthesize softFailureCount=_softFailureCount;
@property(copy) NSString *skippedReason; // @synthesize skippedReason=_skippedReason;
@property(copy) NSNumber *priorityBucket; // @synthesize priorityBucket=_priorityBucket;
@property(copy) NSNumber *priority; // @synthesize priority=_priority;
@property(copy) NSNumber *lastSoftFailureTimestamp; // @synthesize lastSoftFailureTimestamp=_lastSoftFailureTimestamp;
@property(copy) NSError *lastError; // @synthesize lastError=_lastError;
@property(copy) NSString *jobType; // @synthesize jobType=_jobType;
@property(copy) NSString *jobState; // @synthesize jobState=_jobState;
@property(copy) NSNumber *itemID; // @synthesize itemID=_itemID;
@property(copy) NSNumber *externalPriority; // @synthesize externalPriority=_externalPriority;
@property(copy) NSString *bundleID; // @synthesize bundleID=_bundleID;
@property(copy) NSNumber *accountIdentifier; // @synthesize accountIdentifier=_accountIdentifier;
- (void).cxx_destruct;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

