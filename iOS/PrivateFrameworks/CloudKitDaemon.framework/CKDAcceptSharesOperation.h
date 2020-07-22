//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSMutableArray, NSMutableDictionary;

__attribute__((visibility("hidden")))
@interface CKDAcceptSharesOperation
{
    CDUnknownBlockType _acceptCompletionBlock;
    NSMutableDictionary *_clientProvidedMetadatasByURL;
    NSMutableArray *_shareURLsToAccept;
    NSMutableArray *_acceptedShareURLsToFetch;
    NSMutableDictionary *_shareMetadatasToAcceptByURL;
    unsigned long long _numShareAcceptAttempts;
}

@property(nonatomic) unsigned long long numShareAcceptAttempts; // @synthesize numShareAcceptAttempts=_numShareAcceptAttempts;
@property(retain, nonatomic) NSMutableDictionary *shareMetadatasToAcceptByURL; // @synthesize shareMetadatasToAcceptByURL=_shareMetadatasToAcceptByURL;
@property(retain, nonatomic) NSMutableArray *acceptedShareURLsToFetch; // @synthesize acceptedShareURLsToFetch=_acceptedShareURLsToFetch;
@property(retain, nonatomic) NSMutableArray *shareURLsToAccept; // @synthesize shareURLsToAccept=_shareURLsToAccept;
@property(retain, nonatomic) NSMutableDictionary *clientProvidedMetadatasByURL; // @synthesize clientProvidedMetadatasByURL=_clientProvidedMetadatasByURL;
@property(copy, nonatomic) CDUnknownBlockType acceptCompletionBlock; // @synthesize acceptCompletionBlock=_acceptCompletionBlock;
- (void).cxx_destruct;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)main;
- (void)_fetchMetadataForShares;
- (void)_prepareShareMetadata;
- (_Bool)_callingParticipantOONForShareMetadata:(id)arg1;
- (id)_keySwapForOONParticipant:(id)arg1;
- (_Bool)_validateInvitedPCSCanBeDecryptedForShare:(id)arg1;
- (id)_addSelfIdentityToShareMetadataPublicPCS:(id)arg1 forShareWithURL:(id)arg2 error:(id *)arg3;
- (void)_fetchAcceptedShares;
- (void)_decryptShareMetadata;
- (_Bool)_acceptShares;
- (_Bool)_fillInPublicKeyIntoAcceptMetadata:(id)arg1 serviceType:(unsigned long long)arg2 keyVersion:(unsigned long long)arg3 error:(id *)arg4;
- (void)_handleShareURLAccepted:(id)arg1 forShare:(id)arg2 responseCode:(id)arg3;
- (void)_performCallbackForURL:(id)arg1 withShare:(id)arg2 error:(id)arg3;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 clientContext:(id)arg2;

@end

