//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpeech/NSObject-Protocol.h>

@class NSDictionary, NSURL;
@protocol CSAudioAlertProvidingDelegate;

@protocol CSAudioAlertProviding <NSObject>
- (void)configureAlertBehavior:(NSDictionary *)arg1;
- (unsigned long long)alertStartTime;
- (_Bool)playRecordStartingAlertAndResetEndpointerWithAlertOverride:(long long)arg1;
- (_Bool)playAlertSoundForType:(long long)arg1;
- (_Bool)setAlertSoundFromURL:(NSURL *)arg1 forType:(long long)arg2 force:(_Bool)arg3;
- (void)setAudioAlertDelegate:(id <CSAudioAlertProvidingDelegate>)arg1;
@end

