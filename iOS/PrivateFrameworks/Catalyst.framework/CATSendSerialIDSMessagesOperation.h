//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "CATOperation.h"

@class CATIDSMessageOptions, NSArray, NSObject, NSString;
@protocol CATIDSPrimitives, OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface CATSendSerialIDSMessagesOperation : CATOperation
{
    id <CATIDSPrimitives> mPrimitives;
    NSObject<OS_dispatch_queue> *mWorkQueue;
    NSArray *mMessages;
    NSString *mDestinationAddress;
    NSString *mSourceAppleID;
    CATIDSMessageOptions *mOptions;
    struct os_unfair_lock_s mLock;
}

- (void).cxx_destruct;
- (void)didSendMessagesWithError:(id)arg1;
- (void)sendMessages;
- (void)main;
- (_Bool)isAsynchronous;
- (id)initWithIDSPrimitives:(id)arg1 workQueue:(id)arg2 messages:(id)arg3 destinationAddress:(id)arg4 sourceAppleID:(id)arg5 options:(id)arg6;

@end

