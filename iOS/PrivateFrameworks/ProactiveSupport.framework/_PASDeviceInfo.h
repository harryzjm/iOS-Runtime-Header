//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _PASDeviceInfo : NSObject
{
    int _batterySaverModeToken;
}

+ (_Bool)shouldIncludePredictionLogs;
+ (_Bool)isBetaBuild;
+ (_Bool)isInternalBuild;
+ (_Bool)isDemoModeEnabled;
+ (_Bool)isBatterySaverEnabled;
+ (_Bool)isLowEndHardware;
+ (id)sharedInstance;
- (void)dealloc;
- (id)init;

@end
