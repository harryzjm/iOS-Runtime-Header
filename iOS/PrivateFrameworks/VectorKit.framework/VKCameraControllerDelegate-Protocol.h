//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <VectorKit/NSObject-Protocol.h>

@class VKAnimation, VKCameraController;
@protocol VKTrackableAnnotation, VKTrackableAnnotationPresentation;

@protocol VKCameraControllerDelegate <NSObject>
- (void)cameraControllerDidReturnToDefaultZoom:(VKCameraController *)arg1;
- (void)cameraControllerDidLeaveDefaultZoom:(VKCameraController *)arg1;
- (void)cameraControllerHasStoppedPanning:(VKCameraController *)arg1;
- (void)cameraControllerHasStartedPanning:(VKCameraController *)arg1;
- (void)cameraControllerDidFinishInitialTrackingAnimation:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 canZoomOutDidChange:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 canZoomInDidChange:(_Bool)arg2;
- (id <VKTrackableAnnotationPresentation>)cameraController:(VKCameraController *)arg1 presentationForAnnotation:(id <VKTrackableAnnotation>)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeWillChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 flyoverModeDidChange:(int)arg2;
- (void)cameraController:(VKCameraController *)arg1 canEnter3DModeDidChange:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 didBecomePitched:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 didChangeRegionAnimated:(_Bool)arg2;
- (void)cameraController:(VKCameraController *)arg1 willChangeRegionAnimated:(_Bool)arg2;
- (void)cameraControllerDidChangeCameraState:(VKCameraController *)arg1;
- (void)cameraController:(VKCameraController *)arg1 requestsDisplayRate:(long long)arg2;
- (void)cameraControllerRequestsUpdateDisplayLinkStatus:(VKCameraController *)arg1;
- (void)cameraControllerRequestsLayout:(VKCameraController *)arg1;
- (void)runAnimation:(VKAnimation *)arg1;
@end
