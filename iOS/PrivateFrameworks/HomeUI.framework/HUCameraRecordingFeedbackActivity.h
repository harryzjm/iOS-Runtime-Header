//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class HMCameraClip, HMCameraProfile;

@interface HUCameraRecordingFeedbackActivity : UIActivity
{
    HMCameraClip *_cameraClip;
    HMCameraProfile *_cameraProfile;
    CDUnknownBlockType _submissionHandler;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType submissionHandler; // @synthesize submissionHandler=_submissionHandler;
@property(retain, nonatomic) HMCameraProfile *cameraProfile; // @synthesize cameraProfile=_cameraProfile;
@property(retain, nonatomic) HMCameraClip *cameraClip; // @synthesize cameraClip=_cameraClip;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)activityImage;
- (id)activityTitle;
- (id)activityType;
- (id)initWithCameraClip:(id)arg1 cameraProfile:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;

@end
