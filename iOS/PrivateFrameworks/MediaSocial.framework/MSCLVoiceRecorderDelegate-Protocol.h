//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MediaSocial/NSObject-Protocol.h>

@class MSCLVoiceRecorder;

@protocol MSCLVoiceRecorderDelegate <NSObject>

@optional
- (void)voiceRecorderDidStartRecording:(MSCLVoiceRecorder *)arg1;
- (void)voiceRecorder:(MSCLVoiceRecorder *)arg1 didUpdateAveragePower:(float)arg2;
- (void)voiceRecorder:(MSCLVoiceRecorder *)arg1 didFinishWithSuccess:(_Bool)arg2;
@end
