//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TelephonyUtilities/NSObject-Protocol.h>

@class CALayer, NSArray, NSString, VideoAttributes;
@protocol TUVideoDeviceControllerProviderDelegate;

@protocol TUVideoDeviceControllerProvider <NSObject>
@property(nonatomic) __weak id <TUVideoDeviceControllerProviderDelegate> delegate;
@property(copy, nonatomic) VideoAttributes *localVideoAttributes;
@property(readonly, copy, nonatomic) NSArray *inputDevices;
@property(readonly, copy, nonatomic) NSString *localCameraUID;
@property(readonly, nonatomic, getter=isPreviewRunning) _Bool previewRunning;
- (void)endPIPToPreviewAnimation;
- (void)beginPIPToPreviewAnimation;
- (void)endPreviewToPIPAnimation;
- (void)beginPreviewToPIPAnimation;
- (void)setLocalScreenAttributes:(VideoAttributes *)arg1;
- (VideoAttributes *)localScreenAttributesForVideoAttributes:(VideoAttributes *)arg1;
- (void)stopPreview;
- (void)pausePreview;
- (void)startPreview;
- (void)setLocalVideoLayer:(CALayer *)arg1 front:(_Bool)arg2;
- (CALayer *)localVideoLayer:(_Bool)arg1;
- (void)setLocalCameraWithUID:(NSString *)arg1;
@end

