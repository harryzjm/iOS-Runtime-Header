//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface FMFNoNetworkAlert : NSObject
{
    _Bool _globalCellularEnabled;
}

+ (_Bool)isAirplaneModeEnabled;
+ (_Bool)isGlobalCellularEnabled;
+ (id)alertInfoForInternetUnavailableReason:(unsigned long long)arg1;
+ (unsigned long long)reasonForNoInternet;
+ (id)newAlertController;
@property(nonatomic, getter=isGlobalCellularEnabled) _Bool globalCellularEnabled; // @synthesize globalCellularEnabled=_globalCellularEnabled;

@end

