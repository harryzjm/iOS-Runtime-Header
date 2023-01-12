//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/NSSecureCoding-Protocol.h>

@class HMDService, NSArray, NSNumber, NSString;
@protocol HMFLocking;

@interface HMDSiriEndpointProfileAssistant : HMFObject <NSSecureCoding>
{
    id <HMFLocking> _lock;
    NSNumber *_identifier;
    NSString *_name;
    NSNumber *_active;
    HMDService *_service;
}

+ (id)shortDescription;
+ (_Bool)supportsSecureCoding;
+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) HMDService *service; // @synthesize service=_service;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (_Bool)updateCharacteristic:(id)arg1 value:(id)arg2;
- (_Bool)containsCharacteristic:(id)arg1;
@property(readonly) NSArray *allCharacteristics;
@property(readonly) NSArray *characteristicsToMonitor;
@property(copy) NSNumber *active; // @synthesize active=_active;
@property(copy) NSString *name; // @synthesize name=_name;
@property(copy) NSNumber *identifier; // @synthesize identifier=_identifier;
- (id)_activeCharacteristic;
- (id)_nameCharacteristic;
- (id)_identifierCharacteristic;
- (id)initWithService:(id)arg1;

@end
