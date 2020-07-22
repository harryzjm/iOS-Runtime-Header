//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <StoreBookkeeper/SBKSyncTransactionProcessing-Protocol.h>

@class NSString, SBKSyncTransaction;

@interface SBKLoadDomainVersionRequestHandler <SBKSyncTransactionProcessing>
{
    _Bool _loadsRemoteItemCount;
    unsigned long long _responseItemCount;
    unsigned long long _itemCount;
    SBKSyncTransaction *_transaction;
}

+ (long long)conflictDetectionType;
@property(retain) SBKSyncTransaction *transaction; // @synthesize transaction=_transaction;
@property unsigned long long itemCount; // @synthesize itemCount=_itemCount;
@property(readonly) unsigned long long responseItemCount; // @synthesize responseItemCount=_responseItemCount;
@property _Bool loadsRemoteItemCount; // @synthesize loadsRemoteItemCount=_loadsRemoteItemCount;
- (void).cxx_destruct;
- (void)runWithCompletionHandler:(CDUnknownBlockType)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(copy) NSString *responseDomainVersion; // @dynamic responseDomainVersion;
@property(readonly) Class superclass;

@end

