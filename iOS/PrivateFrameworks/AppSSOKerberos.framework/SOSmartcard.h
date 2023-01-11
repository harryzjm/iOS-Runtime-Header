//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SOSmartcard : NSObject
{
}

+ (id)searchForCachedIdentityWithSerial:(struct __CFData *)arg1 withIssuer:(struct __CFData *)arg2 withTokenID:(id)arg3;
+ (_Bool)pollSmartcardForIdentityWithSerialNumber:(id)arg1 withIssuer:(id)arg2 withTokenID:(id)arg3;
+ (int)getIdentityForPersistentRef:(struct __CFData *)arg1 identityToReturn:(struct __SecIdentity **)arg2;
+ (struct __SecIdentity *)getLocalAuthIdentityForCert:(id)arg1 withLAContext:(id)arg2;

@end
