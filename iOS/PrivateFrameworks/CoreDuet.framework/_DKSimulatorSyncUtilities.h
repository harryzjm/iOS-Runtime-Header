//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface _DKSimulatorSyncUtilities : NSObject
{
}

+ (void)_triggerInsertAndTombstoneNotificationsInKnowledgeStorage:(id)arg1 forNonLocalNewEventsFromBeginDate:(id)arg2 toEndDate:(id)arg3;
+ (void)registerSimulatedSyncNotificationsWithKnowledgeStorage:(id)arg1;
+ (void)removeSourceDeviceIDFromLocalObjects:(id)arg1;
+ (void)addLocalDeviceIDSourceOnObjects:(id)arg1;
+ (id)predicateForEventsWithLocalSourceDeviceID;
+ (id)streamNamesToSync;
+ (id)deviceID;

@end
