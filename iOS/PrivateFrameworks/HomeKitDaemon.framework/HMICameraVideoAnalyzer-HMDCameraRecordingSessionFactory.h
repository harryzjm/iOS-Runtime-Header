//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeAI/HMICameraVideoAnalyzer.h>

#import <HomeKitDaemon/HMDCameraRecordingSessionVideoAnalyzer-Protocol.h>

@class HMIHomePersonManager, NSSet, NSString;
@protocol HMDCameraRecordingSessionVideoAnalyzerDelegate;

@interface HMICameraVideoAnalyzer (HMDCameraRecordingSessionFactory) <HMDCameraRecordingSessionVideoAnalyzer>

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property __weak id <HMDCameraRecordingSessionVideoAnalyzerDelegate> delegate;
@property(readonly, copy) NSString *description;
@property(copy) NSSet *externalPersonManagers;
@property(readonly) unsigned long long hash;
@property(retain) HMIHomePersonManager *homePersonManager;
@property(readonly) Class superclass;
@end
