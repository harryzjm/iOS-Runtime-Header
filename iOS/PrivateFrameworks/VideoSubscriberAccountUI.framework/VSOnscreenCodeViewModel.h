//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSItemProvider, NSString, NSURL, UIImage;
@protocol VSOnscreenCodeViewModelDelegate;

__attribute__((visibility("hidden")))
@interface VSOnscreenCodeViewModel
{
    _Bool logoFinishedLoading;
    _Bool _showButtonLockup;
    NSItemProvider *_logoProvider;
    UIImage *_logo;
    NSString *_logoAccessibilityLabel;
    id <VSOnscreenCodeViewModelDelegate> _delegate;
    UIImage *_qrCode;
    NSString *_onscreenCode;
    NSString *_webPageLabel;
    NSURL *_webPageURL;
    NSString *_buttonLockupTitle;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSString *buttonLockupTitle; // @synthesize buttonLockupTitle=_buttonLockupTitle;
@property(nonatomic) _Bool showButtonLockup; // @synthesize showButtonLockup=_showButtonLockup;
@property(copy, nonatomic) NSURL *webPageURL; // @synthesize webPageURL=_webPageURL;
@property(retain, nonatomic) NSString *webPageLabel; // @synthesize webPageLabel=_webPageLabel;
@property(copy, nonatomic) NSString *onscreenCode; // @synthesize onscreenCode=_onscreenCode;
@property(retain, nonatomic) UIImage *qrCode; // @synthesize qrCode=_qrCode;
@property(nonatomic) __weak id <VSOnscreenCodeViewModelDelegate> delegate; // @synthesize delegate=_delegate;
@property(copy, nonatomic) NSString *logoAccessibilityLabel; // @synthesize logoAccessibilityLabel=_logoAccessibilityLabel;
@property(nonatomic) _Bool logoFinishedLoading; // @synthesize logoFinishedLoading;
@property(retain, nonatomic) UIImage *logo; // @synthesize logo=_logo;
@property(retain, nonatomic) NSItemProvider *logoProvider; // @synthesize logoProvider=_logoProvider;
- (id)formattedWebsiteURL;
- (id)websiteURLWithQueryParameters;
- (void)generateQRCode;
- (void)configureWithRequest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

