//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSString, RBDomainRestriction, RBEntitlementPredicate;

__attribute__((visibility("hidden")))
@interface RBDomainAttributeTemplate : NSObject
{
    NSArray *_attributeGroups;
    NSString *_domain;
    NSString *_name;
    RBEntitlementPredicate *_originatorEntitlements;
    NSDictionary *_targetBundleProperties;
    RBEntitlementPredicate *_targetEntitlements;
    NSDictionary *_additionalRestrictions;
    RBDomainRestriction *_restriction;
    NSString *_endowmentNamespace;
}

- (void).cxx_destruct;
@property(copy, nonatomic) RBDomainRestriction *restriction; // @synthesize restriction=_restriction;
@property(copy, nonatomic) NSDictionary *additionalRestrictions; // @synthesize additionalRestrictions=_additionalRestrictions;
@property(copy, nonatomic) RBEntitlementPredicate *targetEntitlements; // @synthesize targetEntitlements=_targetEntitlements;
@property(copy, nonatomic) NSDictionary *targetBundleProperties; // @synthesize targetBundleProperties=_targetBundleProperties;
@property(copy, nonatomic) RBEntitlementPredicate *originatorEntitlements; // @synthesize originatorEntitlements=_originatorEntitlements;
@property(retain, nonatomic) NSArray *attributeGroups; // @synthesize attributeGroups=_attributeGroups;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

