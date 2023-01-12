//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class WFCloudKitTask, WFSharedShortcut;

@interface WFStopSharingWorkflowActivity : UIActivity
{
    WFSharedShortcut *_shortcut;
    WFCloudKitTask *_unshareTask;
}

- (void).cxx_destruct;
@property(retain, nonatomic) WFCloudKitTask *unshareTask; // @synthesize unshareTask=_unshareTask;
@property(retain, nonatomic) WFSharedShortcut *shortcut; // @synthesize shortcut=_shortcut;
- (id)activityViewController;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;

@end
