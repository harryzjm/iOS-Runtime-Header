//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DBManager;

@interface CallDBManager : NSObject
{
    _Bool _deviceUnlocked;
    unsigned char _dataStoreType;
    unsigned char _notifyDataStoreChangeReason;
    DBManager *_dbManager;
    id _deviceUnlockNotificationRef;
}

+ (id)getDBLocationIsSandboxed:(_Bool)arg1 isTemporary:(_Bool)arg2 error:(unsigned char *)arg3;
+ (id)dataStoreName;
+ (id)modelURL;
- (void).cxx_destruct;
@property(retain) id deviceUnlockNotificationRef; // @synthesize deviceUnlockNotificationRef=_deviceUnlockNotificationRef;
@property unsigned char notifyDataStoreChangeReason; // @synthesize notifyDataStoreChangeReason=_notifyDataStoreChangeReason;
@property unsigned char dataStoreType; // @synthesize dataStoreType=_dataStoreType;
@property _Bool deviceUnlocked; // @synthesize deviceUnlocked=_deviceUnlocked;
@property(retain, nonatomic) DBManager *dbManager; // @synthesize dbManager=_dbManager;
- (void)dealloc;
- (void)handleTemporaryCreated;
- (void)handlePermanentCreated;
- (id)createManagedObjectContext;
- (_Bool)notifyDataStoreChanged;
- (void)moveCallsFromTempDatabase;
- (id)permDBLocation:(unsigned char *)arg1;
- (id)tempDBLocation:(unsigned char *)arg1;
- (void)createTemporary;
- (_Bool)shouldCreateTemporary;
- (void)createPermanent;
- (_Bool)shouldCreatePermanent;
- (void)registerForNotifications;
- (void)createDataStore;
- (void)reFetchState;
- (id)init;

@end
