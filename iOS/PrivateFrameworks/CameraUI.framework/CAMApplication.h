//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIApplication.h>

@class CAMPerformanceTestHarness;

@interface CAMApplication : UIApplication
{
    CAMPerformanceTestHarness *_currentTestHarness;
}

@property(retain, nonatomic) CAMPerformanceTestHarness *currentTestHarness; // @synthesize currentTestHarness=_currentTestHarness;
- (void).cxx_destruct;
- (void)prepareForDefaultImageSnapshotForScreen:(id)arg1;
- (unsigned long long)supportedInterfaceOrientationsForWindow:(id)arg1;
- (_Bool)runTest:(id)arg1 options:(id)arg2;
- (_Bool)runPresentTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runSwitchModesTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runSwitchCamerasTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runSwitchToPortraitFrontWithTestWithName:(id)arg1 options:(id)arg2;
- (_Bool)runTakePictureFrontPortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runTakePicturePortraitTest:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runTakePictureTestWithFrontCamera:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (_Bool)runTakePictureTestWithTestName:(id)arg1 options:(id)arg2 prototype:(id)arg3;
- (void)didChangeToMode:(long long)arg1 device:(long long)arg2;
- (void)didOpenViewfinderForReason:(long long)arg1;
- (void)willOpenViewfinderForReason:(long long)arg1;
- (void)didCloseViewfinderForReason:(long long)arg1;
- (void)willCloseViewfinderForReason:(long long)arg1;
- (void)_configureExtendedLaunchTestIfNeeded;
- (id)_extendLaunchTest;
- (void)_registerPreviewStartBlock:(CDUnknownBlockType)arg1;

@end

