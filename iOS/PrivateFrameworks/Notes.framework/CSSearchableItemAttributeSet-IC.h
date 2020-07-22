//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSpotlight/CSSearchableItemAttributeSet.h>

@class NSString;

@interface CSSearchableItemAttributeSet (IC)
+ (id)ic_dataSourceIdentifierCustomKey;
+ (id)ic_searchResultTypeCustomKey;
+ (id)ic_managedObjectIDCustomKey;
+ (id)ic_specializedIndexFieldAttributeKeyForStringField:(id)arg1;
+ (id)ic_customAttributeKeyWithName:(id)arg1 searchable:(_Bool)arg2 searchableByDefault:(_Bool)arg3 unique:(_Bool)arg4 multiValued:(_Bool)arg5;
+ (id)ic_customAttributeKeyDictionary;
- (long long)ic_daysSinceModification;
- (unsigned long long)ic_relevance;
- (void)ic_populateValuesForSpecializedFields;
@property(nonatomic) unsigned long long ic_searchResultType;
@property(copy, nonatomic) NSString *ic_dataSourceIdentifier;
@property(copy, nonatomic) NSString *ic_managedObjectIDURI;
@end

