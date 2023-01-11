//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

@class UIImageView;

@interface PKPaymentRemoteInstrumentThumbnailView : UIView
{
    UIImageView *_placeholderImageView;
    UIImageView *_cardImageView;
}

- (void).cxx_destruct;
@property(retain, nonatomic) UIImageView *cardImageView; // @synthesize cardImageView=_cardImageView;
@property(retain, nonatomic) UIImageView *placeholderImageView; // @synthesize placeholderImageView=_placeholderImageView;
- (void)_updateCardImage:(struct CGImage *)arg1;
- (void)_prepareConstraints;
- (id)initWithRemotePaymentInstrument:(id)arg1;

@end
