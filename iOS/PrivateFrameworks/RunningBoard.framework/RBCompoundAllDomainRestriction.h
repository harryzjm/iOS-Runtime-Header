//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSArray;

__attribute__((visibility("hidden")))
@interface RBCompoundAllDomainRestriction : RBDomainRestriction
{
    NSArray *_restrictions;
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allEntitlements;
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;
- (id)_initWithRestrictions:(id)arg1;

@end

