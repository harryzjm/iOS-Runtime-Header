//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreUtils/CUActivatable-Protocol.h>
#import <CoreUtils/CUEnvironmentable-Protocol.h>

@class CUEnvironment;
@protocol OS_dispatch_queue;

@interface CUSetupHandler : NSObject <CUActivatable, CUEnvironmentable>
{
    _Bool _invalidateCalled;
    _Bool _invalidateDone;
    NSObject<OS_dispatch_queue> *_dispatchQueue;
    CDUnknownBlockType _invalidationHandler;
    CUEnvironment *_environment;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CUEnvironment *environment; // @synthesize environment=_environment;
@property(copy, nonatomic) CDUnknownBlockType invalidationHandler; // @synthesize invalidationHandler=_invalidationHandler;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *dispatchQueue; // @synthesize dispatchQueue=_dispatchQueue;
- (void)_invalidated;
- (void)_invalidate;
- (void)invalidate;
- (void)_activateWithCompletion:(CDUnknownBlockType)arg1;
- (void)activateWithCompletion:(CDUnknownBlockType)arg1;
- (id)init;

@end
