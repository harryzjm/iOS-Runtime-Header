//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HMDRemoteLoginAuthenticationRequest
{
    unsigned long long _targetedAccountType;
}

+ (id)xpcMessageName;
+ (id)messageName;
+ (_Bool)supportsSecureCoding;
+ (id)objWithMessage:(id)arg1;
+ (id)objWithDict:(id)arg1;
@property(nonatomic) unsigned long long targetedAccountType; // @synthesize targetedAccountType=_targetedAccountType;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)description;
- (id)messagePayload;
- (id)xpcMessageName;
- (id)messageName;

@end

