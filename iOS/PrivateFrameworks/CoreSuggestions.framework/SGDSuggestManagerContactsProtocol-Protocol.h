//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreSuggestions/_SGDSuggestManagerBaseProtocol-Protocol.h>
#import <CoreSuggestions/_SGDSuggestManagerContactsConfirmRejectProtocol-Protocol.h>

@class CNContact, NSArray, NSString, SGRecordId;

@protocol SGDSuggestManagerContactsProtocol <_SGDSuggestManagerBaseProtocol, _SGDSuggestManagerContactsConfirmRejectProtocol>
- (void)allContactsLimitedTo:(unsigned long long)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)originFromRecordId:(SGRecordId *)arg1 completion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesOrLookupIdByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesOrLookupIdByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)namesForDetailCacheSnapshotsWithCompletion:(void (^)(SGXPCResponse3 *))arg1;
- (void)namesForDetail:(NSString *)arg1 limitTo:(unsigned long long)arg2 prependMaybe:(_Bool)arg3 withCompletion:(void (^)(SGXPCResponse1 *))arg4;
- (void)contactMatchesByEmailAddress:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesByPhoneNumber:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)cnContactMatchesForRecordIds:(NSArray *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)cnContactMatchesForRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactFromRecordId:(SGRecordId *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesWithMessagingPrefix:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)contactMatchesWithFullTextSearch:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)emailAddressIsSignificant:(NSString *)arg1 withCompletion:(void (^)(SGXPCResponse1 *))arg2;
- (void)contactMatchesWithContactIdentifiers:(NSArray *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)contactMatchesWithContactIdentifier:(NSString *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
- (void)contactMatchesWithContact:(CNContact *)arg1 limitTo:(unsigned long long)arg2 withCompletion:(void (^)(SGXPCResponse1 *))arg3;
@end

