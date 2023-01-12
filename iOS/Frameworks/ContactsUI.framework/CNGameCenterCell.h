//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, UILabel, UIView, UIViewController;
@protocol CNPresenterDelegate;

__attribute__((visibility("hidden")))
@interface CNGameCenterCell
{
    _Bool _showsGameCenterLabel;
    UILabel *_gameCenterLabel;
    UIView *_playerViewContainer;
    UIView *_playerView;
    NSString *_playerID;
    UIViewController *_profileViewController;
    id <CNPresenterDelegate> _presentingDelegate;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <CNPresenterDelegate> presentingDelegate; // @synthesize presentingDelegate=_presentingDelegate;
@property(retain, nonatomic) UIViewController *profileViewController; // @synthesize profileViewController=_profileViewController;
@property(retain, nonatomic) NSString *playerID; // @synthesize playerID=_playerID;
@property(retain, nonatomic) UIView *playerView; // @synthesize playerView=_playerView;
@property(retain, nonatomic) UIView *playerViewContainer; // @synthesize playerViewContainer=_playerViewContainer;
@property(readonly, nonatomic) UILabel *gameCenterLabel; // @synthesize gameCenterLabel=_gameCenterLabel;
@property(nonatomic) _Bool showsGameCenterLabel; // @synthesize showsGameCenterLabel=_showsGameCenterLabel;
- (void)dismissProfileViewController;
- (void)presentPlayerProfile;
- (void)performDefaultAction;
- (id)variableConstraintsForHorizontalLayout;
- (id)constantConstraintsForHorizontalLayout;
- (id)constantConstraintsForVerticalLayout;
- (id)variableConstraints;
- (id)labelView;
- (void)setLabelTextAttributes:(id)arg1;
- (void)setupViews;
- (void)updateViewsWithCardGroupItem:(id)arg1;
- (void)setCardGroupItem:(id)arg1;
- (id)initWithStyle:(long long)arg1 reuseIdentifier:(id)arg2;

@end

