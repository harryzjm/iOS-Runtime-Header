//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString;

__attribute__((visibility("hidden")))
@interface HDHealthMedicationsPluginUnprotectedDatabaseSchema : NSObject
{
}

- (void)registerMigrationStepsWithMigrator:(id)arg1 schemaName:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *databaseEntities;
@property(readonly, nonatomic) long long currentSchemaVersion;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

