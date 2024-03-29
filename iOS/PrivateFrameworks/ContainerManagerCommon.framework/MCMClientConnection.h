//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol MCMCommandContext;

__attribute__((visibility("hidden")))
@interface MCMClientConnection : NSObject
{
    id <MCMCommandContext> _context;
}

+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1;
+ (id)privilegedClientConnectionWithUserIdentity:(id)arg1 kernel:(_Bool)arg2;
+ (id)sharedClientConnection;
- (void).cxx_destruct;
@property(readonly, nonatomic) id <MCMCommandContext> context; // @synthesize context=_context;
- (id)_commandForResumedDeleteOperationsWithResultPromise:(id)arg1;
- (void)_resumeDeleteOperations;
- (void)_regenerateAllSystemContainerPaths;
- (void)rebootContainerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;
- (void)rebootContainerManagerSetup;
- (void)_cleanupOprhanedCodeSigningMappingData;
- (_Bool)_containerURL:(id)arg1 isValidForContainerClass:(unsigned long long)arg2;
- (void)_cleanupOrphanedDataForDirectories:(id)arg1 containerClass:(unsigned long long)arg2 forUserIdentity:(id)arg3;
- (void)containerManagerCleanupWithCompletion:(CDUnknownBlockType)arg1;
- (void)containerManagerSetup;
- (id)clientBundleIdentifier;
- (id)initWithContext:(id)arg1;
- (id)init;

@end

