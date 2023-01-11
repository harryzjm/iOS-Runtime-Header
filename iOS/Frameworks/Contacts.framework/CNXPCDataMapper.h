//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Contacts/CNDataMapper-Protocol.h>

@class NSString, NSXPCConnection;
@protocol CNContactsLogger, CNXPCDataMapperService;

@interface CNXPCDataMapper : NSObject <CNDataMapper>
{
    NSXPCConnection *_connection;
    id <CNContactsLogger> _logger;
    id <CNXPCDataMapperService> _serviceProxy;
}

+ (id)serviceProtocolInterface;
+ (id)cursorProtocolInterface;
+ (id)contactBuffersDecoderForFetchRequest:(id)arg1;
@property(retain, nonatomic) id <CNXPCDataMapperService> serviceProxy; // @synthesize serviceProxy=_serviceProxy;
@property(retain, nonatomic) id <CNContactsLogger> logger; // @synthesize logger=_logger;
@property(retain) NSXPCConnection *connection; // @synthesize connection=_connection;
- (void).cxx_destruct;
- (_Bool)writeFavoritesPropertyListData:(id)arg1 toPath:(id)arg2 error:(id *)arg3;
- (id)favoritesEntryDictionariesAtPath:(id)arg1 error:(id *)arg2;
- (id)verifyIndexWithError:(id *)arg1;
- (_Bool)reindexSearchableItemsWithIdentifiers:(id)arg1 error:(id *)arg2;
- (_Bool)clearChangeHistoryForClientIdentifier:(id)arg1 toChangeAnchor:(id)arg2 error:(id *)arg3;
- (id)changeHistoryWithFetchRequest:(id)arg1 error:(id *)arg2;
- (_Bool)unregisterChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (_Bool)registerChangeHistoryClientIdentifier:(id)arg1 error:(id *)arg2;
- (id)userActivityUserInfoForContact:(id)arg1;
- (id)contactWithUserActivityUserInfo:(id)arg1 keysToFetch:(id)arg2;
- (_Bool)setBestMeIfNeededForGivenName:(id)arg1 familyName:(id)arg2 email:(id)arg3 error:(id *)arg4;
- (_Bool)setMeContact:(id)arg1 forContainer:(id)arg2 error:(id *)arg3;
- (_Bool)setMeContact:(id)arg1 error:(id *)arg2;
- (id)defaultContainerIdentifier;
- (id)subgroupsOfGroupWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)groupsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)accountsMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)policyForContainerWithIdentifier:(id)arg1 error:(id *)arg2;
- (id)serverSearchContainersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)containersMatchingPredicate:(id)arg1 error:(id *)arg2;
- (id)executeFetchRequest:(id)arg1 progressiveResults:(CDUnknownBlockType)arg2 completion:(CDUnknownBlockType)arg3;
- (_Bool)executeSaveRequest:(id)arg1 response:(id *)arg2 error:(id *)arg3;
- (_Bool)executeSaveRequest:(id)arg1 error:(id *)arg2;
- (id)meContactIdentifiers:(id *)arg1;
- (id)identifierWithError:(id *)arg1;
- (_Bool)fetchEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchAndDecodeEncodedContactsForFetchRequest:(id)arg1 error:(id *)arg2 cancelationToken:(id)arg3 batchHandler:(CDUnknownBlockType)arg4;
- (_Bool)fetchContactsForFetchRequest:(id)arg1 error:(id *)arg2 batchHandler:(CDUnknownBlockType)arg3;
- (id)contactObservableForFetchRequest:(id)arg1;
- (id)contactCountForFetchRequest:(id)arg1 error:(id *)arg2;
- (id)unifiedContactCountWithError:(id *)arg1;
- (id)remoteResultForSelector:(SEL)arg1 parameters:(id)arg2 error:(id *)arg3;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 queryParameter:(id)arg3 error:(id *)arg4;
- (id)remoteResultForSelector:(SEL)arg1 query:(id)arg2 error:(id *)arg3;
- (id)remoteResultForSelector:(SEL)arg1 error:(id *)arg2;
- (_Bool)requestAccessForEntityType:(long long)arg1 error:(id *)arg2;
- (void)requestAccessForEntityType:(long long)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (void)dealloc;
- (id)initWithContactsEnvironment:(id)arg1 connection:(id)arg2;
- (id)initWithContactsEnvironment:(id)arg1 managedConfiguration:(id)arg2;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

