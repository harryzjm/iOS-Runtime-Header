//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/_UIPreviewPresentationController.h>

@protocol PUPhotosPreviewPresentationControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUPhotosPreviewPresentationController : _UIPreviewPresentationController
{
    id <PUPhotosPreviewPresentationControllerDelegate> _photosPreviewingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <PUPhotosPreviewPresentationControllerDelegate> photosPreviewingDelegate; // @synthesize photosPreviewingDelegate=_photosPreviewingDelegate;
- (void)_revealTransitionDidComplete:(_Bool)arg1;

@end

