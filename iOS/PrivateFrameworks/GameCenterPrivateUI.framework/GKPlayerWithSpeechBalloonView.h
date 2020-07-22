//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class GKPlayer, GKSpeechBalloonBackgroundView, NSArray, NSString, UITextView;
@protocol GKPlayerPhotoContainer;

@interface GKPlayerWithSpeechBalloonView : UIView
{
    UITextView *_speechTextView;
    UIView<GKPlayerPhotoContainer> *_photoView;
    GKSpeechBalloonBackgroundView *_balloonView;
    NSArray *_replaceableConstraints;
}

+ (_Bool)requiresConstraintBasedLayout;
+ (id)instantiatePhotoContainer;
@property(retain, nonatomic) NSArray *replaceableConstraints; // @synthesize replaceableConstraints=_replaceableConstraints;
@property(retain, nonatomic) GKSpeechBalloonBackgroundView *balloonView; // @synthesize balloonView=_balloonView;
@property(retain, nonatomic) UIView<GKPlayerPhotoContainer> *photoView; // @synthesize photoView=_photoView;
@property(retain, nonatomic) UITextView *speechTextView; // @synthesize speechTextView=_speechTextView;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
@property(nonatomic) unsigned char tipDirection;
@property(retain, nonatomic) NSString *speechText;
- (void)_updateSpeechText:(id)arg1;
@property(nonatomic) unsigned char drawStyle;
@property(retain, nonatomic) GKPlayer *player;
- (void)updateConstraints;
- (id)metrics;
- (void)dealloc;
- (void)layoutSubviews;
- (void)setupSubviews;
- (void)awakeFromNib;
- (id)initWithFrame:(struct CGRect)arg1;

@end

