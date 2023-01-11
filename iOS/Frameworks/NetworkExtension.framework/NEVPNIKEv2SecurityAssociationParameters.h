//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NetworkExtension/NEConfigurationValidating-Protocol.h>
#import <NetworkExtension/NEPrettyDescription-Protocol.h>
#import <NetworkExtension/NSCopying-Protocol.h>
#import <NetworkExtension/NSSecureCoding-Protocol.h>

@interface NEVPNIKEv2SecurityAssociationParameters : NSObject <NEConfigurationValidating, NEPrettyDescription, NSSecureCoding, NSCopying>
{
    int _lifetimeMinutes;
    long long _encryptionAlgorithm;
    long long _integrityAlgorithm;
    long long _diffieHellmanGroup;
}

+ (_Bool)supportsSecureCoding;
@property int lifetimeMinutes; // @synthesize lifetimeMinutes=_lifetimeMinutes;
@property long long diffieHellmanGroup; // @synthesize diffieHellmanGroup=_diffieHellmanGroup;
@property long long integrityAlgorithm; // @synthesize integrityAlgorithm=_integrityAlgorithm;
@property long long encryptionAlgorithm; // @synthesize encryptionAlgorithm=_encryptionAlgorithm;
- (id)copyDictionary;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
