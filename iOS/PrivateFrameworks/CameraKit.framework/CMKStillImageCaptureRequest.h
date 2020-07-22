//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CameraKit/NSCopying-Protocol.h>
#import <CameraKit/NSMutableCopying-Protocol.h>

@protocol CMKStillImageCaptureRequestDelegate;

@interface CMKStillImageCaptureRequest <NSCopying, NSMutableCopying>
{
    _Bool _transient;
    long long _deviceOrientation;
    long long _captureDevice;
    long long _flashMode;
    int _hdrMode;
    _Bool _usesStillImageStabilization;
    _Bool _wantsAudioForCapture;
    id <CMKStillImageCaptureRequestDelegate> _delegate;
}

@property(readonly, nonatomic) __weak id <CMKStillImageCaptureRequestDelegate> delegate; // @synthesize delegate=_delegate;
@property(readonly, nonatomic) _Bool wantsAudioForCapture; // @synthesize wantsAudioForCapture=_wantsAudioForCapture;
@property(readonly, nonatomic) _Bool usesStillImageStabilization; // @synthesize usesStillImageStabilization=_usesStillImageStabilization;
@property(readonly, nonatomic) int hdrMode; // @synthesize hdrMode=_hdrMode;
@property(readonly, nonatomic) long long flashMode; // @synthesize flashMode=_flashMode;
@property(readonly, nonatomic) long long captureDevice; // @synthesize captureDevice=_captureDevice;
@property(readonly, nonatomic) long long deviceOrientation; // @synthesize deviceOrientation=_deviceOrientation;
@property(readonly, nonatomic, getter=isTransient) _Bool transient; // @synthesize transient=_transient;
- (void).cxx_destruct;
- (id)mutableCopyWithZone:(struct _NSZone *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)init;

@end
