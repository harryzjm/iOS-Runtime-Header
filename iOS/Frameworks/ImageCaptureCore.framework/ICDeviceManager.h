//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableArray, NSMutableDictionary, NSOperationQueue, NSString, NSXPCConnection;

__attribute__((visibility("hidden")))
@interface ICDeviceManager : NSObject
{
    NSXPCConnection *_managerConnection;
    NSMutableArray *_deviceHandles;
    struct os_unfair_lock_s _deviceHandlesLock;
    NSDictionary *_deviceMatchingInfo;
    NSMutableDictionary *_devices;
    NSOperationQueue *_deviceOperationQueue;
    struct os_unfair_lock_s _deviceOperationQueueLock;
    _Bool _deviceOperationQueueSuspended;
    _Bool _managerIsRunning;
    unsigned int _managerInvalidationCount;
    _Bool _controlAuthorizedOnce;
}

@property(retain, nonatomic) NSMutableDictionary *devices; // @synthesize devices=_devices;
@property(retain, nonatomic) NSXPCConnection *managerConnection; // @synthesize managerConnection=_managerConnection;
@property(retain) NSOperationQueue *deviceOperations; // @synthesize deviceOperations=_deviceOperationQueue;
- (void)setDeviceOperationQueueMaxConcurrentOperationCount:(unsigned long long)arg1;
- (void)setDeviceOperationQueueName:(id)arg1;
- (void)resumeOperations;
- (void)suspendOperations;
- (void)addInteractiveOperation:(id)arg1;
- (void)addInitiatedOperation:(id)arg1;
- (void)postNotification:(id)arg1;
- (void)postCommandCompletionNotification:(id)arg1;
- (void)enumerateContent;
- (void)unregisterDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (void)registerDevice:(id)arg1 forImageCaptureEventNotificationsImp:(id)arg2;
- (void)sendDevicePTPCommandImp:(id)arg1;
- (void)ejectImp:(id)arg1;
- (void)downloadFileImp:(id)arg1;
- (void)deleteFileImp:(id)arg1;
- (void)getSecurityScopedURLImp:(id)arg1;
- (void)getFileDataImp:(id)arg1;
- (void)getFileMetadataImp:(id)arg1;
- (void)getFileThumbnailImp:(id)arg1;
- (void)syncClockImp:(id)arg1;
- (void)openDeviceImp:(id)arg1;
- (long long)getSecurityScopedURL:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)ejectDevice:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)unregisterDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
- (long long)registerDevice:(id)arg1 forImageCaptureEventNotifications:(id)arg2;
- (long long)sendDevice:(id)arg1 ptpCommand:(id)arg2 andPayload:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)downloadFile:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)deleteFile:(id)arg1 fromDevice:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)syncClock:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (long long)closeSession:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)openSession:(id)arg1 withOptions:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (long long)getFileData:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getFileMetadata:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)getFileThumbnail:(id)arg1 fromDevice:(id)arg2 withOptions:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (long long)closeDevice:(id)arg1 contextInfo:(void *)arg2;
- (long long)openDevice:(id)arg1 contextInfo:(void *)arg2;
- (id)deviceForUUID:(id)arg1;
- (id)deviceForConnection:(id)arg1;
- (void)dealloc;
- (_Bool)openRemoteDeviceManager;
- (id)remoteManager;
- (void)startDeviceWithHandle:(id)arg1;
- (id)deviceManagerConnection;
- (void)closeSessionImp:(id)arg1;
- (void)openSessionImp:(id)arg1;
- (void)closeDeviceImp:(id)arg1;
- (void)closeDeviceHandle:(id)arg1;
- (void)notifyRemovedDevice:(id)arg1;
- (void)notifyAddedDevice:(id)arg1;
- (void)getDeviceList;
- (void)openDeviceHandle:(id)arg1;
- (void)addSelectorToInterface:(id)arg1 selectorString:(id)arg2 origin:(_Bool)arg3;
- (void)restartRunning;
- (void)stopRunning;
- (void)startRunning;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

