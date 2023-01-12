//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HealthDaemon/NSObject-Protocol.h>

@class HKConceptIdentifier, HKUserDomainConceptTypeIdentifier, NSArray;

@protocol HKUserDomainConceptStoreServerInterface <NSObject>
- (void)remote_createAndStoreUserDomainConceptWithConceptIdentifier:(HKConceptIdentifier *)arg1 additionalProperties:(NSArray *)arg2 userDomainConceptTypeIdentifier:(HKUserDomainConceptTypeIdentifier *)arg3 completion:(void (^)(HKUserDomainConcept *, NSError *))arg4;
- (void)remote_observeUserDomainConceptChanges:(_Bool)arg1 completion:(void (^)(_Bool, NSError *))arg2;
- (void)remote_storeUserDomainConcepts:(NSArray *)arg1 method:(long long)arg2 completion:(void (^)(_Bool, NSError *))arg3;
@end

