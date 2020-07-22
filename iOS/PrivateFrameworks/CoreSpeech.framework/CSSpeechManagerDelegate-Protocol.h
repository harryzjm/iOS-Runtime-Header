//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class AVVCAudioBuffer, CSAudioChunk, CSSpeechManager, NSDictionary, NSError;

@protocol CSSpeechManagerDelegate <NSObject>
- (void)speechManagerDidStopForwarding:(CSSpeechManager *)arg1 forReason:(long long)arg2;
- (void)speechManagerDidStartForwarding:(CSSpeechManager *)arg1 successfully:(_Bool)arg2 error:(NSError *)arg3;
- (void)speechManagerLPCMRecordBufferAvailable:(CSSpeechManager *)arg1 chunk:(CSAudioChunk *)arg2;
- (void)speechManagerRecordBufferAvailable:(CSSpeechManager *)arg1 buffer:(AVVCAudioBuffer *)arg2;

@optional
- (void)speechManagerEndRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1 withContext:(NSDictionary *)arg2;
- (void)speechManagerBeginRecordInterruption:(CSSpeechManager *)arg1;
- (void)speechManagerRecordHardwareConfigurationDidChange:(CSSpeechManager *)arg1 toConfiguration:(long long)arg2;
- (NSDictionary *)speechManagerRecordingContext;
@end
