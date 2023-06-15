//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CKDURLRequest.h"

@class NSDictionary, NSMutableDictionary;

@interface CKDAnonymousShareRemoveURLRequest : CKDURLRequest
{
    CDUnknownBlockType _anonymousShareRemovedBlock;
    NSDictionary *_encryptedAnonymousSharesToRemove;
    NSMutableDictionary *_encryptedAnonymousShareHashToRemoveByRequestID;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSMutableDictionary *encryptedAnonymousShareHashToRemoveByRequestID; // @synthesize encryptedAnonymousShareHashToRemoveByRequestID=_encryptedAnonymousShareHashToRemoveByRequestID;
@property(retain, nonatomic) NSDictionary *encryptedAnonymousSharesToRemove; // @synthesize encryptedAnonymousSharesToRemove=_encryptedAnonymousSharesToRemove;
@property(copy, nonatomic) CDUnknownBlockType anonymousShareRemovedBlock; // @synthesize anonymousShareRemovedBlock=_anonymousShareRemovedBlock;
- (id)requestDidParseProtobufObject:(id)arg1;
- (id)generateRequestOperations;
- (id)requestOperationClasses;
- (id)equivalencyProperties;
- (id)initWithOperation:(id)arg1 encryptedAnonymousSharesToRemove:(id)arg2;
- (_Bool)requiresCKAnonymousUserIDs;

@end

