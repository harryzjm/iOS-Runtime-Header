//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSLayoutConstraint, UILabel, UIView, _UIGrabber;
@protocol PXFloatingCardViewControllerDelegate;

@interface PXFloatingCardViewController : UIViewController
{
    UIView *_backgroundView;
    UIView *_contentView;
    UIView *_grabberFooterView;
    id <PXFloatingCardViewControllerDelegate> _delegate;
    UIView *__headerView;
    UILabel *__headerLabel;
    _UIGrabber *__grabber;
    UIViewController *__contentViewController;
    NSLayoutConstraint *__heightConstraint;
    struct CGSize _size;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSLayoutConstraint *_heightConstraint; // @synthesize _heightConstraint=__heightConstraint;
@property(nonatomic) __weak UIViewController *_contentViewController; // @synthesize _contentViewController=__contentViewController;
@property(retain, nonatomic) _UIGrabber *_grabber; // @synthesize _grabber=__grabber;
@property(retain, nonatomic) UILabel *_headerLabel; // @synthesize _headerLabel=__headerLabel;
@property(retain, nonatomic) UIView *_headerView; // @synthesize _headerView=__headerView;
@property(nonatomic) __weak id <PXFloatingCardViewControllerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) struct CGSize size; // @synthesize size=_size;
@property(readonly, nonatomic) UIView *grabberFooterView; // @synthesize grabberFooterView=_grabberFooterView;
@property(readonly, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) UIView *backgroundView; // @synthesize backgroundView=_backgroundView;
- (void)contentSizeCategoryDidChangeNotification:(id)arg1;
- (_Bool)_canShowWhileLocked;
@property(readonly, nonatomic) struct CGRect grabAreaBounds;
- (id)initWithCoder:(id)arg1;
- (id)initWithNibName:(id)arg1 bundle:(id)arg2;
- (void)_dismissTapped;
- (id)_systemFontWithTextStyle:(long long)arg1 weight:(double)arg2;
- (id)initWithContentViewController:(id)arg1;

@end
