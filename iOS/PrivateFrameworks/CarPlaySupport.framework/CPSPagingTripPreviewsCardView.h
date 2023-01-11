//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CarPlaySupport/CPSAlternateRouteSelecting-Protocol.h>
#import <CarPlaySupport/CPSPageControlling-Protocol.h>

@class CPSHairlineBorderedView, CPSPagingControlView, CPSRouteOverviewView, NSLayoutConstraint, NSMutableDictionary, NSString, UIButton;

@interface CPSPagingTripPreviewsCardView <CPSAlternateRouteSelecting, CPSPageControlling>
{
    _Bool _showMoreRoutes;
    NSMutableDictionary *_estimatesForTripIdentifiers;
    CPSPagingControlView *_pageControl;
    CPSRouteOverviewView *_overviewView;
    CPSHairlineBorderedView *_borderedAlternatesView;
    CPSHairlineBorderedView *_borderedGoButton;
    CPSHairlineBorderedView *_borderedMoreRoutesButton;
    UIButton *_moreRoutesButton;
    NSLayoutConstraint *_contentTopConstraint;
    NSLayoutConstraint *_contentBottomConstraint;
    NSLayoutConstraint *_alternateRoutesHeightConstraint;
    NSLayoutConstraint *_toggleRoutesButtonHeightConstraint;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *toggleRoutesButtonHeightConstraint; // @synthesize toggleRoutesButtonHeightConstraint=_toggleRoutesButtonHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *alternateRoutesHeightConstraint; // @synthesize alternateRoutesHeightConstraint=_alternateRoutesHeightConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentBottomConstraint; // @synthesize contentBottomConstraint=_contentBottomConstraint;
@property(retain, nonatomic) NSLayoutConstraint *contentTopConstraint; // @synthesize contentTopConstraint=_contentTopConstraint;
@property(nonatomic) _Bool showMoreRoutes; // @synthesize showMoreRoutes=_showMoreRoutes;
@property(readonly, nonatomic) UIButton *moreRoutesButton; // @synthesize moreRoutesButton=_moreRoutesButton;
@property(readonly, nonatomic) CPSHairlineBorderedView *borderedMoreRoutesButton; // @synthesize borderedMoreRoutesButton=_borderedMoreRoutesButton;
@property(readonly, nonatomic) CPSHairlineBorderedView *borderedGoButton; // @synthesize borderedGoButton=_borderedGoButton;
@property(readonly, nonatomic) CPSHairlineBorderedView *borderedAlternatesView; // @synthesize borderedAlternatesView=_borderedAlternatesView;
@property(readonly, nonatomic) CPSRouteOverviewView *overviewView; // @synthesize overviewView=_overviewView;
@property(readonly, nonatomic) CPSPagingControlView *pageControl; // @synthesize pageControl=_pageControl;
@property(readonly, nonatomic) NSMutableDictionary *estimatesForTripIdentifiers; // @synthesize estimatesForTripIdentifiers=_estimatesForTripIdentifiers;
- (_Bool)shouldUpdateFocusInContext:(id)arg1;
- (id)_linearFocusItems;
- (id)preferredFocusEnvironments;
- (void)pagingControlView:(id)arg1 didSelectPageIndex:(unsigned long long)arg2;
- (void)alternateRoutesView:(id)arg1 didSelectRouteChoice:(id)arg2;
- (void)updateEstimates:(id)arg1 forTripIdentifier:(id)arg2;
- (void)setSelectedRouteChoice:(id)arg1;
- (void)_toggleMoreRoutesButtonPressed:(id)arg1;
- (void)_setOverviewCollapsed:(_Bool)arg1;
- (void)setSelectedTrip:(id)arg1;
- (void)_updateButtonColors;
- (id)initWithTripDelegate:(id)arg1 trips:(id)arg2 textConfiguration:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
