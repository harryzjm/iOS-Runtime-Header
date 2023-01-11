//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowKit/WFOutOfProcessWorkflowControllerDelegate-Protocol.h>

@class NSDictionary, NSSet, NSString, WFOutOfProcessWorkflowController;

@interface WFRemoteExecutionIncomingRunRequestSession <WFOutOfProcessWorkflowControllerDelegate>
{
    WFOutOfProcessWorkflowController *_controller;
    NSSet *_lastKnownDestinations;
    NSDictionary *_lastKnownOptions;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSDictionary *lastKnownOptions; // @synthesize lastKnownOptions=_lastKnownOptions;
@property(retain, nonatomic) NSSet *lastKnownDestinations; // @synthesize lastKnownDestinations=_lastKnownDestinations;
@property(retain, nonatomic) WFOutOfProcessWorkflowController *controller; // @synthesize controller=_controller;
- (void)outOfProcessWorkflowController:(id)arg1 didFinishWithError:(id)arg2 cancelled:(_Bool)arg3 reference:(id)arg4 dialogAttribution:(id)arg5;
- (void)finishWithError:(id)arg1;
- (void)finish;
- (double)timeoutLimitInSeconds;
- (void)handleTimeout;
- (void)handleIncomingFileForRemoteExecutionWithURL:(id)arg1 withIdentifier:(id)arg2 metadata:(id)arg3 destinations:(id)arg4 options:(id)arg5;
- (void)sendResponse:(id)arg1 toDestinations:(id)arg2 options:(id)arg3;
- (void)handleUnsupportedVersionForRequestData:(id)arg1 error:(id)arg2 destinations:(id)arg3 options:(id)arg4;
- (void)handleIncomingProtobuf:(id)arg1 destinations:(id)arg2 options:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
