//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CKDContainer, CKDZonePCSData;
@protocol OS_dispatch_queue;

@interface CKDAnonymousSharingManager : NSObject
{
    CKDContainer *_container;
    CKDZonePCSData *_zonePCSData;
    NSObject<OS_dispatch_queue> *_synchronizeQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *synchronizeQueue; // @synthesize synchronizeQueue=_synchronizeQueue;
@property(retain, nonatomic) CKDZonePCSData *zonePCSData; // @synthesize zonePCSData=_zonePCSData;
@property(readonly, nonatomic) __weak CKDContainer *container; // @synthesize container=_container;
- (void)_lockedFetchSystemZonePCSDataWithCompletion:(CDUnknownBlockType)arg1;
- (id)pcsCache;
- (void)_locked_decryptShareTuple:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)decryptShareTuple:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)_locked_encryptShareTuples:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)encryptShareTuples:(id)arg1 withCompletionBlock:(CDUnknownBlockType)arg2;
- (void)removeAnonymousSharesFromSharedDB:(id)arg1 operation:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (void)addAnonymousSharesToSharedDB:(id)arg1 operation:(id)arg2 withCompletionBlock:(CDUnknownBlockType)arg3;
- (id)_generateHashIdentifierForAnonymousShareTuple:(id)arg1;
- (id)initWithContainer:(id)arg1;

@end

