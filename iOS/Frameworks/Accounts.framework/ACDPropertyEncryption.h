//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface ACDPropertyEncryption : NSObject
{
}

+ (id)_decryptableDataForStoredProperty:(id)arg1;
+ (id)decryptProperty:(id)arg1;
+ (id)encryptProperty:(id)arg1;
+ (struct __SecKey *)accountPropertyCryptoKeyCreatingIfNecessary:(_Bool)arg1;

@end

