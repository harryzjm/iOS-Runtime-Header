//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _KSDeviceStateMonitor : NSObject
{
    _Bool _isContentProtectionAvailable;
}

+ (_Bool)isRunningOnInternalBuild;
+ (id)deviceStateMonitor;
@property(nonatomic) _Bool isContentProtectionAvailable; // @synthesize isContentProtectionAvailable=_isContentProtectionAvailable;
- (_Bool)isDataAvailableForClassC;
- (void)dealloc;
- (id)init;

@end
