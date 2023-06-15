//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class HMFTimer, NSDictionary, NSObject, NSString, NSURL, NSURLSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface HMDVendorDataManager : HMFObject
{
    NSObject<OS_dispatch_queue> *_workQueue;
    NSURLSession *_urlSession;
    HMFTimer *_fetchTimer;
    long long _dataVersion;
    NSDictionary *_collectionsByManufacturer;
    NSDictionary *_entriesByProductData;
}

+ (id)logCategory;
+ (id)dbURL;
+ (id)sharedVendorDataManager;
- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *entriesByProductData; // @synthesize entriesByProductData=_entriesByProductData;
@property(retain, nonatomic) NSDictionary *collectionsByManufacturer; // @synthesize collectionsByManufacturer=_collectionsByManufacturer;
@property(nonatomic) long long dataVersion; // @synthesize dataVersion=_dataVersion;
@property(readonly, nonatomic) HMFTimer *fetchTimer; // @synthesize fetchTimer=_fetchTimer;
@property(readonly, nonatomic) NSURLSession *urlSession; // @synthesize urlSession=_urlSession;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *workQueue; // @synthesize workQueue=_workQueue;
- (void)timerDidFire:(id)arg1;
- (_Bool)_parseManufacturersList:(id)arg1 collectionsByManufacturer:(id *)arg2 entriesByProductData:(id *)arg3;
- (id)_parseVendorModelEntryForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3;
- (id)_modelsStringForManufacturer:(id)arg1 model:(id)arg2 dictionary:(id)arg3 key:(id)arg4;
- (_Bool)_parseDatabaseFromDictionary:(id)arg1 dataVersion:(long long *)arg2 collectionsByManufacturer:(id *)arg3 entriesByProductData:(id *)arg4;
- (void)_handleDataFromServer:(id)arg1;
- (void)_handleServerResponse:(id)arg1 withData:(id)arg2 error:(id)arg3;
- (void)_fetchDataFromServer;
- (void)_start;
- (void)_loadDatabaseFromLocalFiles;
- (_Bool)_loadDatabaseFromFilePath:(id)arg1 fileDescription:(id)arg2;
- (_Bool)_loadDatabaseFromFileURL:(id)arg1 fileDescription:(id)arg2;
- (_Bool)_loadDatabaseFromDictionary:(id)arg1;
@property(readonly, nonatomic) NSURL *urlForBundledInternalPlist;
@property(readonly, nonatomic) NSURL *urlForBundledPlist;
- (_Bool)databaseContainsManufacturer:(id)arg1;
- (id)vendorModelEntryForProductData:(id)arg1;
- (id)vendorModelEntryForManufacturer:(id)arg1 model:(id)arg2;
- (id)modelCollectionForManufacturer:(id)arg1;
- (id)initWithDefaults;
- (id)initWithWorkQueue:(id)arg1 urlSession:(id)arg2 fetchTimer:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

