//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFSystemInfoMigrationDataSourceDelegate-Protocol.h>
#import <HMFoundation/HMFSystemInfoNameDataSourceDelegate-Protocol.h>

@class HMFMACAddress, HMFSoftwareVersion, NSString;
@protocol HMFSystemInfoBluetoothLEDataSource, HMFSystemInfoMarketingInformationDataSource, HMFSystemInfoMigrationDataSource, HMFSystemInfoNameDataSource, HMFSystemInfoProductInfoDataSource, HMFSystemInfoSerialNumberDataSource, HMFSystemInfoSoftwareVersionDataSource, HMFSystemInfoWiFiDataSource;

@interface HMFSystemInfo <HMFSystemInfoNameDataSourceDelegate, HMFSystemInfoMigrationDataSourceDelegate>
{
    id <HMFSystemInfoNameDataSource> _nameDataSource;
    id <HMFSystemInfoMarketingInformationDataSource> _marketingDataSource;
    id <HMFSystemInfoSerialNumberDataSource> _serialNumberDataSource;
    id <HMFSystemInfoProductInfoDataSource> _productInfoDataSource;
    id <HMFSystemInfoSoftwareVersionDataSource> _softwareVersionDataSource;
    id <HMFSystemInfoMigrationDataSource> _migrationDataSource;
    id <HMFSystemInfoWiFiDataSource> _WiFiDataSource;
    id <HMFSystemInfoBluetoothLEDataSource> _bluetoothLEDataSource;
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
+ (id)systemInfo;
@property(readonly, nonatomic) id <HMFSystemInfoBluetoothLEDataSource> bluetoothLEDataSource; // @synthesize bluetoothLEDataSource=_bluetoothLEDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoWiFiDataSource> WiFiDataSource; // @synthesize WiFiDataSource=_WiFiDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoMigrationDataSource> migrationDataSource; // @synthesize migrationDataSource=_migrationDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoSoftwareVersionDataSource> softwareVersionDataSource; // @synthesize softwareVersionDataSource=_softwareVersionDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoProductInfoDataSource> productInfoDataSource; // @synthesize productInfoDataSource=_productInfoDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoSerialNumberDataSource> serialNumberDataSource; // @synthesize serialNumberDataSource=_serialNumberDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoMarketingInformationDataSource> marketingDataSource; // @synthesize marketingDataSource=_marketingDataSource;
@property(readonly, nonatomic) id <HMFSystemInfoNameDataSource> nameDataSource; // @synthesize nameDataSource=_nameDataSource;
- (void).cxx_destruct;
@property(readonly) _Bool supportsBLE;
@property(readonly, copy) HMFMACAddress *WiFiInterfaceMACAddress;
- (void)dataSource:(id)arg1 didUpdateMigrating:(_Bool)arg2;
@property(readonly, getter=isMigrating) _Bool migrating;
@property(readonly, copy) HMFSoftwareVersion *softwareVersion;
@property(readonly) long long productVariant;
@property(readonly) long long productClass;
@property(readonly) long long productPlatform;
@property(readonly, copy) NSString *serialNumber;
@property(readonly, copy) NSString *regionInfo;
@property(readonly, copy) NSString *model;
- (void)dataSource:(id)arg1 didUpdateName:(id)arg2;
@property(readonly, copy) NSString *name;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

