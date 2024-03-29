//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (IBICSchemaDebugDescription)
+ (id)ib_stringWithListComponentsJoinedByCommasAndAnd:(id)arg1;
+ (id)ib_UUIDString;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (id)ibic_attributeValueDescription;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (id)ib_stringByMakingPathITunesCompliant;
- (id)ib_stringByMakingNameITunesCompliant;
- (id)ib_stringByMakingPathRFC1034Compliant;
- (id)ib_stringByMakingNameRFC1034Compliant;
- (id)_ib_stringByMappingPathComponents:(CDUnknownBlockType)arg1;
- (struct _NSRange)ib_rangeForSuffixOfLength:(long long)arg1;
- (struct _NSRange)ib_range;
- (id)ib_stringWithEachLinePrefixedByString:(id)arg1;
- (id)ib_substringAfterLastOccurrenceOfString:(id)arg1;
- (id)ib_substringBeforeLastOccurrenceOfString:(id)arg1;
- (id)ib_substringAfterFirstOccurrenceOfString:(id)arg1;
- (id)ib_substringBeforeFirstOccurrenceOfString:(id)arg1;
- (id)ib_stringByStrippingCommonWordPrefixWithString:(id)arg1;
- (void)ib_invokeWithAccessToFileSystemRepresentation:(CDUnknownBlockType)arg1;
- (id)ib_onlyPathComponent;
- (id)ib_firstPathComponent;
- (_Bool)ib_isNonEmpty;
- (long long)ib_numberOfOccurrencesOfString:(id)arg1;
- (id)ib_stringOfUniqueCharactersFromSet:(id)arg1;
- (_Bool)ib_containsStringCaseInsensatively:(id)arg1;
- (_Bool)ib_containsString:(id)arg1;
- (_Bool)ib_containsCharactersFromSet:(id)arg1;
- (_Bool)ib_isComposedEntirelyOfCharactersFromSet:(id)arg1;
- (_Bool)ib_isRange:(struct _NSRange)arg1 composedEntirelyOfCharactersFromSet:(id)arg2;
- (id)ib_UTF8Representation;
- (id)ib_objcIdentifierByReplacingIllegalCharactersWithString:(id)arg1;
- (id)ib_stringByCapitalizingFirstCharacterOfEachSpacedComponent;
- (id)ib_stringByCapitalizingFirstCharacter;
- (id)ib_stringByLowercasingFirstCharacter;
- (id)ib_stringByDeletingSuffix:(id)arg1;
- (id)ib_stringByDeletingPrefix:(id)arg1;
- (id)ib_stringByPrependingString:(id)arg1;
- (id)ib_stringByAppendingPathComponents:(id)arg1;
- (id)ib_stringByReplacingCharactersFromSet:(id)arg1 withString:(id)arg2;
- (id)ib_stringByRemovingCharactersFromSet:(id)arg1;
- (id)ib_stringByInsertingString:(id)arg1 atIndex:(unsigned long long)arg2;
- (long long)ib_caseInsensitiveNumericCompare:(id)arg1;
- (void)ib_invokeWithAccessToUTF8Bytes:(CDUnknownBlockType)arg1;
- (void)ib_invokeWithAccessToCharacters:(CDUnknownBlockType)arg1;
- (Class)ib_immutableClassForPlistOverlay;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@end

