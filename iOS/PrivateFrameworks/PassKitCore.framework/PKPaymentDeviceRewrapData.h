//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <PassKitCore/NSSecureCoding-Protocol.h>

@class NSString, PKSecureElementCertificateSet;

@interface PKPaymentDeviceRewrapData : NSObject <NSSecureCoding>
{
    NSString *_deviceIdentifier;
    PKSecureElementCertificateSet *_certificates;
    NSString *_kextBlacklistVersion;
}

+ (_Bool)supportsSecureCoding;
@property(copy, nonatomic) NSString *kextBlacklistVersion; // @synthesize kextBlacklistVersion=_kextBlacklistVersion;
@property(copy, nonatomic) PKSecureElementCertificateSet *certificates; // @synthesize certificates=_certificates;
@property(copy, nonatomic) NSString *deviceIdentifier; // @synthesize deviceIdentifier=_deviceIdentifier;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

