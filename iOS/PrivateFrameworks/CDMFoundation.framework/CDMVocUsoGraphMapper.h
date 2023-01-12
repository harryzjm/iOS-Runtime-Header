//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CDMVocUsoGraphMapper : NSObject
{
}

+ (id)buildVocUSOGraphWithVocLabel:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (unique_ptr_191f5ca4)buildIdentifierWithSemantic:(id)arg1 withVocLabel:(id)arg2;
+ (id)buildEmgerencyPhoneAgentUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildEmergencyPhoneNumberUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildVocUSOGraphForRegexOrdinal:(unsigned int)arg1 withVocLabel:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildFractionNumberUSOGraphWithIdentifier:(id)arg1 withFractionSemantic:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildAttachmentTypeUSOGraph:(id)arg1 withSemantic:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildSmsAttributesUSOGraph:(id)arg1 withFractionSemantic:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildVocUSOGraphForHandsFreeListPosition:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildNumberPowerOfTenUSOGraph:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildIntegerRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildDecimalRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildEmailAddressRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildDeviceCategoryUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildPhoneNumberRegexUSOGraphWithIdentifier:(id)arg1 withInput:(id)arg2 withStartCharIndex:(unsigned int)arg3 withEndCharIndex:(unsigned int)arg4;
+ (id)buildPersonRelationshipUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildSettingUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildAppNameUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildPhoneContactUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildEmailContactUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;
+ (id)buildContactTypeUSOGraphWithIdentifier:(id)arg1 withSemantic:(id)arg2 withInput:(id)arg3 withStartCharIndex:(unsigned int)arg4 withEndCharIndex:(unsigned int)arg5;

@end
