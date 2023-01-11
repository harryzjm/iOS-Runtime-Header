//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UITableViewController.h>

#import <SensorKitUI/SRAuthorizationCellDelegate-Protocol.h>
#import <SensorKitUI/SRAuthorizationStoreDelegate-Protocol.h>
#import <SensorKitUI/SRSensorPrunerDelegate-Protocol.h>
#import <SensorKitUI/SRSensorReaderDelegate-Protocol.h>

@class NSArray, NSMutableArray, NSMutableSet, NSObject, NSSet, NSString, SRAuthorizationGroup;
@protocol OS_dispatch_group;

@interface SRResearchDataPerCategoryViewController : UITableViewController <SRAuthorizationCellDelegate, SRSensorReaderDelegate, SRSensorPrunerDelegate, SRAuthorizationStoreDelegate>
{
    SRAuthorizationGroup *_authGroup;
    NSMutableSet *_authorizedBundleIds;
    NSArray *_appBundles;
    NSSet *_sensorIdentifiers;
    NSMutableArray *_readers;
    NSMutableArray *_pruners;
    double _start;
    double _end;
    NSObject<OS_dispatch_group> *_fetchGroup;
    NSMutableArray *_tombstones;
    long long _numberOfDays;
    CDUnknownBlockType _cancelExportBlock;
}

+ (void)initialize;
@property(copy) CDUnknownBlockType cancelExportBlock; // @synthesize cancelExportBlock=_cancelExportBlock;
@property(nonatomic) long long numberOfDays; // @synthesize numberOfDays=_numberOfDays;
@property(retain, nonatomic) NSMutableArray *tombstones; // @synthesize tombstones=_tombstones;
@property(nonatomic) NSObject<OS_dispatch_group> *fetchGroup; // @synthesize fetchGroup=_fetchGroup;
@property(nonatomic) double end; // @synthesize end=_end;
@property(nonatomic) double start; // @synthesize start=_start;
@property(retain, nonatomic) NSMutableArray *pruners; // @synthesize pruners=_pruners;
@property(retain, nonatomic) NSMutableArray *readers; // @synthesize readers=_readers;
@property(retain, nonatomic) NSSet *sensorIdentifiers; // @synthesize sensorIdentifiers=_sensorIdentifiers;
@property(retain, nonatomic) NSArray *appBundles; // @synthesize appBundles=_appBundles;
@property(retain, nonatomic) NSMutableSet *authorizedBundleIds; // @synthesize authorizedBundleIds=_authorizedBundleIds;
@property(retain, nonatomic) SRAuthorizationGroup *authGroup; // @synthesize authGroup=_authGroup;
- (void)deleteAllUnreleasedData;
- (void)presentDownloadPath:(id)arg1 sandboxExtensionToken:(id)arg2;
- (void)cancelExport;
- (void)exportData;
- (void)showActionSheet;
- (long long)daysFromDate:(id)arg1 toDate:(id)arg2;
- (void)populateDays;
- (void)sensorReader:(id)arg1 fetchingRequest:(id)arg2 failedWithError:(id)arg3;
- (void)sensorReader:(id)arg1 didCompleteFetch:(id)arg2;
- (_Bool)sensorReader:(id)arg1 fetchingRequest:(id)arg2 didFetchResult:(id)arg3;
- (void)confirmAuthChangeForBundle:(id)arg1 value:(_Bool)arg2;
- (void)setValue:(_Bool)arg1 indexPath:(id)arg2;
- (id)prepareExportCell;
- (id)prepareDeleteCell;
- (id)prepareDayCell;
- (void)tableView:(id)arg1 didSelectRowAtIndexPath:(id)arg2;
- (id)tableView:(id)arg1 cellForRowAtIndexPath:(id)arg2;
- (id)bundleForRow:(unsigned long long)arg1;
- (id)tableView:(id)arg1 titleForFooterInSection:(long long)arg2;
- (id)tableView:(id)arg1 viewForHeaderInSection:(long long)arg2;
- (id)tableView:(id)arg1 titleForHeaderInSection:(long long)arg2;
- (long long)tableView:(id)arg1 numberOfRowsInSection:(long long)arg2;
- (long long)numberOfSectionsInTableView:(id)arg1;
- (void)dealloc;
- (void)viewWillAppear:(_Bool)arg1;
- (void)viewDidLoad;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
