//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIButton.h>

@class NSArray, NSString, UIImageView, UILabel;
@protocol SFLinkPreviewHeaderContentViewDelegate;

__attribute__((visibility("hidden")))
@interface SFLinkPreviewHeaderContentView : UIButton
{
    UILabel *_domainLabel;
    UIButton *_togglePreviewButton;
    UIImageView *_safariIcon;
    NSArray *_domainWithHidePreviewActionConstraints;
    NSArray *_safariIconWithShowPreviewActionConstraints;
    _Bool _previewEnabled;
    id <SFLinkPreviewHeaderContentViewDelegate> _delegate;
    NSString *_domain;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isPreviewEnabled) _Bool previewEnabled; // @synthesize previewEnabled=_previewEnabled;
@property(copy, nonatomic) NSString *domain; // @synthesize domain=_domain;
@property(nonatomic) __weak id <SFLinkPreviewHeaderContentViewDelegate> delegate; // @synthesize delegate=_delegate;
- (void)updateConstraints;
- (void)_updateSafariIconWithShowPreviewActionConstraints;
- (void)_updateDomainWithHidePreviewActionConstraints;
- (void)_togglePreviewButtonPressed;
- (id)initWithFrame:(struct CGRect)arg1;

@end

