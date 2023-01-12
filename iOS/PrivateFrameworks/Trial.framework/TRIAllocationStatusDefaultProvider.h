//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Trial/TRIAllocationStatusProvider-Protocol.h>

@class _PASLock, _PASXPCClientHelper;

@interface TRIAllocationStatusDefaultProvider : NSObject <TRIAllocationStatusProvider>
{
    _PASXPCClientHelper *_clientHelper;
    _PASXPCClientHelper *_internalHelper;
    _PASLock *_lock;
}

- (void).cxx_destruct;
- (_Bool)removeUpdateHandlerForToken:(id)arg1;
- (id)addStatusUpdateHandlerForEnvironment:(int)arg1 queue:(id)arg2 block:(CDUnknownBlockType)arg3;
- (_Bool)enumerateActiveRolloutsWithError:(id *)arg1 block:(CDUnknownBlockType)arg2;
- (id)activeExperimentInformationWithError:(id *)arg1;
- (_Bool)enumerateActiveExperimentsForEnvironment:(int)arg1 error:(id *)arg2 block:(CDUnknownBlockType)arg3;
- (id)enumerateExperimentStatusesForEnvironment:(int)arg1 startingFromCursor:(id)arg2 error:(id *)arg3 block:(CDUnknownBlockType)arg4;
- (id)_defaultQueue;
- (id)syncProxyWithErrorHandler:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)init;

@end
