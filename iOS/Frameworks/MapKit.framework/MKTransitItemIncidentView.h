//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <MapKit/MKTransitItemIncidentView-Protocol.h>

@class MKTransitIncidentItemCellBackgroundView, NSArray, NSLayoutConstraint, NSString, UIImageView, _MKUILabel;

@interface MKTransitItemIncidentView : UIView <MKTransitItemIncidentView>
{
    UIImageView *_incidentIconImageView;
    _Bool _needsConstraintsRebuild;
    NSArray *_constraints;
    _MKUILabel *_titleLabel;
    _MKUILabel *_lastUpdatedLabel;
    MKTransitIncidentItemCellBackgroundView *_backgroundView;
    _Bool _incidentIsBlocking;
    _Bool _useCondensedWidthLayout;
    NSLayoutConstraint *_titleLabelToTopConstraint;
    NSLayoutConstraint *_bottomToLabelConstraint;
    NSLayoutConstraint *_lastUpdatedToTitleBaselineConstraint;
    NSLayoutConstraint *_titleToLastUpdatedLabelConstraint;
    NSLayoutConstraint *_bottomToBackgroundConstraint;
    double _bottomToBackgroundOffset;
    _Bool _padBottom;
    struct UIEdgeInsets _contentInsets;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool padBottom; // @synthesize padBottom=_padBottom;
@property(nonatomic) struct UIEdgeInsets contentInsets; // @synthesize contentInsets=_contentInsets;
- (void)rebuildConstraints;
- (void)updateConstraints;
- (void)didMoveToWindow;
- (void)_updateConstraintValues;
- (void)_contentSizeCategoryDidChange;
- (void)dealloc;
- (id)_nonBlockingImage;
- (id)_blockingImage;
@property(nonatomic) long long position;
- (void)_updateBottomConstraintWithOffset:(double)arg1;
- (void)infoCardThemeChanged;
- (void)_configureWithMessage:(id)arg1 referenceDate:(id)arg2 lastUpdated:(id)arg3 incidentIsBlocking:(_Bool)arg4 shouldShowImage:(_Bool)arg5 inSiri:(_Bool)arg6;
- (void)configureWithIncidentMessage:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (void)configureWithMessage:(id)arg1 incident:(id)arg2 referenceDate:(id)arg3 shouldShowImage:(_Bool)arg4 inSiri:(_Bool)arg5;
- (void)configureWithIncident:(id)arg1 referenceDate:(id)arg2 shouldShowImage:(_Bool)arg3 inSiri:(_Bool)arg4;
- (void)configureViews;
- (id)initWithFrame:(struct CGRect)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
