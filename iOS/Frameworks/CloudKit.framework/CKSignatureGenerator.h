//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CKSignatureGenerator : NSObject
{
    _Bool _valid;
    void *_generator;
}

+ (_Bool)isValidV2Signature:(id)arg1;
+ (_Bool)isValidSignature:(id)arg1;
+ (id)signatureWithFileDescriptor:(int)arg1 error:(id *)arg2;
@property(nonatomic, getter=isValid) _Bool valid; // @synthesize valid=_valid;
@property(nonatomic) void *generator; // @synthesize generator=_generator;
- (id)dataByFinishingSignature;
- (void)updateWithData:(id)arg1;
- (void)updateWithBytes:(const void *)arg1 length:(unsigned long long)arg2;
- (char *)_newSignatureByFinishingGenerator;
- (void)dealloc;
- (id)init;

@end
