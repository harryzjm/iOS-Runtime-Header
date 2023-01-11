//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AVFAudio/NSSecureCoding-Protocol.h>

@class AVAudioDeviceTestProcessingChain, NSURL;

@interface AVAudioDeviceTestSequence : NSObject <NSSecureCoding>
{
    float _volume;
    long long _outputID;
    NSURL *_stimulusURL;
    AVAudioDeviceTestProcessingChain *_inputProcessingChain;
    AVAudioDeviceTestProcessingChain *_outputProcessingChain;
    long long _outputMode;
}

+ (_Bool)supportsSecureCoding;
@property(nonatomic) long long outputMode; // @synthesize outputMode=_outputMode;
@property(retain, nonatomic) AVAudioDeviceTestProcessingChain *outputProcessingChain; // @synthesize outputProcessingChain=_outputProcessingChain;
@property(retain, nonatomic) AVAudioDeviceTestProcessingChain *inputProcessingChain; // @synthesize inputProcessingChain=_inputProcessingChain;
@property(retain, nonatomic) NSURL *stimulusURL; // @synthesize stimulusURL=_stimulusURL;
@property(nonatomic) float volume; // @synthesize volume=_volume;
@property(nonatomic) long long outputID; // @synthesize outputID=_outputID;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;

@end

