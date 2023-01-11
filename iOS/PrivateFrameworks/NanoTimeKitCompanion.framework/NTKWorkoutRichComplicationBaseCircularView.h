//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class CLKComplicationTemplate, NTKColoringImageView;

@interface NTKWorkoutRichComplicationBaseCircularView : UIView
{
    UIView *_backgroundView;
    NTKColoringImageView *_staticImageView;
    long long _state;
    _Bool _paused;
    CLKComplicationTemplate *_complicationTemplate;
}

@property(retain, nonatomic) CLKComplicationTemplate *complicationTemplate; // @synthesize complicationTemplate=_complicationTemplate;
@property(nonatomic) _Bool paused; // @synthesize paused=_paused;
- (void).cxx_destruct;
- (void)_updateUI;
- (void)_applyChanges;
- (void)layoutSubviews;
- (void)dealloc;
- (id)initWithNoActiveWorkoutImageName:(id)arg1 animatedImagesName:(id)arg2;

@end

