//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSString.h>

@interface NSString (SMSPhoneNumberNormalization)
+ (id)__ck_appleMapsURLStringForCoordinate:(struct CLLocationCoordinate2D)arg1 coordinateName:(id)arg2;
+ (id)ck_suggestionCategoryTitleWithNumberOfSenders:(long long)arg1 documentTitle:(id)arg2 numberOfFiles:(long long)arg3 numberOfItems:(long long)arg4 aggregateContentType:(id)arg5 aggregateNoticeType:(long long)arg6;
+ (id)ck_localizedCommentedPeopleStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedRemovePeopleStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedAddPeopleStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedMovedStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedRenamedStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedDeletedStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedCreatedStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedUpdateStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
+ (id)ck_localizedEditStringWithNumberOfPeople:(unsigned long long)arg1 UTType:(id)arg2 numberOfFiles:(unsigned long long)arg3;
- (id)unformattedPhoneNumber;
- (_Bool)ck_isSiriRecognizableWithLanguageCode:(id)arg1;
- (struct _NSRange)__ck_rangeOfSequenceOfCharactersFromSet:(id)arg1 options:(unsigned long long)arg2 range:(struct _NSRange)arg3;
- (_Bool)__ck_containsOnlyCharactersFromSet:(id)arg1;
- (_Bool)__ck_shouldUseBigEmoji;
- (id)mentionsSafeText;
- (id)__ck_stringByExpandingTildeInPath;
- (_Bool)_snippetOptions:(unsigned long long)arg1 hasOption:(unsigned long long)arg2;
- (id)ck_trimmedStringWithPreferredLength:(unsigned long long)arg1 anchoredAroundSubstring:(id)arg2 options:(unsigned long long)arg3;
- (id)ck_trimmedStringWithPreferredLength:(unsigned long long)arg1 anchoredAroundSubstring:(id)arg2;
- (id)__ck_generateImageForFont:(id)arg1 imageGenerationScale:(double)arg2;
- (id)__ck_generateImageForFontSize:(double)arg1 imageGenerationScale:(double)arg2;
- (_Bool)isAddressBookLabel;
- (id)searchSafeText;
@end

