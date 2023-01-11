//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TUContactsDataProviderAppleCareHandles;
@protocol TUContactsDataSource;

@interface TUContactsDataProvider : NSObject
{
    _Bool _useAsianNameFormat;
    CDUnknownBlockType _localeSupportsPrefixHintForFetchRequest;
    id <TUContactsDataSource> _contactsDataSource;
    TUContactsDataProviderAppleCareHandles *_appleCareHandles;
}

+ (id)asianLocaleCountryCodes;
+ (id)unsupportedLocalesForPrefixHint;
+ (id)defaultContactKeyDescriptors;
+ (id)numberFormatter;
+ (id)keysByCombiningDefaultKeysWithKeysToFetch:(id)arg1;
- (void).cxx_destruct;
@property(copy, nonatomic) TUContactsDataProviderAppleCareHandles *appleCareHandles; // @synthesize appleCareHandles=_appleCareHandles;
@property(readonly, nonatomic) id <TUContactsDataSource> contactsDataSource; // @synthesize contactsDataSource=_contactsDataSource;
@property(copy, nonatomic) CDUnknownBlockType localeSupportsPrefixHintForFetchRequest; // @synthesize localeSupportsPrefixHintForFetchRequest=_localeSupportsPrefixHintForFetchRequest;
@property(nonatomic) _Bool useAsianNameFormat; // @synthesize useAsianNameFormat=_useAsianNameFormat;
- (id)ISOCountryCodeForHandle:(id)arg1 fetchRequest:(id)arg2;
- (id)prefixHintForFetchRequest:(id)arg1;
- (int)personIDForContact:(id)arg1;
- (id)formattedNameForHandle:(id)arg1 countryCode:(id)arg2;
- (id)compositeNameForFetchRequest:(id)arg1;
- (id)compositeNameForContacts:(id)arg1;
- (id)localizedCompositeNameForContact:(id)arg1 secondContact:(id)arg2;
- (id)contactsForHandle:(id)arg1 countryCode:(id)arg2 keysToFetch:(id)arg3 prefixHint:(id)arg4;
- (id)unifiedContactsForFetchRequest:(id)arg1;
- (id)contactWithIdentifier:(id)arg1 keysToFetch:(id)arg2;
- (id)labeledHandlesForContacts:(id)arg1;
- (id)labeledHandlesForContactWithIdentifier:(id)arg1;
- (id)contactLabelForContacts:(id)arg1 matchingHandle:(id)arg2 countryCode:(id)arg3;
- (id)executeFetchRequest:(id)arg1;
- (id)initWithContactsDataSource:(id)arg1;
- (id)init;

@end
