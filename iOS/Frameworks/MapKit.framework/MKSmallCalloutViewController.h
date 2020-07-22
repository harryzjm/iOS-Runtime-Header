//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

#import <MapKit/CalloutViewControllerProtocol-Protocol.h>

@class MKCalloutBackgroundView, MKSmallCalloutView, NSString, UIView;
@protocol MKSmallCalloutViewControllerDelegate;

@interface MKSmallCalloutViewController : UIViewController <CalloutViewControllerProtocol>
{
    MKSmallCalloutView *_smallCalloutView;
    id <MKSmallCalloutViewControllerDelegate> _delegate;
}

+ (struct CGSize)defaultSize;
@property(nonatomic) __weak id <MKSmallCalloutViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)viewDidLoad;
@property(nonatomic, getter=isButtonEnabled) _Bool buttonEnabled;
@property(nonatomic) CDStruct_80aa614a mapDisplayStyle;
@property(retain, nonatomic) MKCalloutBackgroundView *calloutBackgroundView;
- (_Bool)canDisplayCompleteTitleWhenExpanded;
- (void)setDetailView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *detailView;
- (void)setRightView:(id)arg1 animated:(_Bool)arg2;
- (void)setLeftView:(id)arg1 animated:(_Bool)arg2;
@property(retain, nonatomic) UIView *rightView;
@property(retain, nonatomic) UIView *leftView;
@property(copy, nonatomic) NSString *calloutSubtitle;
- (void)setCalloutSubtitle:(id)arg1 animated:(_Bool)arg2;
@property(copy, nonatomic) NSString *calloutTitle;
- (struct CGSize)preferredContentSize;
- (id)_smallCalloutView;
- (void)viewDidAppear:(_Bool)arg1;
- (void)beginMapsTransitionMovingSideways;
- (void)loadView;
- (void)reset;
@property(nonatomic) double maximumWidth;
@property(nonatomic) double minimumWidth;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

