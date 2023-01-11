//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface HDDatabaseMigrationStep : NSObject
{
    CDUnknownBlockType _migrationHandler;
    long long _finalSchemaVersion;
    long long _foreignKeyStatus;
    NSString *_schemaName;
    long long _requiredPrimarySchemaVersion;
}

+ (id)migrationStepWithForeignKeysDisabledFrom:(long long)arg1 to:(long long)arg2 handler:(CDUnknownBlockType)arg3;
+ (id)migrationStepFrom:(long long)arg1 to:(long long)arg2 handler:(CDUnknownBlockType)arg3;
- (void).cxx_destruct;
@property(readonly, nonatomic) long long requiredPrimarySchemaVersion; // @synthesize requiredPrimarySchemaVersion=_requiredPrimarySchemaVersion;
@property(readonly, copy, nonatomic) NSString *schemaName; // @synthesize schemaName=_schemaName;
@property(nonatomic) long long foreignKeyStatus; // @synthesize foreignKeyStatus=_foreignKeyStatus;
@property(readonly, nonatomic) long long finalSchemaVersion; // @synthesize finalSchemaVersion=_finalSchemaVersion;
@property(readonly, copy, nonatomic) CDUnknownBlockType migrationHandler; // @synthesize migrationHandler=_migrationHandler;
- (id)description;
- (id)initForSchema:(id)arg1 toVersion:(long long)arg2 requiringVersion:(long long)arg3 foreignKeys:(long long)arg4 handler:(CDUnknownBlockType)arg5;

@end
