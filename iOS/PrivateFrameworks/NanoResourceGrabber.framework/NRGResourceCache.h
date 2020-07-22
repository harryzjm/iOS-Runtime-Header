//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NRGResourceCache : NSObject
{
}

+ (id)cachePathForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (id)iconCacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (void)createCachePathIfNecessaryWithPairedDeviceStorePath:(id)arg1;
+ (id)cacheDirPathForAppBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)cacheDirPathForPairedDeviceStorePath:(id)arg1;
+ (void)invalidatePairedDevice:(id)arg1;
+ (void)invalidateBundleID:(id)arg1 withPairedDeviceStorePath:(id)arg2;
+ (id)iconForIconVariant:(int)arg1 inBundleID:(id)arg2 withPairedDeviceStorePath:(id)arg3;
+ (void)setIcon:(id)arg1 forIconVariant:(int)arg2 inBundleID:(id)arg3 withPairedDeviceStorePath:(id)arg4;

@end

