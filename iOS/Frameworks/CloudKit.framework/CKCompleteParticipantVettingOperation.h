//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CloudKit/CKCompleteParticipantVettingOperationCallbacks-Protocol.h>

@class CKCompleteParticipantVettingOperationInfo, CKShareMetadata, NSData, NSString, NSURL;
@protocol CKCompleteParticipantVettingOperationCallbacks;

@interface CKCompleteParticipantVettingOperation <CKCompleteParticipantVettingOperationCallbacks>
{
    CDUnknownBlockType _completeParticipantVettingCompletionBlock;
    NSString *_vettingToken;
    NSString *_vettingEmail;
    NSString *_vettingPhone;
    NSString *_routingKey;
    NSData *_encryptedKey;
    NSString *_baseToken;
    NSString *_displayedHostname;
    NSURL *_reconstructedShareURL;
    CKShareMetadata *_shareMetadata;
}

- (void).cxx_destruct;
@property(retain, nonatomic) CKShareMetadata *shareMetadata; // @synthesize shareMetadata=_shareMetadata;
@property(copy, nonatomic) NSURL *reconstructedShareURL; // @synthesize reconstructedShareURL=_reconstructedShareURL;
@property(copy, nonatomic) NSString *displayedHostname; // @synthesize displayedHostname=_displayedHostname;
@property(copy, nonatomic) NSString *baseToken; // @synthesize baseToken=_baseToken;
@property(copy, nonatomic) NSData *encryptedKey; // @synthesize encryptedKey=_encryptedKey;
@property(copy, nonatomic) NSString *routingKey; // @synthesize routingKey=_routingKey;
@property(copy, nonatomic) NSString *vettingPhone; // @synthesize vettingPhone=_vettingPhone;
@property(copy, nonatomic) NSString *vettingEmail; // @synthesize vettingEmail=_vettingEmail;
@property(copy, nonatomic) NSString *vettingToken; // @synthesize vettingToken=_vettingToken;
- (id)activityCreate;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (void)handleFetchedShareMetadata:(id)arg1;
- (void)handleReconstructedShareURL:(id)arg1;
- (void)performCKOperation;
- (_Bool)CKOperationShouldRun:(id *)arg1;
- (void)fillFromOperationInfo:(id)arg1;
- (void)fillOutOperationInfo:(id)arg1;
@property(copy, nonatomic) CDUnknownBlockType completeParticipantVettingCompletionBlock; // @synthesize completeParticipantVettingCompletionBlock=_completeParticipantVettingCompletionBlock;
- (id)initWithVettingToken:(id)arg1 vettingRecord:(id)arg2 displayedHostname:(id)arg3;
- (id)init;

// Remaining properties
@property(readonly, nonatomic) id <CKCompleteParticipantVettingOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(readonly, nonatomic) CKCompleteParticipantVettingOperationInfo *operationInfo; // @dynamic operationInfo;

@end
