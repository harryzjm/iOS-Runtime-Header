//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface PKPassAuxiliaryRegistrationDecryptionCSRMetadata
{
    unsigned long long _decryptionSchemeVersion;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) unsigned long long decryptionSchemeVersion; // @synthesize decryptionSchemeVersion=_decryptionSchemeVersion;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)initWithDictionary:(id)arg1;

@end
