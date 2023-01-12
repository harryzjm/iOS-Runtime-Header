//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "VUIJSObject.h"

@class NSString;

__attribute__((visibility("hidden")))
@interface VUIJSDevice : VUIJSObject
{
    id _networkPropertiesChangedToken;
}

+ (id)getMobileGestaltString:(struct __CFString *)arg1;
- (void).cxx_destruct;
@property(readonly, nonatomic) _Bool supportsSharedWatchPostPlayBinge;
@property(readonly, nonatomic) _Bool isUI;
@property(readonly, nonatomic) NSString *osBuildNumber;
@property(readonly, nonatomic) _Bool isSeedBuild;
@property(readonly, nonatomic) _Bool isInRetailDemoMode;
@property(readonly, nonatomic) NSString *networkType;
@property(readonly, nonatomic) _Bool runningAnInternalBuild;
@property(readonly, nonatomic) _Bool isInAirplaneMode;
@property(readonly, nonatomic) _Bool isNetworkReachable;
@property(readonly, nonatomic) NSString *productType;
@property(readonly, nonatomic) NSString *model;
@property(readonly, nonatomic) NSString *systemVersion;
@property(readonly, nonatomic) NSString *appIdentifier;
@property(readonly, nonatomic) NSString *appVersion;
- (void)dealloc;
- (id)initWithAppContext:(id)arg1;

@end

