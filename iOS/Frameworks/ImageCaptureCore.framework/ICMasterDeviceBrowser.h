//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MSCameraDeviceManager, NSMutableArray;

__attribute__((visibility("hidden")))
@interface ICMasterDeviceBrowser : NSObject
{
    NSMutableArray *_devices;
    NSMutableArray *_browsers;
    long long _numberOfBrowsingBrowsers;
    id _ptpDevManager;
    MSCameraDeviceManager *_msDevManager;
    _Bool _icpref_hwEnablePTPCamera;
    _Bool _icpref_hwEnableLiveFiles;
    _Bool _icpref_hwEnableMagicDisk;
    id _monitoringContext;
}

+ (_Bool)exists;
+ (id)defaultBrowser;
@property(retain, nonatomic) id monitoringContext; // @synthesize monitoringContext=_monitoringContext;
@property(readonly) NSMutableArray *browsers; // @synthesize browsers=_browsers;
- (id)deviceWithDelegate:(id)arg1;
- (void)handleImageCaptureEventNotification:(id)arg1;
- (void)handleCommandCompletionNotification:(id)arg1;
@property(readonly) NSMutableArray *devices; // @synthesize devices=_devices;
- (void)stop:(id)arg1;
- (int)start:(id)arg1;
- (_Bool)handleMount:(id)arg1 force:(_Bool)arg2;
- (void)handleUnmount:(id)arg1 force:(_Bool)arg2;
- (void)beginMonitoring;
- (int)addLiveFilesMount;
- (void)removePTPCamera:(id)arg1;
- (int)addPTPCamera:(id)arg1;
- (void)removeBrowser:(id)arg1;
- (void)addBrowser:(id)arg1;
- (void)dealloc;
- (id)init;

@end
