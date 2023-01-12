//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CKDProtocolTranslator, NSArray, NSData;
@protocol CKDeserializeRecordModificationsOperationCallbacks;

@interface CKDDeserializeRecordModificationsOperation
{
    CDUnknownBlockType _deserializeCompletionBlock;
    NSData *_serializedModifications;
    CKDProtocolTranslator *_translator;
    NSArray *_recordsToSave;
    NSArray *_recordIDsToDelete;
}

- (void).cxx_destruct;
@property(retain) NSArray *recordIDsToDelete; // @synthesize recordIDsToDelete=_recordIDsToDelete;
@property(retain) NSArray *recordsToSave; // @synthesize recordsToSave=_recordsToSave;
@property(retain) CKDProtocolTranslator *translator; // @synthesize translator=_translator;
@property(retain, nonatomic) NSData *serializedModifications; // @synthesize serializedModifications=_serializedModifications;
@property(copy, nonatomic) CDUnknownBlockType deserializeCompletionBlock; // @synthesize deserializeCompletionBlock=_deserializeCompletionBlock;
- (void)_postflightRecords;
- (void)_deserialize;
- (void)_setupTranslator;
- (void)_finishOnCallbackQueueWithError:(id)arg1;
- (_Bool)validateAgainstLiveContainer:(id)arg1 error:(id *)arg2;
- (void)main;
- (id)nameForState:(unsigned long long)arg1;
- (_Bool)makeStateTransition;
- (id)activityCreate;
- (id)initWithOperationInfo:(id)arg1 container:(id)arg2;

// Remaining properties
@property(retain, nonatomic) id <CKDeserializeRecordModificationsOperationCallbacks> clientOperationCallbackProxy; // @dynamic clientOperationCallbackProxy;
@property(nonatomic) unsigned long long state; // @dynamic state;

@end

