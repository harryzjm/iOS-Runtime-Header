//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFAudio/NSSecureCoding-Protocol.h>

@class AVAudioDeviceTestProcessingChain, NSString, NSURL;

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding>
{
    _Bool _calculateCrossCorrelationPeak;
    _Bool _parallelCrossCorrelationCalculation;
    _Bool _processSequenceAsynchronously;
    float _volume;
    long long _outputID;
    NSURL *_stimulusURL;
    AVAudioDeviceTestProcessingChain *_inputProcessingChain;
    AVAudioDeviceTestProcessingChain *_outputProcessingChain;
    long long _outputMode;
    long long _priority;
    NSString *_mode;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property _Bool processSequenceAsynchronously; // @synthesize processSequenceAsynchronously=_processSequenceAsynchronously;
@property _Bool parallelCrossCorrelationCalculation; // @synthesize parallelCrossCorrelationCalculation=_parallelCrossCorrelationCalculation;
@property _Bool calculateCrossCorrelationPeak; // @synthesize calculateCrossCorrelationPeak=_calculateCrossCorrelationPeak;
@property(retain) NSString *mode; // @synthesize mode=_mode;
@property(nonatomic) long long priority; // @synthesize priority=_priority;
@property(nonatomic) long long outputMode; // @synthesize outputMode=_outputMode;
@property(retain, nonatomic) AVAudioDeviceTestProcessingChain *outputProcessingChain; // @synthesize outputProcessingChain=_outputProcessingChain;
@property(retain, nonatomic) AVAudioDeviceTestProcessingChain *inputProcessingChain; // @synthesize inputProcessingChain=_inputProcessingChain;
@property(retain, nonatomic) NSURL *stimulusURL; // @synthesize stimulusURL=_stimulusURL;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) long long outputID; // @synthesize outputID=_outputID;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)init;

@end
