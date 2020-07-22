//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class DAContactsSearchQuery, NSMutableArray, NSObject;
@protocol OS_ldap_operation;

@interface LDAPSearchTask
{
    DAContactsSearchQuery *_query;
    NSMutableArray *_foundContacts;
    NSObject<OS_ldap_operation> *_operation;
}

@property(retain, nonatomic) NSObject<OS_ldap_operation> *operation; // @synthesize operation=_operation;
@property(retain, nonatomic) NSMutableArray *foundContacts; // @synthesize foundContacts=_foundContacts;
@property(readonly, nonatomic) DAContactsSearchQuery *query; // @synthesize query=_query;
- (void).cxx_destruct;
- (id)daLevelErrorForLDAPError:(int)arg1;
- (int)numDownloadedElements;
- (void)finishWithError:(id)arg1;
- (void)performTask;
- (void)_failImmediately;
- (void)_promptForPasswordDueToError:(id)arg1;
- (void)_appendKey:(id)arg1 value:(id)arg2 toSearchResultElement:(id)arg3;
- (void)_performQuery;
- (id)_copySearchStringForQueryInput:(id)arg1;
- (id)_searchStringForWord:(id)arg1;
- (void)disable;
- (id)initWithQuery:(id)arg1;

@end

