//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "RBDomainRestriction.h"

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface RBTargetPropertyDomainRestriction : RBDomainRestriction
{
    NSString *_property;
    NSNumber *_numberValue;
    NSString *_stringValue;
}

+ (id)domainRestrictionForDictionary:(id)arg1 withError:(id *)arg2;
- (void).cxx_destruct;
- (id)description;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)allEntitlements;
- (_Bool)allowsContext:(id)arg1 withError:(id *)arg2;
- (id)_initWithProperty:(id)arg1 value:(id)arg2;

@end

