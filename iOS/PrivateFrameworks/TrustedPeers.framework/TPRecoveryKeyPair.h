//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSData;

@interface TPRecoveryKeyPair : NSObject
{
    NSData *_signingKeyData;
    NSData *_encryptionKeyData;
}

- (void).cxx_destruct;
@property(readonly, retain) NSData *encryptionKeyData; // @synthesize encryptionKeyData=_encryptionKeyData;
@property(readonly, retain) NSData *signingKeyData; // @synthesize signingKeyData=_signingKeyData;
- (id)initWithStableInfo:(id)arg1;
- (id)initWithSigningKeyData:(id)arg1 encryptionKeyData:(id)arg2;

@end
