//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <HomeUI/HFCameraImageObserver-Protocol.h>

@class NSArray, NSLayoutConstraint, UILabel;

@interface HURecordingEventCellFamiliarFacesView : UIView <HFCameraImageObserver>
{
    UILabel *_titleLabel;
    UIView *_pointerView;
    NSLayoutConstraint *_leftTitleConstraint;
    double _maxWidthForNames;
    NSArray *_imageViews;
    NSArray *_sortedPeople;
}

+ (id)placeholderImage;
+ (id)faceCropImageView;
- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *sortedPeople; // @synthesize sortedPeople=_sortedPeople;
@property(readonly, nonatomic) NSArray *imageViews; // @synthesize imageViews=_imageViews;
@property(nonatomic) double maxWidthForNames; // @synthesize maxWidthForNames=_maxWidthForNames;
@property(retain, nonatomic) NSLayoutConstraint *leftTitleConstraint; // @synthesize leftTitleConstraint=_leftTitleConstraint;
@property(retain, nonatomic) UIView *pointerView; // @synthesize pointerView=_pointerView;
@property(retain, nonatomic) UILabel *titleLabel; // @synthesize titleLabel=_titleLabel;
- (id)faceCropImageViews;
- (void)manager:(id)arg1 failedToFindFaceCropForPersonName:(id)arg2;
- (void)manager:(id)arg1 didFindFaceCrop:(id)arg2 forClip:(id)arg3 usingPersonName:(id)arg4;
- (void)resizeWithMaxWidth:(double)arg1;
- (void)updateTitleLabel;
- (void)updateWithPersonEvents:(id)arg1 forCameraClip:(id)arg2;
- (id)initWithFrame:(struct CGRect)arg1;

@end
