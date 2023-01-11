//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ContactsUI/CNContactDataSource-Protocol.h>

@class CNContactDataSourceSafeDelegate, CNContactFilter, CNContactFormatter, CNContactStore, CNContactStoreFilter, CNPublishingSubject, NSArray, NSDictionary, NSMutableArray, NSString;
@protocol CNCancelable, CNContactDataSourceDelegate, CNSchedulerProvider;

__attribute__((visibility("hidden")))
@interface CNContactAsyncDataSource : NSObject <CNContactDataSource>
{
    CNContactDataSourceSafeDelegate *_delegate;
    CNContactFormatter *_contactFormatter;
    CNContactStore *_store;
    CNContactStoreFilter *_filter;
    NSArray *_allKeysToFetchForTransientContacts;
    id <CNCancelable> _searchCancelationToken;
    id <CNSchedulerProvider> _reloadSchedulerProvider;
    CNPublishingSubject *_reloadStream;
    NSMutableArray *_resultingContacts;
}

@property(retain, nonatomic) NSMutableArray *resultingContacts; // @synthesize resultingContacts=_resultingContacts;
@property(retain, nonatomic) CNPublishingSubject *reloadStream; // @synthesize reloadStream=_reloadStream;
@property(retain, nonatomic) id <CNSchedulerProvider> reloadSchedulerProvider; // @synthesize reloadSchedulerProvider=_reloadSchedulerProvider;
@property(retain, nonatomic) id <CNCancelable> searchCancelationToken; // @synthesize searchCancelationToken=_searchCancelationToken;
@property(retain, nonatomic) NSArray *allKeysToFetchForTransientContacts; // @synthesize allKeysToFetchForTransientContacts=_allKeysToFetchForTransientContacts;
@property(copy, nonatomic) CNContactStoreFilter *filter; // @synthesize filter=_filter;
@property(retain, nonatomic) CNContactStore *store; // @synthesize store=_store;
@property(retain, nonatomic) CNContactFormatter *contactFormatter; // @synthesize contactFormatter=_contactFormatter;
- (void).cxx_destruct;
- (void)invalidate;
- (void)invalidateSearch;
- (void)invalidateResults;
- (void)reloadWithRequest:(id)arg1;
- (void)reload;
- (void)setNetworkActivityIndicatorVisible:(_Bool)arg1;
@property(readonly, nonatomic) CNContactFilter *effectiveFilter;
- (id)indexPathForContact:(id)arg1;
- (id)completeContactFromContact:(id)arg1 fromMainStoreOnly:(_Bool)arg2 keysToFetch:(id)arg3;
@property(readonly, nonatomic) NSString *displayName;
@property(readonly, nonatomic) _Bool canReload;
@property(readonly, nonatomic) NSArray *indexSections;
@property(readonly, nonatomic) NSArray *sections;
@property(readonly, nonatomic) NSDictionary *contactMatchInfos;
- (id)preferredForNameMeContactIdentifier;
@property(readonly, nonatomic) NSArray *contacts;
@property(nonatomic) __weak id <CNContactDataSourceDelegate> delegate;
@property(readonly, nonatomic) _Bool shouldReturnToAccountsAndGroupsViewAfterSearchIsCanceled;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithStore:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

