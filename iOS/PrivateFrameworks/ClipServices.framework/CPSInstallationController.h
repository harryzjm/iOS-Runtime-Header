//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <ClipServices/ASDClipSessionDelegate-Protocol.h>

@class NSMutableDictionary, NSString;
@protocol CPSAppInfoFetching, CPSInstallationControllerDelegate, OS_dispatch_queue;

@interface CPSInstallationController : NSObject <ASDClipSessionDelegate>
{
    id <CPSAppInfoFetching> _appInfoFetcher;
    NSMutableDictionary *_sessionsByBundleID;
    NSMutableDictionary *_installPromisesBySessionID;
    NSObject<OS_dispatch_queue> *_queue;
    id <CPSInstallationControllerDelegate> _delegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CPSInstallationControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_informDelegateDidInstallPlaceholder:(id)arg1;
- (void)clipSessionDidInstallPlaceholder:(id)arg1;
- (void)clipSessionDidCompleteSuccessfully:(id)arg1;
- (void)clipSession:(id)arg1 didUpdateProgress:(double)arg2;
- (void)clipSession:(id)arg1 didFailWithError:(id)arg2;
- (_Bool)stopStallingCurrentInstallation;
- (void)_doneWithSession:(id)arg1 error:(id)arg2;
- (id)_bundleIDFromSession:(id)arg1;
- (void)_cancelClipSessionWithBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)_getClipSessionForBundleID:(id)arg1 sourceBundleID:(id)arg2 forInstall:(_Bool)arg3 completion:(CDUnknownBlockType)arg4;
- (void)_continueInstallForBundleID:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)installClipWithBundleID:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)cancelPrewarmForBundleID:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)prewarmClipWithBundleID:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)_asdClipRequestWithSession:(id)arg1;
- (id)_placeholderArtworkForSession:(id)arg1;
- (void)_prewarmDemoIPAWithBundleID:(id)arg1 session:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)initWithAppInfoFetcher:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
