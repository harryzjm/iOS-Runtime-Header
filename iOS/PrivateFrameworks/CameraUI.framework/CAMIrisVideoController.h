//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CameraUI/CAMNebulaDaemonIrisClientProtocol-Protocol.h>

@class CAMNebulaDaemonProxyManager, NSMutableArray, NSMutableDictionary, NSString;
@protocol CAMIrisVideoControllerDelegate, OS_dispatch_queue;

@interface CAMIrisVideoController : NSObject <CAMNebulaDaemonIrisClientProtocol>
{
    id <CAMIrisVideoControllerDelegate> _delegate;
    NSObject<OS_dispatch_queue> *__mutexQueue;
    CAMNebulaDaemonProxyManager *__nebulaDaemonProxyManager;
    NSMutableArray *__jobsToBeSent;
    NSMutableDictionary *__pendingJobs;
}

@property(readonly, nonatomic) NSMutableDictionary *_pendingJobs; // @synthesize _pendingJobs=__pendingJobs;
@property(readonly, nonatomic) NSMutableArray *_jobsToBeSent; // @synthesize _jobsToBeSent=__jobsToBeSent;
@property(readonly, nonatomic) CAMNebulaDaemonProxyManager *_nebulaDaemonProxyManager; // @synthesize _nebulaDaemonProxyManager=__nebulaDaemonProxyManager;
@property(readonly, nonatomic) NSObject<OS_dispatch_queue> *_mutexQueue; // @synthesize _mutexQueue=__mutexQueue;
@property(readonly, nonatomic) __weak id <CAMIrisVideoControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)nebulaDaemonDidCompleteLocalVideoPersistenceWithResult:(id)arg1;
- (_Bool)isWaitingOnNebuladForRequest:(id)arg1;
- (void)_notifyDelegateOfVideoLocalPersistenceResult:(id)arg1 forVideoPersistenceUUID:(id)arg2;
- (void)_submitJob:(id)arg1;
- (void)stillImageRequestDidCompleteCapture:(id)arg1 error:(id)arg2;
- (void)stillImageRequest:(id)arg1 didCompleteVideoCaptureWithResult:(id)arg2;
- (id)initWithNebulaDaemonProxyManager:(id)arg1 delegate:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

