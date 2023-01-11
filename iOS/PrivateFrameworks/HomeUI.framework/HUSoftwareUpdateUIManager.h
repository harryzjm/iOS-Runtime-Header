//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <HomeUI/HFExecutionEnvironmentObserver-Protocol.h>
#import <HomeUI/HFSoftwareUpdateObserver-Protocol.h>

@class NSMapTable, NSString;

@interface HUSoftwareUpdateUIManager : NSObject <HFSoftwareUpdateObserver, HFExecutionEnvironmentObserver>
{
    NSMapTable *_homeBackgroundCheckMapTable;
}

+ (id)sharedManager;
@property(readonly, nonatomic) NSMapTable *homeBackgroundCheckMapTable; // @synthesize homeBackgroundCheckMapTable=_homeBackgroundCheckMapTable;
- (void).cxx_destruct;
- (void)executionEnvironmentDidEnterBackground:(id)arg1;
- (id)_markTermsAndConditionsAsReadForLicenseAgreementVersion:(id)arg1 inHome:(id)arg2;
- (_Bool)_shouldPresentTermsAndConditionsForSoftwareLicenseAgreementVersion:(id)arg1 home:(id)arg2;
- (id)presentLicensesIfNeededForSoftwareUpdate:(id)arg1 home:(id)arg2 presentationDelegate:(id)arg3;
- (_Bool)isLicensePresentationNecessaryForSoftwareUpdate:(id)arg1 home:(id)arg2 error:(out id *)arg3;
- (id)startUpdateForAccessory:(id)arg1 update:(id)arg2 presentationDelegate:(id)arg3;
- (id)startUpdatesForAccessories:(id)arg1 presentationDelegate:(id)arg2;
- (id)startUpdatesForAllAccessoriesInHome:(id)arg1 presentationDelegate:(id)arg2;
- (long long)numberOfAccessoriesWithAvailableUpdatesInHome:(id)arg1;
- (long long)numberOfAccessoriesWithAvailableUpdates:(id)arg1;
- (id)fetchAvailableUpdatesForAccessories:(id)arg1;
- (id)fetchAvailableUpdatesForHome:(id)arg1;
- (id)fetchAvailableUpdatesForAccessory:(id)arg1;
- (id)startSilentBackgroundCheckForHome:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

