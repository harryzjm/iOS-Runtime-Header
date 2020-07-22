//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <SoftwareUpdateServices/NSSecureCoding-Protocol.h>

@interface SUInstallPolicy : NSObject <NSSecureCoding>
{
    unsigned long long _skipsAllowed;
    unsigned long long _type;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) unsigned long long type; // @synthesize type=_type;
@property(nonatomic) unsigned long long skipsAllowed; // @synthesize skipsAllowed=_skipsAllowed;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (void)_setType:(unsigned long long)arg1;
- (id)initWithInstallPolicyType:(unsigned long long)arg1;
- (id)init;

@end
