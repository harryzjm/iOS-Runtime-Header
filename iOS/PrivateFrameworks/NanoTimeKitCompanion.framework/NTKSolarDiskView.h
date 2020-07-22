//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@interface NTKSolarDiskView : UIView
{
    double _horizonLine;
    UIView *_sunUpView;
    UIView *_sunDownView;
}

@property(retain, nonatomic) UIView *sunDownView; // @synthesize sunDownView=_sunDownView;
@property(retain, nonatomic) UIView *sunUpView; // @synthesize sunUpView=_sunUpView;
@property(nonatomic) double horizonLine; // @synthesize horizonLine=_horizonLine;
- (void).cxx_destruct;
- (void)layoutSubviews;
- (void)setCenter:(struct CGPoint)arg1;
- (id)initWithFrame:(struct CGRect)arg1;

@end

