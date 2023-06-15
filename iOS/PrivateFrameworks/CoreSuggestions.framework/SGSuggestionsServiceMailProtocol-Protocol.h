//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGSuggestionsServiceBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceContactsObserverProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceEventsObserverProtocol-Protocol.h>
#import <CoreSuggestions/_SGSuggestionsServiceMailIntelligenceProtocol-Protocol.h>

@class CSSearchableItem, NSArray;

@protocol SGSuggestionsServiceMailProtocol <_SGSuggestionsServiceBaseProtocol, _SGSuggestionsServiceEventsConfirmRejectProtocol, _SGSuggestionsServiceContactsConfirmRejectProtocol, _SGSuggestionsServiceContactsObserverProtocol, _SGSuggestionsServiceEventsObserverProtocol, _SGSuggestionsServiceMailIntelligenceProtocol>
- (void)resolveFullDownloadRequests:(NSArray *)arg1 withCompletion:(void (^)(NSError *))arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(void (^)(NSArray *, NSError *))arg2;
- (void)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(NSError *))arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(NSArray *, NSError *))arg1;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(NSArray *, NSError *))arg3;
- (_Bool)prepareForRealtimeExtraction:(id *)arg1;
- (void)prepareForRealtimeExtractionWithCompletion:(void (^)(NSError *))arg1;
@end

