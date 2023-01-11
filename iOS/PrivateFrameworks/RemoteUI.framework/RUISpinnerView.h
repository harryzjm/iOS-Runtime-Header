//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class RUIFooterElement, RUIHeaderElement, RUIHeaderView, RUIObjectModel, RemoteUISectionFooter, UIActivityIndicatorView, UIColor, UILabel, UIView;

@interface RUISpinnerView
{
    UIView *_view;
    UIActivityIndicatorView *_spinner;
    UILabel *_label;
    RUIHeaderView *_headerView;
    RemoteUISectionFooter *_footerView;
    RUIObjectModel *_objectModel;
    UIColor *_spinnerColor;
    RUIHeaderElement *_header;
    RUIFooterElement *_footer;
}

@property(retain, nonatomic) RUIFooterElement *footer; // @synthesize footer=_footer;
@property(retain, nonatomic) RUIHeaderElement *header; // @synthesize header=_header;
@property(retain, nonatomic) UIColor *spinnerColor; // @synthesize spinnerColor=_spinnerColor;
@property(nonatomic) __weak RUIObjectModel *objectModel; // @synthesize objectModel=_objectModel;
- (void).cxx_destruct;
- (void)viewDidLayout;
- (void)viewWillDisappear:(_Bool)arg1;
- (void)viewWillAppear:(_Bool)arg1;
- (id)spinnerView;

@end

