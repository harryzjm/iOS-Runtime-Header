//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <AVConference/VCServerDelegate-Protocol.h>

@protocol VCAudioSessionDelegate <VCServerDelegate>

@optional
- (void)didSessionSampleRateChange;
- (void)didSessionEndQuietTime;
- (void)didSessionBeginQuietTime;
- (void)didSessionEnd;
- (void)didSessionStop;
- (void)didSessionResume;
- (void)didSessionPause;
@end

