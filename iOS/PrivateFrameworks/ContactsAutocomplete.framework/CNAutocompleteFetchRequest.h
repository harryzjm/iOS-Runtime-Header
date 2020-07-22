//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsAutocomplete/NSCopying-Protocol.h>

@class CNAutocompleteFetchContext, NSArray, NSString;

@interface CNAutocompleteFetchRequest : NSObject <NSCopying>
{
    NSString *_searchString;
    NSString *_priorityDomainForSorting;
    unsigned long long _searchType;
    CNAutocompleteFetchContext *_fetchContext;
    _Bool _includeContacts;
    _Bool _includeRecents;
    _Bool _includeSuggestions;
    _Bool _includeDirectoryServers;
    _Bool _includeCalendarServers;
    _Bool _includePredictions;
}

+ (id)searchablePropertiesForSearchType:(unsigned long long)arg1;
+ (id)request;
@property _Bool includePredictions; // @synthesize includePredictions=_includePredictions;
@property _Bool includeCalendarServers; // @synthesize includeCalendarServers=_includeCalendarServers;
@property _Bool includeDirectoryServers; // @synthesize includeDirectoryServers=_includeDirectoryServers;
@property _Bool includeSuggestions; // @synthesize includeSuggestions=_includeSuggestions;
@property _Bool includeRecents; // @synthesize includeRecents=_includeRecents;
@property _Bool includeContacts; // @synthesize includeContacts=_includeContacts;
@property(copy) CNAutocompleteFetchContext *fetchContext; // @synthesize fetchContext=_fetchContext;
@property unsigned long long searchType; // @synthesize searchType=_searchType;
@property(copy) NSString *priorityDomainForSorting; // @synthesize priorityDomainForSorting=_priorityDomainForSorting;
@property(copy) NSString *searchString; // @synthesize searchString=_searchString;
- (void).cxx_destruct;
@property _Bool includeServers;
@property(copy) NSString *sendingAddress;
- (id)searchTypeDebugString;
- (id)includeDebugString;
- (id)description;
@property(readonly) NSArray *searchableProperties;
- (_Bool)isValid:(id *)arg1;
- (id)executeWithDelegate:(id)arg1;
- (unsigned long long)hash;
- (_Bool)isEqual:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end

