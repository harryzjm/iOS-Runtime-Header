//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <WorkflowUIServices/WFWidgetConfigurationCardHeaderViewDelegate-Protocol.h>

@class MTStylingProvidingSolidColorView, MTVisualStylingProvider, NSString, UILayoutGuide, WFWidgetConfigurationCardHeaderView;
@protocol WFWidgetConfigurationCardViewDelegate;

@interface WFWidgetConfigurationCardView : UIView <WFWidgetConfigurationCardHeaderViewDelegate>
{
    WFWidgetConfigurationCardHeaderView *_headerView;
    UIView *_contentView;
    id <WFWidgetConfigurationCardViewDelegate> _delegate;
    MTVisualStylingProvider *_strokeProvider;
    MTVisualStylingProvider *_fillProvider;
    MTStylingProvidingSolidColorView *_backgroundView;
    UILayoutGuide *_contentViewGuide;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UILayoutGuide *contentViewGuide; // @synthesize contentViewGuide=_contentViewGuide;
@property(readonly, nonatomic) MTStylingProvidingSolidColorView *backgroundView; // @synthesize backgroundView=_backgroundView;
@property(readonly, nonatomic) MTVisualStylingProvider *fillProvider; // @synthesize fillProvider=_fillProvider;
@property(readonly, nonatomic) MTVisualStylingProvider *strokeProvider; // @synthesize strokeProvider=_strokeProvider;
@property(nonatomic) __weak id <WFWidgetConfigurationCardViewDelegate> delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) UIView *contentView; // @synthesize contentView=_contentView;
@property(readonly, nonatomic) WFWidgetConfigurationCardHeaderView *headerView; // @synthesize headerView=_headerView;
- (void)widgetConfigurationCardHeaderViewDidRequestToClose:(id)arg1;
- (void)setContentView:(id)arg1 stretchToFit:(_Bool)arg2;
- (void)setBackgroundColor:(id)arg1;
- (id)initWithRequest:(id)arg1 contentView:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
