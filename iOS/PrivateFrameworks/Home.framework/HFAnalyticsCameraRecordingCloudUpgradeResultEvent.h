//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@interface HFAnalyticsCameraRecordingCloudUpgradeResultEvent
{
    unsigned long long _numCamerasWithRecording;
    unsigned long long _iCloudUpgradeOfferPresented;
    unsigned long long _iCloudPlanUpgradeState;
}

@property(nonatomic) unsigned long long iCloudPlanUpgradeState; // @synthesize iCloudPlanUpgradeState=_iCloudPlanUpgradeState;
@property(nonatomic) unsigned long long iCloudUpgradeOfferPresented; // @synthesize iCloudUpgradeOfferPresented=_iCloudUpgradeOfferPresented;
@property(nonatomic) unsigned long long numCamerasWithRecording; // @synthesize numCamerasWithRecording=_numCamerasWithRecording;
- (id)payload;
- (id)initWithData:(id)arg1;

@end
