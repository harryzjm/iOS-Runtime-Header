//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSManagedObjectID, NSPersistentStoreCoordinator, RTDarwinNotificationHelper;

@interface RTPersistenceRemoteStore : NSObject
{
    NSPersistentStoreCoordinator *_coordinator;
    NSManagedObjectID *_currentDeviceManagedObjectId;
    RTDarwinNotificationHelper *_notificationHelper;
}

- (void).cxx_destruct;
- (id)createManagedObjectContext;
- (id)_createManagedObjectContext;
- (void)updateCurrentDeviceMOIDWithContext:(id)arg1;
- (id)initWithReadOnly:(_Bool)arg1;
- (id)init;

@end
