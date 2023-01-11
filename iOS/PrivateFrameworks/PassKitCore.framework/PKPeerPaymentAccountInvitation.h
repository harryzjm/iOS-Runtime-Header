//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString;

@interface PKPeerPaymentAccountInvitation : NSObject <NSSecureCoding>
{
    NSString *_altDSID;
    long long _status;
    unsigned long long _registrationResult;
    long long _remoteRegistrationRequestLevel;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(nonatomic) long long remoteRegistrationRequestLevel; // @synthesize remoteRegistrationRequestLevel=_remoteRegistrationRequestLevel;
@property(nonatomic) unsigned long long registrationResult; // @synthesize registrationResult=_registrationResult;
@property(nonatomic) long long status; // @synthesize status=_status;
@property(copy, nonatomic) NSString *altDSID; // @synthesize altDSID=_altDSID;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
