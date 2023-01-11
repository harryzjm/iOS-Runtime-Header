//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SSVFairPlaySAPContext : NSObject
{
    _Bool _complete;
}

@property(readonly, nonatomic, getter=isComplete) _Bool complete; // @synthesize complete=_complete;
- (void)_teardownSession;
- (_Bool)verifySignature:(id)arg1 forData:(id)arg2 error:(id *)arg3;
- (_Bool)verifyPrimeSignature:(id)arg1 error:(id *)arg2;
- (id)signData:(id)arg1 error:(id *)arg2;
- (id)primingSignatureForData:(id)arg1 error:(id *)arg2;
- (id)exchangeData:(id)arg1 error:(id *)arg2;
- (void)dealloc;
- (id)initWithSAPVersion:(long long)arg1;

@end
