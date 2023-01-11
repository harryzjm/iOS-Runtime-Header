//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFLogging-Protocol.h>

@class NSObject, NSString;
@protocol HMDCameraBulletinBoard, HMDFileManager, OS_dispatch_queue;

@interface HMDCameraClipUserNotificationCenter : HMFObject <HMFLogging>
{
    id <HMDCameraBulletinBoard> _bulletinBoard;
    NSObject<OS_dispatch_queue> *_workQueue;
    id <HMDFileManager> _fileManager;
}

+ (id)logCategory;
- (void).cxx_destruct;
@property(readonly) id <HMDFileManager> fileManager; // @synthesize fileManager=_fileManager;
@property(readonly) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
@property(readonly) id <HMDCameraBulletinBoard> bulletinBoard; // @synthesize bulletinBoard=_bulletinBoard;
- (id)_firstAvailableHeroFrameURLForSignificantEvents:(id)arg1 cameraProfile:(id)arg2;
- (id)_writeHeroFrameData:(id)arg1;
- (void)_postNotificationForSignificantEvents:(id)arg1 cameraProfile:(id)arg2 heroFrameURL:(id)arg3;
- (void)_postNotificationForClipSignificantEvent:(id)arg1 cameraProfile:(id)arg2 canFetchHeroFrame:(_Bool)arg3;
- (void)removeEventNotificationForClipWithUUID:(id)arg1;
- (void)postNotificationForClipSignificantEvent:(id)arg1 cameraProfile:(id)arg2;
- (void)postNotificationForSignificantEvent:(id)arg1 heroFrameData:(id)arg2 cameraProfile:(id)arg3;
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2 fileManager:(id)arg3;
- (id)initWithBulletinBoard:(id)arg1 workQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
