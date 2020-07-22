//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreDAV/CoreDAVPrincipalPropertySearchTask.h>

@class CalDAVPrincipalSearchPropertySet, NSSet;

@interface CalDAVPrincipalPropertySearchTask : CoreDAVPrincipalPropertySearchTask
{
    id _searchContext;
    NSSet *_searchTypes;
    NSSet *_searchStrings;
    CalDAVPrincipalSearchPropertySet *_serverSupportSet;
}

@property(retain, nonatomic) CalDAVPrincipalSearchPropertySet *serverSupportSet; // @synthesize serverSupportSet=_serverSupportSet;
@property(retain, nonatomic) NSSet *searchStrings; // @synthesize searchStrings=_searchStrings;
@property(retain, nonatomic) NSSet *searchTypes; // @synthesize searchTypes=_searchTypes;
@property(retain, nonatomic) id searchContext; // @synthesize searchContext=_searchContext;
- (void).cxx_destruct;
- (id)searchItems;
- (id)extraAttributes;
- (id)initWithSearchStrings:(id)arg1 searchTypes:(id)arg2 serverSupportSet:(id)arg3 atURL:(id)arg4;

@end
