//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <CarPlaySupport/CPSCardPlatterProviding-Protocol.h>

@class CPSCardPlatterView, NSString, UIActivityIndicatorView, UILabel;

@interface CPSPausedCardView : UIView <CPSCardPlatterProviding>
{
    CPSCardPlatterView *_cardPlatterView;
    UILabel *_title;
    UIActivityIndicatorView *_spinner;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) UIActivityIndicatorView *spinner; // @synthesize spinner=_spinner;
@property(readonly, nonatomic) UILabel *title; // @synthesize title=_title;
@property(retain, nonatomic) CPSCardPlatterView *cardPlatterView; // @synthesize cardPlatterView=_cardPlatterView;
- (struct CGSize)intrinsicContentSize;
- (id)initWithReason:(unsigned long long)arg1 title:(id)arg2 backgroundColor:(id)arg3;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
