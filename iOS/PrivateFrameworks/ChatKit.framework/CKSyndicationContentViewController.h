//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <OnBoardingKit/OBWelcomeController.h>

@class CKSyndicationSharedWithYouViewController, NSMutableArray, UILabel, UIView;

@interface CKSyndicationContentViewController : OBWelcomeController
{
    CKSyndicationSharedWithYouViewController *_sharedWithYouViewController;
    unsigned long long _onboardingPage;
    NSMutableArray *_constraints;
    UIView *_highlightsView1;
    UILabel *_micropillView1;
    UIView *_highlightsView2;
    UILabel *_micropillView2;
    UIView *_combinedHighlightsView;
    UIView *_tvLinkBalloonView;
    UIView *_podcastLinkBalloonView;
    UIView *_musicLinkBalloonView;
    UIView *_tvPinIconView;
    UIView *_podcastPinIconView;
    UIView *_musicPinIconView;
    double _photoShortSide;
    double _photoLongSide;
    struct CGSize _maxContentSize;
}

- (void).cxx_destruct;
@property(nonatomic) struct CGSize maxContentSize; // @synthesize maxContentSize=_maxContentSize;
@property(nonatomic) double photoLongSide; // @synthesize photoLongSide=_photoLongSide;
@property(nonatomic) double photoShortSide; // @synthesize photoShortSide=_photoShortSide;
@property(retain, nonatomic) UIView *musicPinIconView; // @synthesize musicPinIconView=_musicPinIconView;
@property(retain, nonatomic) UIView *podcastPinIconView; // @synthesize podcastPinIconView=_podcastPinIconView;
@property(retain, nonatomic) UIView *tvPinIconView; // @synthesize tvPinIconView=_tvPinIconView;
@property(retain, nonatomic) UIView *musicLinkBalloonView; // @synthesize musicLinkBalloonView=_musicLinkBalloonView;
@property(retain, nonatomic) UIView *podcastLinkBalloonView; // @synthesize podcastLinkBalloonView=_podcastLinkBalloonView;
@property(retain, nonatomic) UIView *tvLinkBalloonView; // @synthesize tvLinkBalloonView=_tvLinkBalloonView;
@property(retain, nonatomic) UIView *combinedHighlightsView; // @synthesize combinedHighlightsView=_combinedHighlightsView;
@property(retain, nonatomic) UILabel *micropillView2; // @synthesize micropillView2=_micropillView2;
@property(retain, nonatomic) UIView *highlightsView2; // @synthesize highlightsView2=_highlightsView2;
@property(retain, nonatomic) UILabel *micropillView1; // @synthesize micropillView1=_micropillView1;
@property(retain, nonatomic) UIView *highlightsView1; // @synthesize highlightsView1=_highlightsView1;
@property(retain, nonatomic) NSMutableArray *constraints; // @synthesize constraints=_constraints;
@property(nonatomic) unsigned long long onboardingPage; // @synthesize onboardingPage=_onboardingPage;
@property(retain, nonatomic) CKSyndicationSharedWithYouViewController *sharedWithYouViewController; // @synthesize sharedWithYouViewController=_sharedWithYouViewController;
- (void)traitCollectionDidChange:(id)arg1;
- (id)getPinIcon;
- (void)setUpHighlightsContent;
- (void)setUpPhotosContent;
- (id)_setUpPhotosMicropillForAvatarImage:(id)arg1 forName:(id)arg2;
- (void)setUpSharedWithYouContentCollectionView;
- (void)updateViewConstraints;
- (void)updateMaxContentSize;
- (void)viewWillTransitionToSize:(struct CGSize)arg1 withTransitionCoordinator:(id)arg2;
- (void)viewDidLayoutSubviews;
- (void)loadView;
- (id)initWithIndex:(unsigned long long)arg1;

@end
