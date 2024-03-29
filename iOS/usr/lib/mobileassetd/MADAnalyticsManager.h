//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDictionary, NSMutableDictionary, NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MADAnalyticsManager : NSObject
{
    NSObject<OS_dispatch_queue> *_stateQueue;
    _Bool _overrideClientNameAsTestTool;
    _Bool _prependClientNameWithTestTool;
    long long _reportingLevel;
    NSString *_savePath;
    NSMutableDictionary *_assetTypeEventTracker;
}

- (void).cxx_destruct;
@property(retain) NSMutableDictionary *assetTypeEventTracker; // @synthesize assetTypeEventTracker=_assetTypeEventTracker;
@property _Bool prependClientNameWithTestTool; // @synthesize prependClientNameWithTestTool=_prependClientNameWithTestTool;
@property _Bool overrideClientNameAsTestTool; // @synthesize overrideClientNameAsTestTool=_overrideClientNameAsTestTool;
@property(readonly, nonatomic) NSString *savePath; // @synthesize savePath=_savePath;
@property(readonly) long long reportingLevel; // @synthesize reportingLevel=_reportingLevel;
- (_Bool)shouldRecordEventForAssetType:(id)arg1;
- (void)recordQueryAttemptForAssetType:(id)arg1 clientName:(id)arg2 purpose:(id)arg3 result:(id)arg4 assetCount:(id)arg5 returnTypes:(id)arg6 filtered:(_Bool)arg7 requireSpecificAsset:(_Bool)arg8;
- (void)recordDownloadAttemptForAssetType:(id)arg1 clientName:(id)arg2 baseUrl:(id)arg3 relativePath:(id)arg4 purpose:(id)arg5 result:(id)arg6 analyticsFileType:(id)arg7 isAutoDownload:(_Bool)arg8 isPallas:(_Bool)arg9 pallasAssetAudience:(id)arg10 isUserPriority:(_Bool)arg11 bytesWritten:(id)arg12 bytesTransferredEst:(id)arg13 additionalData:(id)arg14;
- (_Bool)eventRecordingEnabled;
- (void)recordDownloadSuccessForAssetType:(id)arg1 notificationSuffix:(id)arg2 fileType:(id)arg3;
- (void)recordEventWithName:(id)arg1 payload:(id)arg2;
- (id)removePrefix:(id)arg1 fromString:(id)arg2;
- (id)yesNoString:(_Bool)arg1;
- (id)nilToNoneString:(id)arg1;
- (void)_queue_submitEvent:(id)arg1;
- (void)_queue_submitAllEvents;
- (void)_queue_setEvent:(id)arg1;
@property(readonly, nonatomic) NSDictionary *events;
- (void)submitAllEvents;
- (void)changeReportingLevel:(long long)arg1;
- (void)submitEventsWithName:(id)arg1;
- (void)submitEvent:(id)arg1;
- (void)removeAllEvents;
- (void)removeEventsWithName:(id)arg1;
- (void)removeEvent:(id)arg1;
- (void)setEvent:(id)arg1;
- (_Bool)saveEventToDisk:(id)arg1;
- (id)copyEventFromPath:(id)arg1;
- (id)initWithPath:(id)arg1;
- (id)init;

@end

