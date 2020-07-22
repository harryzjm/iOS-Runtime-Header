//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestionsInternals/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>
#import <CoreSuggestionsInternals/_SGDSuggestManagerEventsConfirmRejectProtocol-Protocol.h>

@class CSSearchableItem, NSArray;

@protocol SGDSuggestManagerMailProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerEventsConfirmRejectProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)resolveFullDownloadRequests:(NSArray *)arg1 withCompletion:(void (^)(SGXPCResponse *))arg2;
- (void)fullDownloadRequestBatch:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)reportMessagesFound:(NSArray *)arg1 lost:(NSArray *)arg2 withCompletion:(void (^)(SGXPCResponse *))arg3;
- (void)updateMessages:(NSArray *)arg1 state:(unsigned long long)arg2 completion:(void (^)(SGXPCResponse *))arg3;
- (void)messagesToRefreshWithCompletion:(void (^)(SGXPCResponse1 *))arg1;
- (void)harvestedSuggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)suggestionsFromSearchableItem:(CSSearchableItem *)arg1 options:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)prepareForRealtimeExtraction:(void (^)(SGXPCResponse *))arg1;
@end

