//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <IDSFoundation/ENAccountKey-Protocol.h>

@class IDSMPFullAccountIdentity, IDSMPFullAccountIdentityCluster, IDSMPFullServiceIdentityAdmin, IDSMPFullServiceIdentitySigning, IDSPublicAccountIdentity, NSString;

@interface IDSAccountIdentity : NSObject <ENAccountKey>
{
    IDSMPFullAccountIdentityCluster *_identityCluster;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) IDSMPFullAccountIdentityCluster *identityCluster; // @synthesize identityCluster=_identityCluster;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
@property(readonly, nonatomic) IDSMPFullServiceIdentitySigning *signingIdentity;
@property(readonly, nonatomic) IDSMPFullServiceIdentityAdmin *adminIdentity;
@property(readonly, nonatomic) IDSMPFullAccountIdentity *accountIdentity;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, copy) NSString *description;
@property(readonly, nonatomic) IDSPublicAccountIdentity *accountPublicKey;
- (id)initWithFullCluster:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

