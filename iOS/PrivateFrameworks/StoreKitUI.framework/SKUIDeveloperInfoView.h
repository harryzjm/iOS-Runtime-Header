//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class NSMutableArray, SKUIClientContext, SKUIDeveloperInfo, SKUIProductInformationView;

@interface SKUIDeveloperInfoView : UIView
{
    SKUIClientContext *_clientContext;
    SKUIDeveloperInfo *_developerInfo;
    UIView *_infoSeparatorView;
    SKUIProductInformationView *_infoView;
    NSMutableArray *_lineViews;
}

@property(readonly, nonatomic) SKUIDeveloperInfo *developerInfo; // @synthesize developerInfo=_developerInfo;
@property(readonly, nonatomic) SKUIClientContext *clientContext; // @synthesize clientContext=_clientContext;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setBackgroundColor:(id)arg1;
- (void)layoutSubviews;
- (id)initWithDeveloperInfo:(id)arg1 clientContext:(id)arg2;

@end
