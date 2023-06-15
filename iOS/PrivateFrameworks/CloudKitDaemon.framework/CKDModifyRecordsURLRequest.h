//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSArray, NSData, NSDictionary, NSMutableArray, NSMutableDictionary;

@interface CKDModifyRecordsURLRequest : CKDURLRequest
{
    _Bool _atomic;
    _Bool _sendMergeableDeltas;
    _Bool _markAsParticipantNeedsNewInvitationToken;
    _Bool _oplock;
    _Bool _sendAllFields;
    _Bool _containsMergeableValues;
    NSDictionary *_recordIDsToDeleteToEtags;
    NSDictionary *_conflictLosersToResolveByRecordID;
    NSDictionary *_pluginFieldsForRecordDeletesByID;
    NSArray *_userPublicKeys;
    CDUnknownBlockType _recordPostedBlock;
    CDUnknownBlockType _mergeableDeltaSavedBlock;
    CDUnknownBlockType _replacedDeltasBlock;
    NSArray *_records;
    NSArray *_recordIDsToDelete;
    NSDictionary *_recordIDsToDeleteToSigningPCSIdentity;
    NSData *_clientChangeTokenData;
    NSDictionary *_requestedFieldsByRecordID;
    NSMutableDictionary *_recordIDByRequestID;
    NSMutableDictionary *_recordByRequestID;
    NSMutableDictionary *_mergeableFieldKeyByRequestID;
    NSMutableDictionary *_replacementRequestsByRequestID;
    NSMutableArray *_skippedRecordsWithPurelyMergeableChanges;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableArray *skippedRecordsWithPurelyMergeableChanges; // @synthesize skippedRecordsWithPurelyMergeableChanges=_skippedRecordsWithPurelyMergeableChanges;
@property(nonatomic) _Bool containsMergeableValues; // @synthesize containsMergeableValues=_containsMergeableValues;
@property(retain, nonatomic) NSMutableDictionary *replacementRequestsByRequestID; // @synthesize replacementRequestsByRequestID=_replacementRequestsByRequestID;
@property(retain, nonatomic) NSMutableDictionary *mergeableFieldKeyByRequestID; // @synthesize mergeableFieldKeyByRequestID=_mergeableFieldKeyByRequestID;
@property(retain, nonatomic) NSMutableDictionary *recordByRequestID; // @synthesize recordByRequestID=_recordByRequestID;
@property(retain, nonatomic) NSMutableDictionary *recordIDByRequestID; // @synthesize recordIDByRequestID=_recordIDByRequestID;
@property(retain, nonatomic) NSDictionary *requestedFieldsByRecordID; // @synthesize requestedFieldsByRecordID=_requestedFieldsByRecordID;
@property(retain, nonatomic) NSData *clientChangeTokenData; // @synthesize clientChangeTokenData=_clientChangeTokenData;
@property(nonatomic) _Bool sendAllFields; // @synthesize sendAllFields=_sendAllFields;
@property(nonatomic) _Bool oplock; // @synthesize oplock=_oplock;
@property(retain, nonatomic) NSDictionary *recordIDsToDeleteToSigningPCSIdentity; // @synthesize recordIDsToDeleteToSigningPCSIdentity=_recordIDsToDeleteToSigningPCSIdentity;
@property(retain, nonatomic) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain, nonatomic) NSArray *records; // @synthesize records=_records;
@property(copy, nonatomic) CDUnknownBlockType replacedDeltasBlock; // @synthesize replacedDeltasBlock=_replacedDeltasBlock;
@property(copy, nonatomic) CDUnknownBlockType mergeableDeltaSavedBlock; // @synthesize mergeableDeltaSavedBlock=_mergeableDeltaSavedBlock;
@property(copy, nonatomic) CDUnknownBlockType recordPostedBlock; // @synthesize recordPostedBlock=_recordPostedBlock;
@property(retain, nonatomic) NSArray *userPublicKeys; // @synthesize userPublicKeys=_userPublicKeys;
@property(nonatomic) _Bool markAsParticipantNeedsNewInvitationToken; // @synthesize markAsParticipantNeedsNewInvitationToken=_markAsParticipantNeedsNewInvitationToken;
@property(nonatomic) _Bool sendMergeableDeltas; // @synthesize sendMergeableDeltas=_sendMergeableDeltas;
@property(nonatomic) _Bool atomic; // @synthesize atomic=_atomic;
@property(retain, nonatomic) NSDictionary *pluginFieldsForRecordDeletesByID; // @synthesize pluginFieldsForRecordDeletesByID=_pluginFieldsForRecordDeletesByID;
@property(retain, nonatomic) NSDictionary *conflictLosersToResolveByRecordID; // @synthesize conflictLosersToResolveByRecordID=_conflictLosersToResolveByRecordID;
@property(retain, nonatomic) NSDictionary *recordIDsToDeleteToEtags; // @synthesize recordIDsToDeleteToEtags=_recordIDsToDeleteToEtags;
- (void)requestDidComplete;
- (void)requestDidParseNodeFailure:(id)arg1;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)returnVerificationKeyAndSignatureForRequestOperation:(id)arg1 dataToBeSigned:(id)arg2 error:(id *)arg3;
- (id)generateMergeableDeltaSaveOperationsForRecord:(id)arg1 error:(id *)arg2;
- (id)generateRequestOperations;
- (_Bool)requiresCKAnonymousSignature;
- (_Bool)handlesAnonymousCKUserIDPropagation;
- (int)isolationLevel;
- (id)requestOperationClasses;
- (id)zoneIDsToLock;
- (_Bool)allowsAnonymousAccount;
- (void)fillOutRequestProperties:(id)arg1;
- (id)equivalencyProperties;
- (id)initWithOperation:(id)arg1 recordsToSave:(id)arg2 recordIDsToDelete:(id)arg3 recordIDsToDeleteToSigningPCSIdentity:(id)arg4 oplock:(_Bool)arg5 sendAllFields:(_Bool)arg6 clientChangeTokenData:(id)arg7 requestedFieldsByRecordId:(id)arg8;

@end

