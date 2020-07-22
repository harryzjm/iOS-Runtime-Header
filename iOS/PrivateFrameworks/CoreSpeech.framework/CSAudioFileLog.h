//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL;
@protocol OS_dispatch_queue;

@interface CSAudioFileLog : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    struct OpaqueExtAudioFile *_audioFile;
    struct AudioStreamBasicDescription _asbd;
    NSURL *_url;
    unsigned int _audioLength;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
- (void)stopRecording;
- (void)appendAudioData:(id)arg1;
- (void)startRecording;
- (void)_closeAudioFile;
- (void)dealloc;
- (id)init;

@end
