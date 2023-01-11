//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface HAENVolumeControl : NSObject
{
    int _pid;
    _Bool _EUVolumeLimitFlagOn;
    _Bool _SKVolumeLimitFlagOn;
    _Bool _haenFeatureEnabled;
    _Bool _mxVolumeLimitOn;
    _Bool _wiredHeadphoneConnected;
    struct os_unfair_lock_s _lock;
}

+ (id)sharedInstance;
- (void)wiredHeadphoneConnected:(_Bool)arg1;
- (void)_updateMXVolumeLimit;
- (void)updateMXVolumeLimitStatus;
- (_Bool)_RLSAllowsMXVolumeLimit;
- (void)_setMXVolumeLimit:(_Bool)arg1;
- (void)_updateFlags;
- (void)_fetchCategory:(const struct __CFString *)arg1 routeInfo:(CDStruct_adee1754 *)arg2;
- (void)limitVolumeTo:(float)arg1 category:(const struct __CFString *)arg2 route:(CDStruct_adee1754 *)arg3 actionResult:(unsigned int *)arg4;
- (unsigned int)limitVolume:(id)arg1;
- (float)getCurrentVolumeForCategory:(const struct __CFString *)arg1 route:(CDStruct_adee1754 *)arg2;
- (float)computeLimitedVolume:(float)arg1 event:(id)arg2 action:(unsigned int *)arg3;
- (id)init;

@end
