//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MediaPlaybackCore/ICEnvironmentMonitorObserver-Protocol.h>

@class MPCJinglePlayActivityReportingController, MPCMediaPlayerLegacyPlayer, MPCReportingPlaybackObserver, MPRTCReportingController, NSString;

@interface MPCMediaPlayerLegacyReportingController : NSObject <ICEnvironmentMonitorObserver>
{
    MPRTCReportingController *_rtcReportingController;
    MPCMediaPlayerLegacyPlayer *_player;
    MPCReportingPlaybackObserver *_reportingPlaybackObserver;
    MPCJinglePlayActivityReportingController *_jinglePlayActivityReportingController;
}

@property(retain, nonatomic) MPCJinglePlayActivityReportingController *jinglePlayActivityReportingController; // @synthesize jinglePlayActivityReportingController=_jinglePlayActivityReportingController;
@property(retain, nonatomic) MPCReportingPlaybackObserver *reportingPlaybackObserver; // @synthesize reportingPlaybackObserver=_reportingPlaybackObserver;
@property(nonatomic) __weak MPCMediaPlayerLegacyPlayer *player; // @synthesize player=_player;
- (void).cxx_destruct;
- (void)environmentMonitorDidChangeNetworkType:(id)arg1;
- (void)dealloc;
- (id)initWithController:(id)arg1;
- (id)initWithPlayer:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

