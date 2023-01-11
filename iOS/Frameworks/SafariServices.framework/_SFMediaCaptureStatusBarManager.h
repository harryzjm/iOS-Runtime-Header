//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SafariServices/SBSStatusBarStyleOverridesCoordinatorDelegate-Protocol.h>

@class NSString, SBSStatusBarStyleOverridesAssertion, SBSStatusBarStyleOverridesCoordinator;
@protocol _SFMediaRecordingDocument;

@interface _SFMediaCaptureStatusBarManager : NSObject <SBSStatusBarStyleOverridesCoordinatorDelegate>
{
    _Bool _hasStatusBarOverride;
    id <_SFMediaRecordingDocument> _recordingDocument;
    SBSStatusBarStyleOverridesAssertion *_statusBarStyleOverride;
    SBSStatusBarStyleOverridesCoordinator *_coordinator;
    NSString *_statusFormatString;
}

+ (id)sharedManager;
- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *statusFormatString; // @synthesize statusFormatString=_statusFormatString;
- (void)statusBarCoordinator:(id)arg1 invalidatedRegistrationWithError:(id)arg2;
- (_Bool)statusBarCoordinator:(id)arg1 receivedTapWithContext:(id)arg2 completionBlock:(CDUnknownBlockType)arg3;
- (void)activateApp;
- (void)_cleanUpStatusBarOverride;
- (void)_didInvalideStatusBarOverride;
- (void)_didAcquireStatusBarOverrideSuccessfully:(_Bool)arg1;
- (void)_releaseStatusBarOverride;
- (void)_acquireStatusBarOverrideWithAudioOnly:(_Bool)arg1;
- (void)_acquireStatusBarOverride;
- (int)overrideStyleForAudioOnly:(_Bool)arg1;
- (void)cancelStatusBarOverride;
- (void)recordingDocumentDidEndMediaCapture:(id)arg1;
- (void)recordingDocumentDidBeginMediaCapture:(id)arg1 audioOnly:(_Bool)arg2;
@property(readonly, nonatomic, getter=isRecording) _Bool recording;
- (void)setRecordingDocument:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
