//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKitCore/UIViewController.h>

@class NSArray, PUCropAspect, PUCropToolControllerSpec, UIScrollView, UIView;
@protocol PUCropAspectViewControllerDelegate;

__attribute__((visibility("hidden")))
@interface PUCropAspectViewController : UIViewController
{
    PUCropAspect *_currentCropAspect;
    id <PUCropAspectViewControllerDelegate> _delegate;
    long long _aspectOrientation;
    long long _layoutOrientation;
    UIView *_scrollExtraLeftView;
    UIView *_scrollViewContainer;
    UIView *_buttonContainer;
    UIScrollView *_scrollView;
    NSArray *_aspectButtons;
    NSArray *_allAspectRatios;
    PUCropToolControllerSpec *_spec;
    NSArray *_aspectConstraints;
    struct CGSize _currentCropSize;
    struct CGSize _originalSize;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *aspectConstraints; // @synthesize aspectConstraints=_aspectConstraints;
@property(retain, nonatomic) PUCropToolControllerSpec *spec; // @synthesize spec=_spec;
@property(nonatomic) struct CGSize originalSize; // @synthesize originalSize=_originalSize;
@property(retain, nonatomic) NSArray *allAspectRatios; // @synthesize allAspectRatios=_allAspectRatios;
@property(retain, nonatomic) NSArray *aspectButtons; // @synthesize aspectButtons=_aspectButtons;
@property(retain, nonatomic) UIScrollView *scrollView; // @synthesize scrollView=_scrollView;
@property(retain, nonatomic) UIView *buttonContainer; // @synthesize buttonContainer=_buttonContainer;
@property(retain, nonatomic) UIView *scrollViewContainer; // @synthesize scrollViewContainer=_scrollViewContainer;
@property(retain, nonatomic) UIView *scrollExtraLeftView; // @synthesize scrollExtraLeftView=_scrollExtraLeftView;
@property(nonatomic) long long layoutOrientation; // @synthesize layoutOrientation=_layoutOrientation;
@property(nonatomic) long long aspectOrientation; // @synthesize aspectOrientation=_aspectOrientation;
@property(nonatomic) __weak id <PUCropAspectViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) PUCropAspect *currentCropAspect; // @synthesize currentCropAspect=_currentCropAspect;
@property(nonatomic) struct CGSize currentCropSize; // @synthesize currentCropSize=_currentCropSize;
- (void)traitCollectionDidChange:(id)arg1;
- (void)aspectButtonPressed:(id)arg1;
- (void)updateAspectConstraints;
- (void)updateAspectButtons;
- (id)matchingCropAspectTo:(id)arg1;
- (void)updateAspectButtonSelection;
- (void)viewDidLoad;
- (id)initWithLayoutOrientation:(long long)arg1 originalSize:(struct CGSize)arg2 currentSize:(struct CGSize)arg3 currentCropAspect:(id)arg4 spec:(id)arg5;

@end

