//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKCredentialPairingExplanationHeaderView : UIView
{
    UIImageView *_imageView;
    _Bool _useCompactLayout;
}

- (void).cxx_destruct;
@property(nonatomic) _Bool useCompactLayout; // @synthesize useCompactLayout=_useCompactLayout;
- (void)traitCollectionDidChange:(id)arg1;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)pairingImage;
- (id)init;

@end
