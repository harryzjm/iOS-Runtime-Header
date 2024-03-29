//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString, SCContentFilter, SCStream, VCScreenCapturePicker, VCScreenShare;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface VCScreenCaptureManager : NSObject
{
    NSObject<OS_dispatch_queue> *_xpcCommandQueue;
    NSMutableDictionary *_screenShare;
    VCScreenShare *_pickerClientScreenShare;
    VCScreenCapturePicker *_picker;
    SCContentFilter *_contentFilter;
    SCStream *_screenStream;
}

+ (_Bool)canScreenSharePrivateContent:(id)arg1;
+ (id)sharedManager;
@property(retain, nonatomic) SCStream *screenStream; // @synthesize screenStream=_screenStream;
@property(readonly, nonatomic) SCContentFilter *contentFilter; // @synthesize contentFilter=_contentFilter;
@property(readonly, nonatomic) VCScreenCapturePicker *picker; // @synthesize picker=_picker;
- (void)picker:(id)arg1 pickedContentFilter:(id)arg2 forStream:(id)arg3 error:(id)arg4;
- (id)attributesForContentFilter:(id)arg1;
- (id)errorForAttributesError:(id)arg1;
- (void)endPrivacyAccountingInterval:(id)arg1;
- (void)startPrivacyAccountingInterval:(id)arg1;
- (void)registerBlocksForService;
- (void)createPicker;
- (id)startScreenShare:(id)arg1;
- (id)stopScreenShareAndNotifyDelegate:(id)arg1;
- (id)stopScreenShare:(id)arg1;
- (void)removePickerClientScreenShare:(id)arg1;
- (id)newScreenShareWithConfig:(id)arg1 pid:(id)arg2;
- (_Bool)isPickerClientProcessId:(id)arg1;
- (id)newCaptureSourceID;
- (id)screenShareDictionary:(id)arg1;
- (void)screenCaptureStopFor:(id)arg1 didSucceed:(_Bool)arg2 withError:(id)arg3;
- (void)screenCaptureStartFor:(id)arg1 didSucceed:(_Bool)arg2 withError:(id)arg3;
- (id)getErrorDictionaryFromError:(id)arg1;
- (void)dealloc;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

