//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClassroomKit/CATTaskClientDelegate-Protocol.h>

@class CATOperation, CATOperationQueue, CATTaskClient, NSString;
@protocol CRKToolCommandDelegate, OS_dispatch_source;

@interface CRKToolCommand : NSObject <CATTaskClientDelegate>
{
    NSObject<OS_dispatch_source> *mSIGINTSource;
    CATTaskClient *mTaskClient;
    CATOperationQueue *mOperationQueue;
    CATOperation *mOperation;
    _Bool _printJSON;
    _Bool _printVerbose;
    _Bool _useDMFRequest;
    id <CRKToolCommandDelegate> _delegate;
    NSString *_sessionIdentifier;
}

+ (_Bool)handlesProgress;
+ (_Bool)instructorCommand;
+ (void)printHelp;
+ (id)help;
+ (id)description;
+ (id)aliases;
+ (id)subcommandPath;
+ (_Bool)supportsDMFRequest;
+ (_Bool)supportsVerboseOutput;
+ (_Bool)supportsJSON;
- (void).cxx_destruct;
@property(copy, nonatomic) NSString *sessionIdentifier; // @synthesize sessionIdentifier=_sessionIdentifier;
@property(nonatomic) __weak id <CRKToolCommandDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=shouldUseDMFRequest) _Bool useDMFRequest; // @synthesize useDMFRequest=_useDMFRequest;
@property(nonatomic, getter=shouldPrintVerbose) _Bool printVerbose; // @synthesize printVerbose=_printVerbose;
@property(nonatomic, getter=shouldPrintJSON) _Bool printJSON; // @synthesize printJSON=_printJSON;
- (void)clientDidDisconnect:(id)arg1;
- (void)client:(id)arg1 didInterruptWithError:(id)arg2;
- (void)client:(id)arg1 didReceiveNotificationWithName:(id)arg2 userInfo:(id)arg3;
- (void)clientDidConnect:(id)arg1;
- (_Bool)didOperationSucceed:(id)arg1;
- (_Bool)didCommandSucceed;
- (_Bool)isCommandFinished;
- (void)cleanupAndExitIfNeeded;
- (void)_remoteTaskDidFinish:(id)arg1;
- (void)_remoteTaskDidProgress:(id)arg1;
- (void)executeOperation:(id)arg1;
- (void)connectToTaskClientWithCompletionBlock:(CDUnknownBlockType)arg1;
- (id)transportProvider;
- (void)remoteTaskDidFinish:(id)arg1;
- (void)remoteTaskDidProgress:(id)arg1;
- (id)DMFRequestWithArguments:(id)arg1;
- (id)requestWithArguments:(id)arg1;
- (id)operationWithClient:(id)arg1 arguments:(id)arg2;
- (id)arrayByParsingAndRemovingArgumentFlags:(id)arg1;
- (void)runWithClient:(id)arg1 arguments:(id)arg2;
- (void)runWithArguments:(id)arg1;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
