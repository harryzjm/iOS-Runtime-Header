//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class SFRSAEncryptionOperation, SFSymmetricEncryptionOperation;

@interface SFRSA_WrappedKeyEncryptionOperation_Ivars : NSObject
{
    SFRSAEncryptionOperation *keyWrappingOperation;
    SFSymmetricEncryptionOperation *sessionEncryptionOperation;
}

- (void).cxx_destruct;

@end
