//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class EKDayAllDayView, EKDayView;

@interface EKDayViewWithGutters : UIView
{
    EKDayAllDayView *_leftAllDayView;
    EKDayAllDayView *_rightAllDayView;
    UIView *_leftGutter;
    UIView *_rightGutter;
    EKDayView *_dayView;
    double _gutterWidth;
    double _allDayHeight;
}

@property(nonatomic) double allDayHeight; // @synthesize allDayHeight=_allDayHeight;
@property(nonatomic) double gutterWidth; // @synthesize gutterWidth=_gutterWidth;
@property(retain, nonatomic) EKDayView *dayView; // @synthesize dayView=_dayView;
@property(readonly, nonatomic) UIView *rightGutter; // @synthesize rightGutter=_rightGutter;
@property(readonly, nonatomic) UIView *leftGutter; // @synthesize leftGutter=_leftGutter;
- (void).cxx_destruct;
- (id)_createAllDayView;
- (id)initWithFrame:(struct CGRect)arg1 dayView:(id)arg2;

@end

