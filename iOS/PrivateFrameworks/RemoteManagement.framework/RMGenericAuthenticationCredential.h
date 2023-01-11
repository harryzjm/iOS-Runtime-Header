//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSDictionary, NSString;

@interface RMGenericAuthenticationCredential
{
    NSString *_authenticationScheme;
    NSDictionary *_properties;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSDictionary *properties; // @synthesize properties=_properties;
@property(readonly, copy, nonatomic) NSString *authenticationScheme; // @synthesize authenticationScheme=_authenticationScheme;
- (id)debugDescription;
- (id)description;
- (_Bool)isEqualToAuthenticationCredential:(id)arg1;
- (_Bool)isEqual:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithAuthenticationScheme:(id)arg1 properties:(id)arg2;

@end
