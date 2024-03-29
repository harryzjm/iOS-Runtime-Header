//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class AVCBasebandCongestionDetector, AVCRateControlFeedbackController, AVCStatisticsCollector, VCNetworkFeedbackController, VCRateControlMediaController;

__attribute__((visibility("hidden")))
@interface VCSessionParticipantOneToOneConfig
{
    unsigned long long _idsParticipantID;
    int _deviceRole;
    AVCRateControlFeedbackController *_feedbackController;
    AVCStatisticsCollector *_statisticsCollector;
    AVCBasebandCongestionDetector *_basebandCongestionDetector;
    void *_audioMediaControlInfoGenerator;
    void *_videoMediaControlInfoGenerator;
    VCRateControlMediaController *_mediaController;
    struct tagHANDLE *_mediaQueue;
    struct tagVCMediaQueue *_vcMediaQueue;
    VCNetworkFeedbackController *_networkFeedbackController;
    _Bool _negotiatedVideoEnabled;
    _Bool _negotiatedScreenEnabled;
    _Bool _initUsingWifiTiers;
    int _operatingMode;
}

@property(nonatomic) _Bool initUsingWifiTiers; // @synthesize initUsingWifiTiers=_initUsingWifiTiers;
@property(nonatomic) _Bool negotiatedScreenEnabled; // @synthesize negotiatedScreenEnabled=_negotiatedScreenEnabled;
@property(nonatomic) _Bool negotiatedVideoEnabled; // @synthesize negotiatedVideoEnabled=_negotiatedVideoEnabled;
@property(nonatomic) int operatingMode; // @synthesize operatingMode=_operatingMode;
@property(retain, nonatomic) VCNetworkFeedbackController *networkFeedbackController; // @synthesize networkFeedbackController=_networkFeedbackController;
@property(nonatomic) struct tagVCMediaQueue *vcMediaQueue; // @synthesize vcMediaQueue=_vcMediaQueue;
@property(nonatomic) struct tagHANDLE *mediaQueue; // @synthesize mediaQueue=_mediaQueue;
@property(retain, nonatomic) VCRateControlMediaController *mediaController; // @synthesize mediaController=_mediaController;
@property(nonatomic) void *videoMediaControlInfoGenerator; // @synthesize videoMediaControlInfoGenerator=_videoMediaControlInfoGenerator;
@property(nonatomic) void *audioMediaControlInfoGenerator; // @synthesize audioMediaControlInfoGenerator=_audioMediaControlInfoGenerator;
@property(retain, nonatomic) AVCBasebandCongestionDetector *basebandCongestionDetector; // @synthesize basebandCongestionDetector=_basebandCongestionDetector;
@property(retain, nonatomic) AVCStatisticsCollector *statisticsCollector; // @synthesize statisticsCollector=_statisticsCollector;
@property(retain, nonatomic) AVCRateControlFeedbackController *feedbackController; // @synthesize feedbackController=_feedbackController;
@property(nonatomic) int deviceRole; // @synthesize deviceRole=_deviceRole;
@property(nonatomic) unsigned long long idsParticipantID; // @synthesize idsParticipantID=_idsParticipantID;
- (void)dealloc;
- (id)init;

@end

