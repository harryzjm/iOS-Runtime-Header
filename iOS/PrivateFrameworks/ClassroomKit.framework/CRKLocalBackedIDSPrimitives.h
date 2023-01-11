//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CRKIDSPrimitives-Protocol.h>

@class CATOperationQueue, NSDictionary;
@protocol CRKIDSLocalPrimitives;

@interface CRKLocalBackedIDSPrimitives : NSObject <CRKIDSPrimitives>
{
    id <CRKIDSLocalPrimitives> _IDSLocalPrimitives;
    CATOperationQueue *_operationQueue;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CATOperationQueue *operationQueue; // @synthesize operationQueue=_operationQueue;
@property(readonly, nonatomic) id <CRKIDSLocalPrimitives> IDSLocalPrimitives; // @synthesize IDSLocalPrimitives=_IDSLocalPrimitives;
- (id)operationDebugInfo;
@property(readonly, copy, nonatomic) NSDictionary *debugInfo;
- (void)listenForMessagesWithHandler:(CDUnknownBlockType)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendMessage:(id)arg1 destinationAddress:(id)arg2 sourceAppleID:(id)arg3 completion:(CDUnknownBlockType)arg4;
- (id)initWithIDSLocalPrimitives:(id)arg1 operationQueue:(id)arg2;
- (id)initWithIDSLocalPrimitives:(id)arg1;

@end
