//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HealthKit/NSSecureCoding-Protocol.h>

@class NSString, NSUUID;

@interface _HKFitnessMachineSessionConfiguration : NSObject <NSSecureCoding>
{
    NSUUID *_sessionUUID;
    NSUUID *_connectionUUID;
    NSUUID *_machineUUID;
    unsigned long long _machineType;
    NSString *_machineName;
    NSString *_machineBrand;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) NSString *machineBrand; // @synthesize machineBrand=_machineBrand;
@property(readonly, nonatomic) NSString *machineName; // @synthesize machineName=_machineName;
@property(readonly, nonatomic) unsigned long long machineType; // @synthesize machineType=_machineType;
@property(readonly, nonatomic) NSUUID *machineUUID; // @synthesize machineUUID=_machineUUID;
@property(readonly, nonatomic) NSUUID *connectionUUID; // @synthesize connectionUUID=_connectionUUID;
@property(readonly, nonatomic) NSUUID *sessionUUID; // @synthesize sessionUUID=_sessionUUID;
- (void).cxx_destruct;
- (void)_setMachineBrand:(id)arg1;
- (void)_setMachineName:(id)arg1;
- (void)_setMachineType:(unsigned long long)arg1;
- (void)_setMachineUUID:(id)arg1;
- (void)_setConnectionUUID:(id)arg1;
- (void)_setSessionUUID:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

