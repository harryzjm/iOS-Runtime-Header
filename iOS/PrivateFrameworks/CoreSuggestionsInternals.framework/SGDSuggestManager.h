//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CoreSuggestionsInternals/SGDSuggestManagerAllProtocol-Protocol.h>

@class CNContactStore, EKEventStore, NSDictionary, NSOperationQueue, NSString, NSXPCConnection, SGDManagerForCTS, SGQueryPredictions, SGServiceContext, SGSqlEntityStore, SGSuggestHistory, _PASNotificationToken;
@protocol PMLTrainingProtocol;

@interface SGDSuggestManager : NSObject <SGDSuggestManagerAllProtocol>
{
    SGSqlEntityStore *_harvestStore;
    NSXPCConnection *_connection;
    SGSuggestHistory *_history;
    _Bool _dirty;
    _PASNotificationToken *_assetUpdateToken;
    NSOperationQueue *_messageHarvestQueue;
    SGDManagerForCTS *_ctsManager;
    EKEventStore *_ekStore;
    CNContactStore *_contactStore;
    NSDictionary *_bundleIdToPET;
    id <PMLTrainingProtocol> _pmlTraining;
    SGQueryPredictions *_queryPredictions;
    SGServiceContext *_context;
    NSString *_clientName;
}

+ (void)clearChangeHistory:(id)arg1;
+ (id)fetchChangeHistory;
+ (void)initialize;
@property(readonly, nonatomic) NSString *clientName; // @synthesize clientName=_clientName;
@property(readonly, nonatomic) SGServiceContext *context; // @synthesize context=_context;
- (void).cxx_destruct;
- (id)_maybeFormatString;
- (void)deleteCloudKitZoneWithCompletion:(CDUnknownBlockType)arg1;
- (void)setQueryPredictionsForTesting:(id)arg1;
- (void)clearContactAggregatorConversation:(id)arg1;
- (void)clearContactAggregator;
- (void)sleepWithCompletion:(CDUnknownBlockType)arg1;
- (void)daemonExitWithCompletion:(CDUnknownBlockType)arg1;
- (void)removeAllStoredPseudoContactsWithCompletion:(CDUnknownBlockType)arg1;
- (void)logEventInteractionForEventWithUniqueKey:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEntity:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (id)entityFromUniqueKey:(id)arg1;
- (void)logEventInteractionForRealtimeEvent:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logEventInteractionForEventWithExternalIdentifier:(id)arg1 interface:(unsigned short)arg2 actionType:(unsigned short)arg3;
- (void)logMetricSearchResultsIncludedPureSuggestionWithBundleId:(id)arg1;
- (void)logMetricContactCreated:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailShown:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricSuggestedContactDetailUsed:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResultSelected:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricAutocompleteUserSelectedRecordId:(id)arg1 contactIdentifier:(id)arg2 bundleId:(id)arg3;
- (void)logMetricContactSearchResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (void)logMetricAutocompleteResult:(int)arg1 recordId:(id)arg2 contactIdentifier:(id)arg3 bundleId:(id)arg4;
- (struct SGMContactDetailUsedApp_)_appEnumForBundleId:(id)arg1;
- (void)waitForEventWithIdentifier:(id)arg1 toAppearInEventStoreWithLastModificationDate:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)noopWithCompletion:(CDUnknownBlockType)arg1;
- (void)keepDirty:(_Bool)arg1;
- (void)realtimeSuggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 extractionDate:(id)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)suggestionsFromURL:(id)arg1 title:(id)arg2 HTMLPayload:(id)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)isEventCandidateForURL:(id)arg1 title:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)schemaOrgToEvents:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteInteractionsWithBundleId:(id)arg1 groupIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 identifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteInteractionsWithBundleId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 domainIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)deleteSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)purgeSpotlightReferencesWithBundleIdentifier:(id)arg1 uniqueIdentifiers:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)spotlightReimportFromIdentifier:(id)arg1 forPersonHandle:(id)arg2 startDate:(id)arg3 endDate:(id)arg4 completion:(CDUnknownBlockType)arg5;
- (void)registerForCoreSpotlightIndexing;
- (void)drainQueueCompletelyWithCompletion:(CDUnknownBlockType)arg1;
- (void)addInteractions:(id)arg1 bundleId:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)addSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)addSearchableItemMetadata:(id)arg1 htmlData:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)enqueueSearchableItems:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (_Bool)isSearchableItemPartOfReimport:(id)arg1;
- (void)modelMetadataUpdateWithPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)planReceivedFromServerWithPayload:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendRTCLogsWithCompletion:(CDUnknownBlockType)arg1;
- (void)predictedCCEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)predictedToEmailAddressesWithToAddresses:(id)arg1 ccAddresses:(id)arg2 fromAddress:(id)arg3 date:(double)arg4 bounds:(id)arg5 completion:(CDUnknownBlockType)arg6;
- (void)relevantABRecordIDsWithLimit:(long long)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resetConfirmationAndRejectionHistory:(CDUnknownBlockType)arg1;
- (void)rejectContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectCuratedContactDetail:(id)arg1 from:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)rejectContactDetailRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmContactDetailRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmRecord:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_performAction:(id)arg1 onRecord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)_performAction:(id)arg1 onContactDetailRecord:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)confirmContact:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectEventByRecordId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)rejectEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmEventByRecordId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)confirmEvent:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)originFromRecordId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)eventFromUniqueId:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)resolveFullDownloadRequests:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)reportMessagesFound:(id)arg1 lost:(id)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)updateMessages:(id)arg1 state:(unsigned long long)arg2 completion:(CDUnknownBlockType)arg3;
- (void)messagesToRefreshWithCompletion:(CDUnknownBlockType)arg1;
- (void)contactMatchesOrLookupIdByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesByEmailAddress:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)namesForDetailCacheSnapshotsWithCompletion:(CDUnknownBlockType)arg1;
- (void)namesForDetail:(id)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)contactMatchesByPhoneNumber:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (id)realtimeContactsFromEntity:(id)arg1 enrichments:(id)arg2 sourceTextMessage:(id)arg3 store:(id)arg4;
- (_Bool)_isContactInteresting:(id)arg1 emailEntity:(id)arg2 enrichments:(id)arg3 hasContactCard:(_Bool)arg4;
- (_Bool)containsNonCuratedData:(id)arg1;
- (_Bool)isSGEntity:(id)arg1 duplicateOfEKEvent:(id)arg2 withStore:(id)arg3;
- (id)curatedEventKeyForExactMatchOfPseudoEvent:(id)arg1 candidates:(id)arg2;
- (id)shortNamesAndRealtimeEventsFromEntity:(id)arg1 enrichments:(id)arg2 store:(id)arg3;
- (void)bumptTTLForNLEvent:(id)arg1;
- (id)filterPastEvents:(id)arg1;
- (void)suggestionsFromEmailContent:(id)arg1 headers:(id)arg2 source:(id)arg3 options:(unsigned long long)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (void)_suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(_Bool)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)harvestedSuggestionsFromMessage:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (void)harvestedSuggestionsFromMessages:(id)arg1 bundleIdentifier:(id)arg2 options:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)filterRealtimeEvents:(id)arg1;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 fullCompletionHandler:(CDUnknownBlockType)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 completionDelivery:(unsigned long long)arg3 completionHandler:(CDUnknownBlockType)arg4 fullCompletionHandler:(CDUnknownBlockType)arg5;
- (void)_sendChatChangedNotificationWithDomainIdentifier:(id)arg1;
- (void)_suggestionsFromMessage:(id)arg1 options:(unsigned long long)arg2 dissectIfNecessary:(_Bool)arg3 completionDelivery:(unsigned long long)arg4 completionHandler:(CDUnknownBlockType)arg5;
- (void)harvestedSuggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)suggestionsFromSearchableItem:(id)arg1 options:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)_suggestionsFromMessageWithIdentifier:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 completion:(CDUnknownBlockType)arg4 completionDelivery:(unsigned long long)arg5 providedBy:(CDUnknownBlockType)arg6 dissectIfNecessary:(_Bool)arg7;
- (void)_storeAndGeocodeEntity:(id)arg1 spotlightBundleIdentifier:(id)arg2 spotlightUniqueIdentifier:(id)arg3 spotlightDomainIdentifier:(id)arg4 store:(id)arg5 afterCallbackQueue:(id)arg6 finalize:(CDUnknownBlockType)arg7;
- (_Bool)_canBannerUseStoredDissection:(id)arg1 needsOptionalDissectorsToRun:(_Bool *)arg2 options:(unsigned long long)arg3;
- (id)cachedResultForKey:(id)arg1 generateResult:(CDUnknownBlockType)arg2 validateResults:(CDUnknownBlockType)arg3;
- (id)dissectMessage:(id)arg1 fromSource:(id)arg2 store:(id)arg3 existingEnrichments:(id)arg4;
- (void)suggestionsFromRFC822Data:(id)arg1 source:(id)arg2 options:(unsigned long long)arg3 withCompletion:(CDUnknownBlockType)arg4;
- (void)allEventsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eventsInFutureLimitTo:(unsigned long long)arg1 options:(unsigned int)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 prefix:(id)arg3 limitTo:(unsigned long long)arg4 options:(unsigned int)arg5 withCompletion:(CDUnknownBlockType)arg6;
- (void)eventFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)eventsStartingAt:(id)arg1 endingAt:(id)arg2 limitTo:(unsigned long long)arg3 options:(unsigned int)arg4 withCompletion:(CDUnknownBlockType)arg5;
- (id)_mapToPseudoEvents:(id)arg1;
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesWithMessagingPrefix:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactMatchesWithFullTextSearch:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (id)storageContactFromRecordId:(id)arg1;
- (void)cnContactMatchesForRecordIds:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)cnContactMatchesForRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactFromRecordId:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)emailAddressIsSignificant:(id)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)contactMatchesWithContactIdentifiers:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactMatchesWithContactIdentifier:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)contactMatchesWithContact:(id)arg1 limitTo:(unsigned long long)arg2 withCompletion:(CDUnknownBlockType)arg3;
- (void)isEnabledWithCompletion:(CDUnknownBlockType)arg1;
- (void)clearCachesFully:(_Bool)arg1 withCompletion:(CDUnknownBlockType)arg2;
- (void)prepareForRealtimeExtraction:(CDUnknownBlockType)arg1;
- (_Bool)_clientIsMessages;
- (_Bool)_clientIsMail;
- (void)dealloc;
- (id)initWithStore:(id)arg1 ctsManager:(id)arg2 ekStore:(id)arg3 contactStore:(id)arg4;
- (id)initWithStore:(id)arg1;
- (id)initWithStore:(id)arg1 queryPredictions:(id)arg2 ctsManager:(id)arg3 ekStore:(id)arg4 contactStore:(id)arg5;
- (id)initWithMessagesConnection:(id)arg1 store:(id)arg2;
- (id)initWithConnection:(id)arg1 store:(id)arg2;
- (void)_onInteractionBlacklistUpdate:(id)arg1;
- (void)_setupHistoryObserver:(id)arg1;
- (void)setupManagerWithConnection:(id)arg1 store:(id)arg2 queryPredictions:(id)arg3 ctsManager:(id)arg4 ekStore:(id)arg5 contactStore:(id)arg6;

@end

