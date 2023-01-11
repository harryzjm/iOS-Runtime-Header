//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray;

@interface NEVPNApp
{
    _Bool _noRestriction;
    _Bool _restrictDomains;
    NSArray *_appRules;
    NSArray *_excludedDomains;
}

+ (_Bool)supportsSecureCoding;
- (void).cxx_destruct;
@property(copy) NSArray *excludedDomains; // @synthesize excludedDomains=_excludedDomains;
@property _Bool restrictDomains; // @synthesize restrictDomains=_restrictDomains;
@property _Bool noRestriction; // @synthesize noRestriction=_noRestriction;
@property(copy) NSArray *appRules; // @synthesize appRules=_appRules;
- (void)updateAppRulesForUID:(unsigned int)arg1;
- (_Bool)installSigningIdentifiersWithFlowDivertControlSocket:(int)arg1;
- (id)copyUniqueSigningIdentifiers;
- (id)copyAppRuleIDs;
- (_Bool)removeAppRuleByID:(id)arg1;
- (id)copyAppRuleBySigningIdentifier:(id)arg1;
- (id)copyAppRuleByID:(id)arg1;
- (id)copyLegacyDictionary;
- (id)initFromLegacyDictionary:(id)arg1;
- (id)descriptionWithIndent:(int)arg1 options:(unsigned long long)arg2;
- (_Bool)checkValidityAndCollectErrors:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)init;

@end
