//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, SHSignature;

__attribute__((visibility("hidden")))
@interface SHSignatureBuffer : NSObject
{
    long long _qos;
    double _maximumSignatureLength;
    NSMutableArray *_allSignatures;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *allSignatures; // @synthesize allSignatures=_allSignatures;
@property(nonatomic) double maximumSignatureLength; // @synthesize maximumSignatureLength=_maximumSignatureLength;
@property(readonly, nonatomic) long long qos; // @synthesize qos=_qos;
- (void)discardOldestSignatureWithID:(id)arg1;
- (void)discardAllSignaturesExceptTheLatestAfterMatchingID:(id)arg1;
- (void)finishedMatchingSignatureWithID:(id)arg1;
- (double)length;
- (_Bool)checkFlowError:(id)arg1;
- (void)flow:(id)arg1 time:(id)arg2;
@property(readonly, nonatomic) SHSignature *nextSignature;
- (id)initWithMaximumSignatureLength:(double)arg1 qos:(long long)arg2;

@end
