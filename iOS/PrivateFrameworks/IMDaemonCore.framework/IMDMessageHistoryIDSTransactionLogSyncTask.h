//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <IMDaemonCore/IMDMessageHistorySyncTask-Protocol.h>

@class IMDAccountController, NSMutableDictionary, NSString;

@interface IMDMessageHistoryIDSTransactionLogSyncTask : NSObject <IMDMessageHistorySyncTask>
{
    NSString *_className;
    IMDAccountController *_accountController;
    NSMutableDictionary *_taskGroupedByServiceName;
    CDUnknownBlockType _syncTaskCompletionBlock;
}

@property(copy, nonatomic) CDUnknownBlockType syncTaskCompletionBlock; // @synthesize syncTaskCompletionBlock=_syncTaskCompletionBlock;
@property(retain, nonatomic) NSMutableDictionary *taskGroupedByServiceName; // @synthesize taskGroupedByServiceName=_taskGroupedByServiceName;
@property(retain, nonatomic) IMDAccountController *accountController; // @synthesize accountController=_accountController;
- (CDUnknownBlockType)_createSyncCompletionBlockForServiceSession:(id)arg1;
- (CDUnknownBlockType)_createKnownRecordBlock;
- (CDUnknownBlockType)_createProcessBatchBlockWithServiceSession:(id)arg1;
- (void)_setupAndBeginSync;
- (unsigned long long)syncTaskType;
- (void)startSyncTask:(CDUnknownBlockType)arg1;
- (void)dealloc;
- (id)initWithAccountController:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
