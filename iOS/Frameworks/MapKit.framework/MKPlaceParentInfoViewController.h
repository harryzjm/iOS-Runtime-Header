//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <MapKit/MKModuleViewControllerProtocol-Protocol.h>
#import <MapKit/MKStackingViewControllerFixedHeightAware-Protocol.h>
#import <MapKit/_MKInfoCardChildViewControllerAnalyticsDelegate-Protocol.h>

@class MKMapItem, MKPlaceSectionRowView, NSLayoutConstraint, NSString, UIButton, UILabel, UIStackView;
@protocol MKPlaceParentInfoViewControllerDelegate, _MKInfoCardAnalyticsDelegate;

__attribute__((visibility("hidden")))
@interface MKPlaceParentInfoViewController <MKModuleViewControllerProtocol, _MKInfoCardChildViewControllerAnalyticsDelegate, MKStackingViewControllerFixedHeightAware>
{
    MKPlaceSectionRowView *_sectionRow;
    UILabel *_titleLabel;
    UIButton *_nameButton;
    UIStackView *_stackView;
    _Bool _resizableViewsDisabled;
    id <MKPlaceParentInfoViewControllerDelegate> _delegate;
    id <_MKInfoCardAnalyticsDelegate> _analyticsDelegate;
    NSLayoutConstraint *_topToBaselineConstraint;
    NSLayoutConstraint *_baselineToBottomConstraint;
    MKMapItem *_childMapItem;
    MKMapItem *_parentMapItem;
}

+ (id)parentInfoWithPlaceItem:(id)arg1;
- (void).cxx_destruct;
@property(retain, nonatomic) MKMapItem *parentMapItem; // @synthesize parentMapItem=_parentMapItem;
@property(retain, nonatomic) MKMapItem *childMapItem; // @synthesize childMapItem=_childMapItem;
@property(retain, nonatomic) NSLayoutConstraint *baselineToBottomConstraint; // @synthesize baselineToBottomConstraint=_baselineToBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *topToBaselineConstraint; // @synthesize topToBaselineConstraint=_topToBaselineConstraint;
@property(nonatomic) __weak id <_MKInfoCardAnalyticsDelegate> analyticsDelegate; // @synthesize analyticsDelegate=_analyticsDelegate;
@property(nonatomic) __weak id <MKPlaceParentInfoViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) _Bool resizableViewsDisabled; // @synthesize resizableViewsDisabled=_resizableViewsDisabled;
- (id)infoCardChildUnactionableUIElements;
- (id)infoCardChildPossibleActions;
- (void)_updateFont;
- (void)_contentSizeDidChange;
- (void)infoCardThemeChanged;
- (void)_buttonTapped:(id)arg1;
- (void)fetchParentItem;
- (id)parentIdentifiers;
- (void)updateLabelsColor;
- (id)venueTitleForMapItem:(id)arg1;
- (void)setupData;
- (void)showData;
- (id)font;
- (void)viewDidLoad;
- (id)initWithChild:(id)arg1;
- (_Bool)_canShowWhileLocked;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
