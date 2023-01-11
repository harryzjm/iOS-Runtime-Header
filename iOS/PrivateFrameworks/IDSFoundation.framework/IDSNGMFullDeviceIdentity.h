//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface IDSNGMFullDeviceIdentity : NSObject
{
}

+ (id)identityWithDataRepresentation:(id)arg1 error:(id *)arg2;
+ (id)identityWithAccess:(id)arg1 usageIdentifier:(id)arg2 error:(id *)arg3;
+ (id)identityWithAccess:(id)arg1 error:(id *)arg2;
- (_Bool)updateWithRegisteredTicket:(id)arg1 error:(id *)arg2;
- (id)keyRollingTicketWithError:(id *)arg1;
- (_Bool)shouldRollEncryptionIdentity;
- (void)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 decryptionBlock:(CDUnknownBlockType)arg3;
- (id)unsealMessage:(id)arg1 signedByPublicIdentity:(id)arg2 error:(id *)arg3;
- (_Bool)eraseFromKeyChain:(id *)arg1;
- (id)publicDeviceIdentityWithError:(id *)arg1;
- (id)dataRepresentationWithError:(id *)arg1;

@end
