//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVFAudio/AVSpeechSynthesisProviderRequest.h>

@class AVAudioSession, AVSpeechSynthesisProviderVoice, NSArray, NSString, TTSSpeechRequest;

@interface AVSpeechSynthesisProviderRequest (PublicSpeechImplementation)
- (_Bool)isEqual:(id)arg1;
- (unsigned long long)hash;
- (id)description;
@property(retain, nonatomic) AVSpeechSynthesisProviderVoice *voice;
@property(retain, nonatomic) NSString *ssmlRepresentation;
- (id)initWithCoder:(id)arg1;
- (id)initWithSSMLRepresentation:(id)arg1 voice:(id)arg2;
@property(retain, nonatomic) NSArray *channels;
@property(retain, nonatomic) AVAudioSession *audioSession;
@property(retain, nonatomic) TTSSpeechRequest *parentRequest;
@property(nonatomic) unsigned int audioQueueFlags;
@property(copy, nonatomic) CDUnknownBlockType ttsServiceDidStartReplyBlock;
@end

