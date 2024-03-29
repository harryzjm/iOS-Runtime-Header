//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class TFFeedbackFormPresenter;

__attribute__((visibility("hidden")))
@interface TFFeedbackFormViewDataSourceBase : NSObject
{
    TFFeedbackFormPresenter *_presenter;
    CDUnknownBlockType _refreshCallback;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType refreshCallback; // @synthesize refreshCallback=_refreshCallback;
@property(retain, nonatomic) TFFeedbackFormPresenter *presenter; // @synthesize presenter=_presenter;
- (void)resetScreenshots:(id)arg1;
- (void)removeScreenshot:(id)arg1;
- (void)addScreenshots:(id)arg1;
- (unsigned long long)screenshotCount;
- (id)initWithPresenter:(id)arg1 refreshCallback:(CDUnknownBlockType)arg2;

@end

