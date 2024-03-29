//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import "MRExternalDevice.h"

@class NSObject, NSString, RTIInputSystemSourceSession;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface MRTelevisionDevice : MRExternalDevice
{
    NSObject<OS_dispatch_queue> *_serialQueue;
    _Bool _hiliteMode;
    unsigned int _gameControllerInputMode;
    CDUnknownBlockType _gameControllerInputModeCallback;
    NSObject<OS_dispatch_queue> *_gameControllerInputModeCallbackQueue;
    CDUnknownBlockType _gameControllerPropertiesCallback;
    NSObject<OS_dispatch_queue> *_gameControllerPropertiesCallbackQueue;
    CDUnknownBlockType _recordingStateCallback;
    NSObject<OS_dispatch_queue> *_recordingStateCallbackQueue;
    CDUnknownBlockType _textInputCallback;
    NSObject<OS_dispatch_queue> *_textInputCallbackQueue;
    CDUnknownBlockType _rtiCallback;
    NSObject<OS_dispatch_queue> *_rtiCallbackQueue;
    RTIInputSystemSourceSession *_rtiSourceSession;
    CDUnknownBlockType _hiliteModeCallback;
    NSObject<OS_dispatch_queue> *_hiliteModeCallbackQueue;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *hiliteModeCallbackQueue; // @synthesize hiliteModeCallbackQueue=_hiliteModeCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType hiliteModeCallback; // @synthesize hiliteModeCallback=_hiliteModeCallback;
@property(retain, nonatomic) RTIInputSystemSourceSession *rtiSourceSession; // @synthesize rtiSourceSession=_rtiSourceSession;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *rtiCallbackQueue; // @synthesize rtiCallbackQueue=_rtiCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType rtiCallback; // @synthesize rtiCallback=_rtiCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *textInputCallbackQueue; // @synthesize textInputCallbackQueue=_textInputCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType textInputCallback; // @synthesize textInputCallback=_textInputCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *recordingStateCallbackQueue; // @synthesize recordingStateCallbackQueue=_recordingStateCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType recordingStateCallback; // @synthesize recordingStateCallback=_recordingStateCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerPropertiesCallbackQueue; // @synthesize gameControllerPropertiesCallbackQueue=_gameControllerPropertiesCallbackQueue;
@property(copy, nonatomic) CDUnknownBlockType gameControllerPropertiesCallback; // @synthesize gameControllerPropertiesCallback=_gameControllerPropertiesCallback;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *gameControllerInputModeCallbackQueue; // @synthesize gameControllerInputModeCallbackQueue=_gameControllerInputModeCallbackQueue;
@property(nonatomic) unsigned int gameControllerInputMode; // @synthesize gameControllerInputMode=_gameControllerInputMode;
@property(copy, nonatomic) CDUnknownBlockType gameControllerInputModeCallback; // @synthesize gameControllerInputModeCallback=_gameControllerInputModeCallback;
@property(readonly, nonatomic) _Bool hiliteMode; // @synthesize hiliteMode=_hiliteMode;
- (void)performDocumentRequest:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)handleTextActionPayload:(id)arg1;
- (void)wake;
- (void)exitHiliteMode;
- (void)processVoiceInputAudioDataForDeviceID:(unsigned int)arg1 withBuffer:(id)arg2 time:(CDStruct_ace97b7a)arg3 gain:(float)arg4;
- (void)registerVoiceInputDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)sendGameControllerEvent:(id)arg1 controllerID:(unsigned long long)arg2;
- (void)unregisterGameController:(unsigned long long)arg1;
- (void)registerGameControllerWithProperties:(id)arg1 queue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (void)getRTISessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)clearActiveTextEditingSessionData;
- (void)deleteBackwardInActiveTextEditingSession;
- (void)setTextOnActiveTextEditingSessionWithText:(id)arg1;
- (void)insertTextIntoActiveTextEditingSessionWithText:(id)arg1;
- (void)getTextEditingSessionWithReplyQueue:(id)arg1 completion:(CDUnknownBlockType)arg2;
- (void)sendTouchEvent:(struct _MRHIDTouchEvent)arg1 toVirtualDeviceWithID:(unsigned long long)arg2;
- (void)registerTouchDeviceWithDescriptor:(id)arg1 replyQueue:(id)arg2 completion:(CDUnknownBlockType)arg3;
- (id)currentClientUpdatesConfigMessage;
- (void)setHiliteModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setVoiceRecordingStateCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setRTICallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setTextEditingCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setGameControllerPropertiesCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;
- (void)setGameControllerInputModeCallback:(CDUnknownBlockType)arg1 withQueue:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

