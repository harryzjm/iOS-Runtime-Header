//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Preferences/PSViewController.h>

@class NSString, UITextView;

@interface SUSSoftwareUpdateLicenseViewController : PSViewController
{
    NSString *_licenseTextInfo;
    UITextView *_licenseTextView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UITextView *licenseTextView; // @synthesize licenseTextView=_licenseTextView;
@property(retain, nonatomic) NSString *licenseTextInfo; // @synthesize licenseTextInfo=_licenseTextInfo;
- (void)didReceiveMemoryWarning;
- (void)setLicenseText:(id)arg1;
- (void)viewWillLayoutSubviews;
- (void)viewDidLoad;
- (id)initWithLicense:(id)arg1;

@end
