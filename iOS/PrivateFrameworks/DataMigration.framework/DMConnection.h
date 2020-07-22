//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class DMXPCConnection;

@interface DMConnection : NSObject
{
    DMXPCConnection *_connection;
}

+ (id)connection;
- (void).cxx_destruct;
- (void)migrationPhaseDescription:(CDUnknownBlockType)arg1;
- (void)reportMigrationFailure;
- (void)forceMigrationOnNextRebootWithCompletion:(CDUnknownBlockType)arg1;
- (void)testMigrationUIWithProgress:(_Bool)arg1 forceInvert:(_Bool)arg2 completion:(CDUnknownBlockType)arg3;
- (void)changeVisibility:(_Bool)arg1 completion:(CDUnknownBlockType)arg2;
- (void)orderedPluginIdentifiersWithCompletion:(CDUnknownBlockType)arg1;
- (void)migrateCheckingNecessity:(_Bool)arg1 lastRelevantPlugin:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)previousBuildVersion:(CDUnknownBlockType)arg1;
- (void)userDataDisposition:(CDUnknownBlockType)arg1;
- (void)isMigrationNeeded:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
