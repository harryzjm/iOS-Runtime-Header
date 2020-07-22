//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <DeviceManagement/NSCopying-Protocol.h>
#import <DeviceManagement/NSSecureCoding-Protocol.h>

@class NSArray, NSDictionary, NSString;

@interface DMFProfile : NSObject <NSCopying, NSSecureCoding>
{
    _Bool _isManaged;
    _Bool _isLocked;
    _Bool _hasRemovalPasscode;
    _Bool _isEncrypted;
    NSString *_UUID;
    unsigned long long _type;
    NSString *_identifier;
    long long _profileVersion;
    NSString *_displayName;
    NSString *_organization;
    NSString *_profileDescription;
    NSArray *_signerCertificates;
    NSArray *_payloads;
    NSDictionary *_restrictions;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, copy, nonatomic) NSDictionary *restrictions; // @synthesize restrictions=_restrictions;
@property(readonly, copy, nonatomic) NSArray *payloads; // @synthesize payloads=_payloads;
@property(readonly, copy, nonatomic) NSArray *signerCertificates; // @synthesize signerCertificates=_signerCertificates;
@property(readonly, nonatomic) _Bool isEncrypted; // @synthesize isEncrypted=_isEncrypted;
@property(readonly, nonatomic) _Bool hasRemovalPasscode; // @synthesize hasRemovalPasscode=_hasRemovalPasscode;
@property(readonly, nonatomic) _Bool isLocked; // @synthesize isLocked=_isLocked;
@property(readonly, nonatomic) _Bool isManaged; // @synthesize isManaged=_isManaged;
@property(readonly, copy, nonatomic) NSString *profileDescription; // @synthesize profileDescription=_profileDescription;
@property(readonly, copy, nonatomic) NSString *organization; // @synthesize organization=_organization;
@property(readonly, copy, nonatomic) NSString *displayName; // @synthesize displayName=_displayName;
@property(readonly, nonatomic) long long profileVersion; // @synthesize profileVersion=_profileVersion;
@property(readonly, copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly, nonatomic) unsigned long long type; // @synthesize type=_type;
@property(readonly, copy, nonatomic) NSString *UUID; // @synthesize UUID=_UUID;
- (void).cxx_destruct;
- (id)description;
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithUUID:(id)arg1 type:(unsigned long long)arg2 identifier:(id)arg3 profileVersion:(long long)arg4 displayName:(id)arg5 organization:(id)arg6 profileDescription:(id)arg7 isManaged:(_Bool)arg8 isLocked:(_Bool)arg9 hasRemovalPasscode:(_Bool)arg10 isEncrypted:(_Bool)arg11 signerCertificates:(id)arg12 payloads:(id)arg13 restrictions:(id)arg14;

@end

