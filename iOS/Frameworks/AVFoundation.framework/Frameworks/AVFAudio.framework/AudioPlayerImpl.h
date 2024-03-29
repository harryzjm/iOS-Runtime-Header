//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVAudioFormat, AVAudioSession, NSArray, NSData, NSDictionary, NSURL;
@protocol AVAudioPlayerDelegate, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface AudioPlayerImpl : NSObject
{
    id <AVAudioPlayerDelegate> _delegate;
    NSData *_data;
    NSURL *_url;
    NSDictionary *_actualSettings;
    AVAudioFormat *_format;
    _Bool _playRetain;
    NSArray *_channelAssignments;
    AVAudioSession *_audioSession;
    _Bool _sessionListenerWasSet;
    unsigned long long _endInterruptionFlags;
    void *_localPlayer;
    NSObject<OS_dispatch_queue> *_gcd;
}

- (void)dealloc;
- (id)init;

@end

