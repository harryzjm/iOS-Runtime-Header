//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WFWorkflowMigrator : NSObject
{
}

+ (void)migrateWorkflowIfNeeded:(id)arg1 completion:(CDUnknownBlockType)arg2;
+ (void)registerMigrationClass:(Class)arg1;
+ (id)migrationClasses;
+ (void)registerAllWorkflowKitMigrationClasses;
+ (void)initialize;

@end
