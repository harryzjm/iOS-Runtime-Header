//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Catalyst/CATTaskResultObject.h>

@class NSDictionary;

@interface DMFFetchLastLoginDateResultObject : CATTaskResultObject
{
    NSDictionary *_lastLoginDatesByAppleID;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *lastLoginDatesByAppleID; // @synthesize lastLoginDatesByAppleID=_lastLoginDatesByAppleID;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDatesByAppleID:(id)arg1;

@end

