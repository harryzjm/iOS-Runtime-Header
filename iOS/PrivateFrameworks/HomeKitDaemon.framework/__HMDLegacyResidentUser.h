//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class HMDResidentUser;

__attribute__((visibility("hidden")))
@interface __HMDLegacyResidentUser
{
    HMDResidentUser *_residentUser;
}

+ (_Bool)supportsSecureCoding;
+ (void)initialize;
- (void).cxx_destruct;
@property(readonly, nonatomic) HMDResidentUser *residentUser; // @synthesize residentUser=_residentUser;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)isRemoteGateway;
- (id)initWithResidentUser:(id)arg1;

@end

