//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class IMAVCamera, NSArray, NSMutableArray;
@protocol OS_dispatch_queue;

@interface IMAVCameraController : NSObject
{
    NSMutableArray *_cameras;
    NSObject<OS_dispatch_queue> *_queue;
}

+ (id)sharedInstance;
@property(retain, nonatomic) IMAVCamera *currentCamera;
- (void)_loadSavedCamera;
- (void)_rebuildCameraList;
- (id)cameraWithDeviceID:(unsigned int)arg1;
@property(readonly, retain, nonatomic) NSArray *cameras;
- (void)dealloc;
- (id)init;

@end
