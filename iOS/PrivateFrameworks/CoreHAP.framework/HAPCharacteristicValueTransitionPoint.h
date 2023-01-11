//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreHAP/HAPTLVProtocol-Protocol.h>
#import <CoreHAP/NSCopying-Protocol.h>

@class HAPTLVUnsignedNumberValue, NSData, NSString;

@interface HAPCharacteristicValueTransitionPoint : NSObject <NSCopying, HAPTLVProtocol>
{
    NSData *_targetValue;
    HAPTLVUnsignedNumberValue *_targetCompletionDuration;
    HAPTLVUnsignedNumberValue *_startDelayDuration;
}

+ (id)parsedFromData:(id)arg1 error:(id *)arg2;
- (void).cxx_destruct;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *startDelayDuration; // @synthesize startDelayDuration=_startDelayDuration;
@property(retain, nonatomic) HAPTLVUnsignedNumberValue *targetCompletionDuration; // @synthesize targetCompletionDuration=_targetCompletionDuration;
@property(retain, nonatomic) NSData *targetValue; // @synthesize targetValue=_targetValue;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)serializeWithError:(id *)arg1;
- (_Bool)parseFromData:(id)arg1 error:(id *)arg2;
- (id)initWithTargetValue:(id)arg1 targetCompletionDuration:(id)arg2 startDelayDuration:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
