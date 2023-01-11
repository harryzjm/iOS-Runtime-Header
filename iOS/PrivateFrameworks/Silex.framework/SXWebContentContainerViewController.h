//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class SXWebContentViewController;
@protocol SXWebContentConfigurationManager, SXWebContentErrorProvider, SXWebContentInteractionProvider, SXWebContentPresentationManager;

@interface SXWebContentContainerViewController : UIViewController
{
    id <SXWebContentInteractionProvider> _interactionProvider;
    id <SXWebContentErrorProvider> _errorProvider;
    id <SXWebContentConfigurationManager> _configurationManager;
    id <SXWebContentPresentationManager> _presentationManager;
    SXWebContentViewController *_webContentViewController;
}

@property(readonly, nonatomic) SXWebContentViewController *webContentViewController; // @synthesize webContentViewController=_webContentViewController;
@property(readonly, nonatomic) id <SXWebContentPresentationManager> presentationManager; // @synthesize presentationManager=_presentationManager;
@property(readonly, nonatomic) id <SXWebContentConfigurationManager> configurationManager; // @synthesize configurationManager=_configurationManager;
@property(readonly, nonatomic) id <SXWebContentErrorProvider> errorProvider; // @synthesize errorProvider=_errorProvider;
@property(readonly, nonatomic) id <SXWebContentInteractionProvider> interactionProvider; // @synthesize interactionProvider=_interactionProvider;
- (void).cxx_destruct;
- (_Bool)allowUserInteractionForInteractionType:(unsigned long long)arg1;
- (void)loadHTMLString:(id)arg1 baseURL:(id)arg2;
- (void)loadURL:(id)arg1;
- (void)viewDidLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithWebContentViewController:(id)arg1 interactionProvider:(id)arg2 errorProvider:(id)arg3 configurationManager:(id)arg4 presentationManager:(id)arg5;

@end
