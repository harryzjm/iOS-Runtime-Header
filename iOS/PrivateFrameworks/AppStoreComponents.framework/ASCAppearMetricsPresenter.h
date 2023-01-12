//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class ASCMetrics, ASCMetricsActivity, ASCMetricsScrollObserver, NSString, UIView;
@protocol ASCViewModel;

__attribute__((visibility("hidden")))
@interface ASCAppearMetricsPresenter : NSObject
{
    _Bool _enabled;
    _Bool _appeared;
    _Bool _settingModel;
    UIView *_view;
    ASCMetricsActivity *_activity;
    id <ASCViewModel> _model;
    ASCMetrics *_metrics;
    ASCMetricsScrollObserver *_scrollObserver;
}

+ (id)log;
- (void).cxx_destruct;
@property(retain, nonatomic) ASCMetricsScrollObserver *scrollObserver; // @synthesize scrollObserver=_scrollObserver;
@property(nonatomic, getter=isSettingModel) _Bool settingModel; // @synthesize settingModel=_settingModel;
@property(nonatomic, getter=isAppeared) _Bool appeared; // @synthesize appeared=_appeared;
@property(readonly, nonatomic) ASCMetrics *metrics; // @synthesize metrics=_metrics;
@property(copy, nonatomic) id <ASCViewModel> model; // @synthesize model=_model;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) ASCMetricsActivity *activity; // @synthesize activity=_activity;
@property(readonly, nonatomic) __weak UIView *view; // @synthesize view=_view;
- (void)scrollViewDidScroll:(id)arg1;
- (void)disappearIfNeeded;
@property(readonly, nonatomic) _Bool canDisappear;
- (void)appearIfNeeded;
@property(readonly, nonatomic) _Bool canAppear;
- (void)viewDidRetryFailedRequest;
- (void)viewDidFailRequest:(id)arg1 withError:(id)arg2;
- (void)viewDidEndRenderWithPredicate:(id)arg1;
- (void)viewDidAction;
- (void)viewDidSetHidden;
- (void)viewDidMoveToWindow;
@property(readonly, copy) NSString *description;
- (id)initWithView:(id)arg1;
- (id)initWithView:(id)arg1 metrics:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

