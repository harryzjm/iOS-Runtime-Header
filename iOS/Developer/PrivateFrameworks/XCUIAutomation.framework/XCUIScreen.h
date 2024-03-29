//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCUIAutomation/XCUIScreenshotProviding-Protocol.h>

@class NSString, NSUUID, XCUIButtonConsole, XCUIKnobControl;
@protocol XCUIDevice, XCUIScreenDataSource;

@interface XCUIScreen : NSObject <XCUIScreenshotProviding>
{
    _Bool _isMainScreen;
    XCUIKnobControl *_knobControl;
    XCUIButtonConsole *_buttonConsole;
    NSUUID *_currentDiagnosticScreenRecordingUUID;
    id <XCUIDevice> _device;
    id <XCUIScreenDataSource> _screenDataSource;
    long long _displayID;
}

+ (id)screens;
+ (id)mainScreen;
- (void).cxx_destruct;
@property(readonly) long long displayID; // @synthesize displayID=_displayID;
@property(readonly) id <XCUIScreenDataSource> screenDataSource; // @synthesize screenDataSource=_screenDataSource;
@property(readonly) __weak id <XCUIDevice> device; // @synthesize device=_device;
@property(readonly) _Bool isMainScreen; // @synthesize isMainScreen=_isMainScreen;
@property(retain, nonatomic) NSUUID *currentDiagnosticScreenRecordingUUID; // @synthesize currentDiagnosticScreenRecordingUUID=_currentDiagnosticScreenRecordingUUID;
- (id)screenshotAttachmentWithName:(id)arg1 lifetime:(long long)arg2;
- (id)screenshotAttachmentWithPreferredEncoding:(id)arg1 rect:(struct CGRect)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)screenshotWithPreferredEncoding:(id)arg1 rect:(struct CGRect)arg2 options:(unsigned long long)arg3 error:(id *)arg4;
- (id)screenshotWithPreferredEncoding:(id)arg1 rect:(struct CGRect)arg2 error:(id *)arg3;
- (id)screenshotWithEncoding:(id)arg1 options:(unsigned long long)arg2;
- (id)screenshot;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (void)stopDiagnosticRecording;
- (id)startDiagnosticScreenRecording;
- (id)makeDiagnosticScreenshotAttachment;
@property(readonly) XCUIKnobControl *knobControl; // @synthesize knobControl=_knobControl;
@property(readonly) XCUIButtonConsole *buttonConsole; // @synthesize buttonConsole=_buttonConsole;
@property(readonly) struct CGRect bounds;
@property(readonly) double scale;
@property(readonly) unsigned long long traits;
@property(readonly, copy) NSString *description;
- (id)initWithDisplayID:(long long)arg1 isMainScreen:(_Bool)arg2 device:(id)arg3 screenDataSource:(id)arg4;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

