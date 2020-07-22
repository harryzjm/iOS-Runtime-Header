//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

#import <HomeKitDaemon/HMFTimerDelegate-Protocol.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURLSession;
@protocol OS_dispatch_queue;

@interface HMDVendorDataManager : HMFObject <HMFTimerDelegate>
{
    NSDictionary *_vendorModelEntries;
    long long _dataVersion;
    NSObject<OS_dispatch_queue> *_databaseQueue;
    NSURLSession *_urlSession;
    HMFTimer *_fetchTimer;
}

+ (id)dbURL;
+ (id)sharedVendorDataManager;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *databaseQueue; // @synthesize databaseQueue=_databaseQueue;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(retain, nonatomic) NSDictionary *vendorModelEntries; // @synthesize vendorModelEntries=_vendorModelEntries;
- (void).cxx_destruct;
- (void)timerDidFire:(id)arg1;
- (_Bool)_isSameVendorList:(id)arg1;
- (id)_modelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (id)_parseManufacturersList:(id)arg1;
- (void)_handleData:(id)arg1 fromServerWithError:(id)arg2;
- (void)_saveToLocalFile:(id)arg1;
- (_Bool)_parseDatabaseFromDictionary:(id)arg1;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)_initWithLocalFile;
- (void)_fetchDataFromServer;
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (id)init;
- (void)start;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

