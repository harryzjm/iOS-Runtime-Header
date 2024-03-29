//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIView.h>

@class AVBackgroundView, NSNumber, NSString, TVImageProxy, VUICountDownProgressIndicator, VUILabel, _TVImageView;
@protocol VUIPostPlayViewDelegate;

__attribute__((visibility("hidden")))
@interface VUIPostPlayView : UIView
{
    _Bool _canAutoPlay;
    id <VUIPostPlayViewDelegate> _delegate;
    AVBackgroundView *_backgroundView;
    _TVImageView *_episodeImageView;
    VUILabel *_nextEpisodeLabel;
    VUILabel *_headerLabel;
    TVImageProxy *_episodeImageProxy;
    VUICountDownProgressIndicator *_autoPlayIndicator;
    NSNumber *_autoPlayDuration;
    NSNumber *_defaultAutoPlayDuration;
    NSString *_title;
    NSString *_header;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *header; // @synthesize header=_header;
@property(retain, nonatomic) NSString *title; // @synthesize title=_title;
@property(retain, nonatomic) NSNumber *defaultAutoPlayDuration; // @synthesize defaultAutoPlayDuration=_defaultAutoPlayDuration;
@property(retain, nonatomic) NSNumber *autoPlayDuration; // @synthesize autoPlayDuration=_autoPlayDuration;
@property(retain, nonatomic) VUICountDownProgressIndicator *autoPlayIndicator; // @synthesize autoPlayIndicator=_autoPlayIndicator;
@property(retain, nonatomic) TVImageProxy *episodeImageProxy; // @synthesize episodeImageProxy=_episodeImageProxy;
@property(retain, nonatomic) VUILabel *headerLabel; // @synthesize headerLabel=_headerLabel;
@property(retain, nonatomic) VUILabel *nextEpisodeLabel; // @synthesize nextEpisodeLabel=_nextEpisodeLabel;
@property(retain, nonatomic) _TVImageView *episodeImageView; // @synthesize episodeImageView=_episodeImageView;
@property(retain, nonatomic) AVBackgroundView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(nonatomic) _Bool canAutoPlay; // @synthesize canAutoPlay=_canAutoPlay;
@property(nonatomic) __weak id <VUIPostPlayViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)_dispatchAutoPlayEvent;
- (void)_invalidateAutoPlayIfNeeded;
- (void)_startAutoPlayAnimation;
- (void)stopAutoPlayTimer;
- (void)startAutoPlayTimer;
- (struct CGSize)_layoutForOriginal:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutForCategoryAccessibility:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (struct CGSize)_layoutWithSize:(struct CGSize)arg1 metricsOnly:(_Bool)arg2;
- (void)_setupViews;
- (void)layoutSubviews;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (id)initWithFrame:(struct CGRect)arg1 andEpisodeArtworkURLStringFormat:(id)arg2 andTitle:(id)arg3 andHeader:(id)arg4;
- (id)initWithFrame:(struct CGRect)arg1 andTVImageProxy:(id)arg2 andTitle:(id)arg3 andHeader:(id)arg4;

@end

