//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVCaptureInputInternal, NSArray;

@interface AVCaptureInput : NSObject
{
    AVCaptureInputInternal *_inputInternal;
}

+ (void)initialize;
- (id)videoDevice;
- (void)performFigCaptureSessionOperationSafelyUsingBlock:(CDUnknownBlockType)arg1;
- (void)handleChangedActiveFormat:(id)arg1 forDevice:(id)arg2;
- (void)detachSafelyFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)detachFromFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachSafelyToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (void)attachToFigCaptureSession:(struct OpaqueFigCaptureSession *)arg1;
- (struct OpaqueCMClock *)clock;
- (void)setSession:(id)arg1;
- (id)session;
@property(readonly, nonatomic) NSArray *ports;
- (void)dealloc;
- (id)initSubclass;

@end
