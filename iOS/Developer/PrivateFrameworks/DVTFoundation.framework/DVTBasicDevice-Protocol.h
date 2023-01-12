//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <DVTFoundation/DVTCodesignableDevice-Protocol.h>

@class DVTPlatform, NSError, NSString, UTType;
@protocol DVTBasicDevice;

@protocol DVTBasicDevice <DVTCodesignableDevice>
@property(readonly) _Bool deviceIsBusy;
@property(readonly) NSError *unavailabilityError;
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
@property(readonly, copy, nonatomic) UTType *modelUTType;
@property(readonly, copy, nonatomic) NSString *modelUTI;
@property(readonly, copy, nonatomic) NSString *modelCode;
@property(readonly, copy, nonatomic) NSString *modelCodename;
@property(readonly, copy, nonatomic) NSString *modelName;
- (_Bool)isAvailableWithError:(id *)arg1;
@end
