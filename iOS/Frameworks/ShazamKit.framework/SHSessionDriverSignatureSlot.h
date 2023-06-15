//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioPCMBuffer, SHSignature, SHSignatureGenerator;

__attribute__((visibility("hidden")))
@interface SHSessionDriverSignatureSlot : NSObject
{
    SHSignatureGenerator *_signatureGenerator;
    long long _state;
    AVAudioPCMBuffer *_excessAudio;
    double _maximumSignatureDuration;
    SHSignature *_generatedSignature;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SHSignature *generatedSignature; // @synthesize generatedSignature=_generatedSignature;
@property(readonly, nonatomic) double maximumSignatureDuration; // @synthesize maximumSignatureDuration=_maximumSignatureDuration;
@property(readonly, nonatomic) AVAudioPCMBuffer *excessAudio; // @synthesize excessAudio=_excessAudio;
@property(nonatomic) long long state; // @synthesize state=_state;
- (long long)appendBuffer:(id)arg1 atTime:(id)arg2 error:(id *)arg3;
@property(readonly, nonatomic) double signatureDuration;
@property(readonly, nonatomic) SHSignature *signature;
@property(readonly, nonatomic) SHSignatureGenerator *signatureGenerator; // @synthesize signatureGenerator=_signatureGenerator;
- (void)reset;
- (id)initWithMaximumSignatureDuration:(double)arg1;
- (id)initWithSignatureGenerator:(id)arg1;

@end

