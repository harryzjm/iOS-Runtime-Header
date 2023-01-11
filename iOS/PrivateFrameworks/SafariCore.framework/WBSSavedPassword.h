//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDate, NSMutableArray, NSMutableDictionary, NSSet, NSString;

@interface WBSSavedPassword : NSObject
{
    NSMutableDictionary *_siteToProtectionSpaces;
    NSMutableArray *_sites;
    _Bool _userIsNeverSaveMarker;
    _Bool __domainEligibleForPasswordReuseWarning;
    NSString *_highLevelDomain;
    NSString *_user;
    NSString *_password;
    NSDate *_earliestModifiedDateForSites;
    NSSet *_associatedDomains;
}

+ (_Bool)stringMatchesPatternWithTokenizer:(struct __CFStringTokenizer *)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4;
+ (void)enumerateRangesMatchingPatternWithTokenizer:(struct __CFStringTokenizer *)arg1 string:(id)arg2 pattern:(id)arg3 matchingType:(long long)arg4 withBlock:(CDUnknownBlockType)arg5;
@property(nonatomic, getter=_isDomainEligibleForPasswordReuseWarning) _Bool _domainEligibleForPasswordReuseWarning; // @synthesize _domainEligibleForPasswordReuseWarning=__domainEligibleForPasswordReuseWarning;
@property(readonly, nonatomic) NSSet *associatedDomains; // @synthesize associatedDomains=_associatedDomains;
@property(readonly, nonatomic) NSDate *earliestModifiedDateForSites; // @synthesize earliestModifiedDateForSites=_earliestModifiedDateForSites;
@property(readonly, nonatomic) _Bool userIsNeverSaveMarker; // @synthesize userIsNeverSaveMarker=_userIsNeverSaveMarker;
@property(readonly, nonatomic) NSString *password; // @synthesize password=_password;
@property(readonly, nonatomic) NSString *user; // @synthesize user=_user;
@property(readonly, nonatomic) NSString *highLevelDomain; // @synthesize highLevelDomain=_highLevelDomain;
- (void).cxx_destruct;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (_Bool)_matchesSearchPattern:(id)arg1 matchAgainstUser:(_Bool)arg2;
- (_Bool)matchesDomain:(id)arg1;
- (_Bool)matchesServiceNameHintString:(id)arg1;
- (_Bool)matchesUserTypedSearchPattern:(id)arg1;
@property(readonly, nonatomic) NSArray *userVisibleSites;
@property(readonly, nonatomic) NSString *userVisibleHighLevelDomain;
- (void)_adoptSitesFromSavedPassword:(id)arg1;
- (void)_setUser:(id)arg1 password:(id)arg2;
- (_Bool)isDuplicateWithoutUserNameOfPassword:(id)arg1;
- (long long)compare:(id)arg1;
@property(readonly, nonatomic) NSArray *protectionSpaces;
@property(readonly, nonatomic) NSArray *sites;
- (void)_deleteCredentialsForSite:(id)arg1;
- (void)_deleteCredentials;
- (void)_deleteCredentialForProtectionSpace:(id)arg1 fromStorage:(id)arg2;
- (_Bool)_containsProtectionSpace:(id)arg1;
- (void)_addModificationDate:(id)arg1;
- (void)_addProtectionSpace:(id)arg1 forSite:(id)arg2;
- (id)description;
- (void)addObject:(id)arg1;
- (id)_initWithHighLevelDomain:(id)arg1 user:(id)arg2 password:(id)arg3 associatedDomains:(id)arg4;
- (_Bool)hasDuplicatedPasswordWithSavedPassword:(id)arg1;
@property(readonly, nonatomic) _Bool qualifiesForPasswordAuditing;

@end

