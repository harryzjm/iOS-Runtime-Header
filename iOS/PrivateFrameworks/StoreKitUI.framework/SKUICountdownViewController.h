//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIViewController.h>

@class NSString, SKUIClientContext, SKUICountdownComponent, SKUIResourceLoader;

__attribute__((visibility("hidden")))
@interface SKUICountdownViewController : UIViewController
{
    SKUIResourceLoader *_artworkLoader;
    SKUICountdownComponent *_countdownComponent;
    SKUIClientContext *_clientContext;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) SKUICountdownComponent *countdownComponent; // @synthesize countdownComponent=_countdownComponent;
@property(readonly, nonatomic) SKUIResourceLoader *artworkLoader; // @synthesize artworkLoader=_artworkLoader;
@property(retain, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void)artworkRequest:(id)arg1 didLoadImage:(id)arg2;
- (void)loadView;
- (void)viewDidDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)initWithCountdownComponent:(id)arg1 artworkLoader:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

