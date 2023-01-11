//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class HMBLocalZone, NSObject, NSString, NSUUID;
@protocol OS_dispatch_queue;

@interface HMDCameraClipImporter : HMFObject <HMFLogging>
{
    NSString *_logIdentifier;
    HMBLocalZone *_localZone;
    NSObject<OS_dispatch_queue> *_workQueue;
    NSUUID *_cameraProfileUUID;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly, copy) NSUUID *cameraProfileUUID; // @synthesize cameraProfileUUID=_cameraProfileUUID;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) HMBLocalZone *localZone; // @synthesize localZone=_localZone;
@property(readonly) NSString *logIdentifier; // @synthesize logIdentifier=_logIdentifier;
- (id)importClipsWithImportData:(id)arg1;
- (id)initWithLocalZone:(id)arg1 cameraProfileUUID:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
