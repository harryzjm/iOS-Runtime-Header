//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIActivity.h>

@class NSURL;

@interface WFWorkflowCopyActivity : UIActivity
{
    NSURL *_excludedURL;
    NSURL *_URL;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSURL *URL; // @synthesize URL=_URL;
@property(readonly, nonatomic) NSURL *excludedURL; // @synthesize excludedURL=_excludedURL;
- (void)performActivity;
- (void)prepareWithActivityItems:(id)arg1;
- (_Bool)canPerformWithActivityItems:(id)arg1;
- (id)_systemImageName;
- (id)activityTitle;
- (id)activityType;
- (id)initWithExcludedURL:(id)arg1;

@end
