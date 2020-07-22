//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSData, NSDate;

@interface MSDecodeOptions : NSObject
{
    _Bool _verifySignatures;
    _Bool _verifySigners;
    NSArray *_signerPolicies;
    NSDate *_verifyTime;
    struct __SecIdentity *_identity;
    NSData *_key;
    NSData *_LAContext;
}

@property(retain) NSData *LAContext; // @synthesize LAContext=_LAContext;
@property(retain) NSData *key; // @synthesize key=_key;
@property struct __SecIdentity *identity; // @synthesize identity=_identity;
@property(retain) NSDate *verifyTime; // @synthesize verifyTime=_verifyTime;
@property(retain) NSArray *signerPolicies; // @synthesize signerPolicies=_signerPolicies;
@property _Bool verifySigners; // @synthesize verifySigners=_verifySigners;
@property _Bool verifySignatures; // @synthesize verifySignatures=_verifySignatures;
- (void).cxx_destruct;
- (void)dealloc;
- (id)initWithDecryptionKey:(id)arg1;
- (id)initWithDecryptionIdentity:(struct __SecIdentity *)arg1;
- (id)init;

@end

