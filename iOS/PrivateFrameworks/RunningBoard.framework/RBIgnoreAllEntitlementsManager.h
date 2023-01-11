//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <RunningBoard/RBEntitlementManaging-Protocol.h>
#import <RunningBoard/RBEntitlementPossessing-Protocol.h>

@class NSString;

@interface RBIgnoreAllEntitlementsManager : NSObject <RBEntitlementManaging, RBEntitlementPossessing>
{
}

- (_Bool)hasEntitlementDomain:(unsigned long long)arg1;
- (_Bool)hasEntitlement:(id)arg1;
- (void)purgeEntitlementsForProcess:(id)arg1;
- (id)entitlementsForProcess:(id)arg1;
- (id)allEntitlements;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
