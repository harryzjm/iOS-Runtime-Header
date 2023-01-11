//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class LAContext, NSData;

__attribute__((visibility("hidden")))
@interface CTKClientSEP_TKTokenRefSEP : NSObject
{
    NSData *_ACMContext;
    LAContext *_LAContext;
}

- (void).cxx_destruct;
@property(readonly) LAContext *LAContext; // @synthesize LAContext=_LAContext;
@property(readonly) NSData *ACMContext; // @synthesize ACMContext=_ACMContext;
- (_Bool)lifetimeControlKey:(id)arg1 lifetimeControlType:(long long)arg2 error:(id *)arg3;
- (id)attestUsingKey:(id)arg1 attestedKey:(id)arg2 nonce:(id)arg3 error:(id *)arg4;
- (id)keyOperation:(long long)arg1 onObject:(id)arg2 algorithm:(id)arg3 mode:(long long)arg4 in1:(id)arg5 in2:(id)arg6 error:(id *)arg7;
- (id)publicKeyOfObject:(id)arg1 error:(id *)arg2;
- (_Bool)deleteObject:(id)arg1 error:(id *)arg2;
- (id)createOrUpdateObject:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (id)accessControlOfObject:(id)arg1 error:(id *)arg2;
- (id)keyForObjectID:(id)arg1 error:(id *)arg2;
- (id)initWithTokenID:(id)arg1 LAContext:(id)arg2 testMode:(id)arg3;
- (id)description;

@end
