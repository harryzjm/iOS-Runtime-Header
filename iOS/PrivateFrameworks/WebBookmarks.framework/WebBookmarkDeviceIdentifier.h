//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSURL, NSUUID;
@protocol OS_dispatch_queue, OS_dispatch_source;

@interface WebBookmarkDeviceIdentifier : NSObject
{
    NSURL *_plistURL;
    NSUUID *_UUID;
    _Bool _encounteredErrorWhileObtainingUUID;
    NSObject<OS_dispatch_queue> *_queue;
    NSObject<OS_dispatch_source> *_fileMonitor;
    _Bool _readOnly;
}

+ (void)_postWebBookmarkMetaDataChangeDistributedNotification:(id)arg1;
+ (void)clearDeviceIdentifierWithPlistURL:(id)arg1;
@property(nonatomic, getter=isReadOnly) _Bool readOnly; // @synthesize readOnly=_readOnly;
- (void).cxx_destruct;
- (id)description;
- (void)stopObservingChanges;
@property(readonly, nonatomic) _Bool encounteredErrorWhileObtainingUUID;
@property(readonly, nonatomic) NSUUID *UUID;
- (void)_metaDataDidChange:(id)arg1;
- (void)_createOrLoadMetaData;
- (void)_cancelMonitoringMetaDataFile;
- (void)_resumeMonitoringMetaDataFile;
- (void)_registerForMedadaDataFileChangeDistributedNotification;
- (void)dealloc;
- (id)initWithPlistURL:(id)arg1 readOnly:(_Bool)arg2;

@end

