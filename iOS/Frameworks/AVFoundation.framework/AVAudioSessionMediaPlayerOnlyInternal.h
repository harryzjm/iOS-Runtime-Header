//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class AVWeakReference, NSDictionary, NSString;
@protocol AVAudioSessionDelegateMediaPlayerOnly;

@interface AVAudioSessionMediaPlayerOnlyInternal : NSObject
{
    AVWeakReference *weakReference;
    struct OpaqueFigPlayer *figPlayer;
    _Bool isAppAudioSession;
    _Bool isActive;
    NSString *category;
    NSString *mode;
    NSDictionary *activationContext;
    _Bool usingLongFormAudio;
    id <AVAudioSessionDelegateMediaPlayerOnly> delegate;
}

@end

