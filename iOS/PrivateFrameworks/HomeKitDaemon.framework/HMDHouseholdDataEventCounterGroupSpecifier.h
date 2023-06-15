//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSUUID;

__attribute__((visibility("hidden")))
@interface HMDHouseholdDataEventCounterGroupSpecifier
{
    NSUUID *_homeUUID;
}

+ (_Bool)supportsSecureCoding;
+ (id)specifierWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSUUID *homeUUID; // @synthesize homeUUID=_homeUUID;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithGroupName:(id)arg1 homeUUID:(id)arg2 date:(id)arg3;

@end

