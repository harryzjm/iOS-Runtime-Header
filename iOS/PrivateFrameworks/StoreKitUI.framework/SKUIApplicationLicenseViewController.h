//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSURL, SKUIApplicationLicensePage, SSVLoadURLOperation, UIWebView;

@interface SKUIApplicationLicenseViewController
{
    SKUIApplicationLicensePage *_licensePage;
    SSVLoadURLOperation *_loadOperation;
    NSURL *_url;
    UIWebView *_webView;
}

- (void).cxx_destruct;
- (void)_displayPage:(id)arg1 error:(id)arg2;
- (void)viewWillAppear:(_Bool)arg1;
- (void)loadView;
- (void)reloadData;
- (id)initWithLicenseAgreementURL:(id)arg1;
- (id)initWithLicenseAgreementPage:(id)arg1;

@end

