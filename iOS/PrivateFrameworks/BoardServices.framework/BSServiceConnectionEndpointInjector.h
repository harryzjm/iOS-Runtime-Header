//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BoardServices/BSInvalidatable-Protocol.h>
#import <BoardServices/BSServiceConnectionEndpointInjectorConfiguring-Protocol.h>

@class BSServiceManager, NSArray, NSString, RBSAssertion, RBSTarget;

@interface BSServiceConnectionEndpointInjector : NSObject <BSServiceConnectionEndpointInjectorConfiguring, BSInvalidatable>
{
    struct os_unfair_lock_s _lock;
    BSServiceManager *_manager;
    RBSTarget *_target;
    NSArray *_additionalAttributes;
    NSString *_domain;
    NSString *_service;
    NSString *_instance;
    NSString *_inheritingEnvironment;
    RBSAssertion *_assertion;
    _Bool _invalidated;
}

+ (id)injectorWithConfigurator:(CDUnknownBlockType)arg1;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)setAdditionalAttributes:(id)arg1;
- (void)setInheritingEnvironment:(id)arg1;
- (void)setInstance:(id)arg1;
- (void)setService:(id)arg1;
- (void)setDomain:(id)arg1;
- (void)setTarget:(id)arg1;
- (void)dealloc;
- (id)_initWithManager:(id)arg1 configurator:(CDUnknownBlockType)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
