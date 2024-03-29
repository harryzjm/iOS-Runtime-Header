//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTFoundation/DVTCodesignableDevice-Protocol.h>

@class DVTCPUCount, DVTFuture, DVTPlatform, NSArray, NSError, NSNumber, NSString, UTType;
@protocol DVTBasicDevice;

@protocol DVTBasicDevice <DVTCodesignableDevice>
@property(readonly) _Bool supportsSimulateVehicularCrash;
@property(readonly) _Bool supportsPerformanceAntipatternChecker;
@property(readonly) _Bool supportsMainThreadChecker;
@property(readonly) long long developerMode;
@property(readonly) _Bool supportsDeveloperMode;
@property(readonly) _Bool deviceIsBusy;
@property(readonly) NSError *lastPairingError;
@property(readonly) NSError *unavailabilityError;
@property(readonly, copy) NSNumber *busSpeedMHz;
@property(readonly, copy) NSNumber *cpuSpeedMHz;
@property(readonly, copy) NSString *cpuKind;
@property(readonly) DVTCPUCount *cpuCountDescription;
@property(readonly, getter=isAvailable) _Bool available;
@property(readonly) __weak id <DVTBasicDevice> companionDevice;
@property(readonly) _Bool isProxiedDevice;
@property(readonly, copy) NSString *nativeArchitecture;
@property(readonly) DVTPlatform *platform;
@property(readonly, copy, nonatomic) NSString *operatingSystemVersionWithBuildNumber;
@property(readonly) _Bool isInternalBuild;
@property(readonly, copy) NSString *operatingSystemBuild;
@property(readonly, copy) NSString *iOSSupportVersion;
@property(readonly, copy) NSString *operatingSystemVersion;
@property(readonly) NSArray *supportedDeviceFamilies;
@property(readonly, copy, nonatomic) UTType *modelUTType;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *thinningProductType;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelCodename;
@property(readonly, copy, nonatomic) NSString *modelName;
@property(readonly) NSString *disambiguousIdentifier;
- (_Bool)isAvailableWithError:(id *)arg1;
- (DVTFuture *)prepareSymbolCacheForTargetArch:(NSString *)arg1;
- (NSString *)deviceSupportSymbolsPathForTargetArch:(NSString *)arg1;
@end

