//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface EKTempEventStoreFactory : NSObject
{
}

+ (void)_makeEmptyDBInDirectory:(id)arg1;
+ (void)_setupCoreDataInDirectory:(id)arg1;
+ (void)_createEmptyDirectory:(id)arg1;
+ (void)createTempCalendarStoreAtDirectory:(id)arg1;
+ (id)_tempBase;
+ (id)tempCalendarStoreDirectory:(id *)arg1;
+ (int)_storeTypeForTestBackingStoreType:(long long)arg1;
+ (id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id *)arg3 forDirectory:(id *)arg4 existingPath:(id)arg5;
+ (id)createEventStoreWithType:(long long)arg1 options:(id)arg2 forPath:(id *)arg3 forDirectory:(id *)arg4;
+ (void)createTempCalendarStoreForPath:(id *)arg1 forDirectory:(id *)arg2;
+ (id)createEventStoreWithType:(long long)arg1;

@end

