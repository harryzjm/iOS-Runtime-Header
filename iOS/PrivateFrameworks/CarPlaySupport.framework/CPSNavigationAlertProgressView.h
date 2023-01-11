//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface CPSNavigationAlertProgressView : UIView
{
    _Bool _hasStartedAnimating;
    double _duration;
    UIView *_progressView;
}

@property(nonatomic) _Bool hasStartedAnimating; // @synthesize hasStartedAnimating=_hasStartedAnimating;
@property(retain, nonatomic) UIView *progressView; // @synthesize progressView=_progressView;
@property(nonatomic) double duration; // @synthesize duration=_duration;
- (void).cxx_destruct;
- (void)startAnimating;
- (id)initWithFrame:(struct CGRect)arg1 duration:(double)arg2;

@end
