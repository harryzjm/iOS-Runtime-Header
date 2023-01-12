//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (NSEmailAddressString)
+ (id)mf_formattedAddressWithName:(id)arg1 email:(id)arg2 useQuotes:(_Bool)arg3;
+ (id)mf_stringWithData:(id)arg1 encoding:(unsigned long long)arg2;
- (id)mf_addressCommentPersonNameComponents;
- (id)mf_emailAddressesWithEquivalentDomains;
- (id)mf_copyIDNAEncodedEmailAddress;
- (id)mf_copyIDNADecodedEmailAddress;
- (id)mf_copyDisplayEmailAddress;
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
- (id)mf_applyTransform:(id)arg1;
- (id)mf_copyDisplayString;
- (id)mf_copyDisplayStringInRange:(struct _NSRange)arg1;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1 allowLossyConversion:(_Bool)arg2;
- (id)mf_dataUsingEncoding:(unsigned long long)arg1;
- (long long)mf_caseInsensitiveCompareExcludingXDash:(id)arg1;
- (id)mf_bestMimeCharsetForMessageDeliveryUsingSubtype:(id)arg1;
- (id)mf_bestMimeCharsetUsingHint:(unsigned int)arg1;
- (id)_mf_bestMimeCharset:(id)arg1;
- (id)mf_bestMimeCharset;
- (id)mf_decodeMimeHeaderValueWithCharsetHint:(id)arg1;
- (id)mf_decodeMimeHeaderValueWithEncodingHint:(unsigned int)arg1;
- (id)mf_encodedHeaderDataWithEncodingHint:(unsigned int)arg1;
@end

