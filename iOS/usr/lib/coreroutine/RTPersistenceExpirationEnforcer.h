//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class RTPersistenceManager;

@interface RTPersistenceExpirationEnforcer : NSObject
{
    RTPersistenceManager *_persistenceManager;
}

- (void).cxx_destruct;
- (_Bool)repairInvalidExpirationDatesWithContext:(id)arg1 error:(id *)arg2;
- (_Bool)removeExpiredRecordsBeforeDate:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)removeExpiredRecordsWithObjectIDs:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)removeRecordsOwnedByThisDeviceExpiredBeforeDate:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (void)mergeEntriesFromDictionary:(id)arg1 intoDictionary:(id)arg2;
- (void)mergeIdentifiersFromArray:(id)arg1 entityName:(id)arg2 intoDictionary:(id)arg3;
- (id)objectIDsByTypeAffectedByDeletingObjectWithID:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (id)objectsWithLifetimeMatchingObjectWithID:(id)arg1 context:(id)arg2 error:(id *)arg3;
- (_Bool)removeRecordsOwnedByOtherDevicesExpiredBeforeDate:(id)arg1 allowPropagation:(_Bool)arg2 context:(id)arg3 error:(id *)arg4;
- (id)collectRecordIDsByTypeExpiredBeforeDate:(id)arg1 ownedByThisDevice:(_Bool)arg2 context:(id)arg3 error:(id *)arg4;
- (id)entitiesWithDeviceAndExpirationProperty:(id)arg1 ownedByThisDevice:(_Bool)arg2;
- (id)initWithPersistenceManager:(id)arg1;
- (id)init;

@end
