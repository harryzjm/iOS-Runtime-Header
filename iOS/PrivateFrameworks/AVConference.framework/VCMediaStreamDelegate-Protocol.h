//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/NSObject-Protocol.h>

@class NSArray, NSData, NSDictionary, NSError;
@protocol VCMediaStreamProtocol;

@protocol VCMediaStreamDelegate <NSObject>
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didResumeStream:(_Bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didPauseStream:(_Bool)arg2 error:(NSError *)arg3;
- (void)vcMediaStreamDidStop:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didStartStream:(_Bool)arg2 error:(NSError *)arg3;

@optional
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 requestKeyFrameGenerationWithStreamID:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didSwitchFromStreamID:(unsigned short)arg2 toStreamID:(unsigned short)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveFirstVideoFrameWithTime:(CDStruct_1b6d18a9)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 priorityDidChange:(unsigned char)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didUpdateVideoConfiguration:(_Bool)arg2 error:(NSError *)arg3 dictionary:(NSDictionary *)arg4;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 uplinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 downlinkQualityDidChange:(NSDictionary *)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveTTYCharacter:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 remoteMediaStalled:(_Bool)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didSwitchToAudioStreamWithID:(unsigned short)arg2;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 updateFrequencyLevel:(NSData *)arg2 isInputMeter:(_Bool)arg3;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveDTMFEventWithDigit:(BOOL)arg2;
- (void)vcMediaStreamDidDecryptionTimeOut:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStream:(id <VCMediaStreamProtocol>)arg1 didReceiveRTCPPackets:(NSArray *)arg2;
- (void)vcMediaStreamDidRTCPTimeOut:(id <VCMediaStreamProtocol>)arg1;
- (void)vcMediaStreamDidRTPTimeOut:(id <VCMediaStreamProtocol>)arg1;
@end

