//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (NSEmailAddressString)
+ (id)mf_partialSurnames;
+ (id)mf_nameExtensions;
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;
- (id)mf_trimCommasSpacesQuotes;
- (_Bool)mf_appearsToBeAnInitial;
- (void)__mf_firstName:(id *)arg1 middleName:(id *)arg2 lastName:(id *)arg3 extension:(id *)arg4;
- (_Bool)mf_hasSameNamesAs:(id)arg1;
- (id)mf_personNameComponents;
- (id)mf_addressCommentPersonNameComponents;
- (id)mf_stringByRemovingParentheticals;
- (id)mf_emailAddressesWithEquivalentDomains;
- (id)mf_copyIDNAEncodedEmailAddress;
- (id)mf_copyIDNADecodedEmailAddress;
- (_Bool)mf_isEqualToAddress:(id)arg1;
- (id)mf_addressDomain;
- (struct _NSRange)mf_rangeOfAddressDomain;
- (_Bool)mf_isLegalEmailAddress;
- (_Bool)mf_isLegalCommentedEmailAddress;
- (id)mf_copyAddressComment;
- (id)mf_addressComment;
- (id)mf_uncommentedAddressRespectingGroups;
- (id)mf_uncommentedAddress;
- (id)mf_copyUncommentedAddress;
@end

