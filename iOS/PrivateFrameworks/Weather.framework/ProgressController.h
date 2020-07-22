//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSTimer;

@interface ProgressController : NSObject
{
    _Bool _progressShowing;
    int _loadingCount;
    NSTimer *_hideSpinnerTimer;
}

+ (id)sharedProgressController;
- (void).cxx_destruct;
- (void)suspend;
- (void)setLoadingData:(_Bool)arg1;
- (void)_showSpinner;
- (void)_hideSpinner;
- (void)_setHideSpinnerTimer:(id)arg1;
- (void)userScrolled;

@end
