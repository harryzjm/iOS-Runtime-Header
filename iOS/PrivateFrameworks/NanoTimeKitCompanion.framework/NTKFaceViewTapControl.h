//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIControl.h>

#import <NanoTimeKitCompanion/NTKControl-Protocol.h>

@class NSString, UIImageView;

@interface NTKFaceViewTapControl : UIControl <NTKControl>
{
    UIImageView *_highlightImageView;
}

@property(retain, nonatomic) UIImageView *highlightImageView; // @synthesize highlightImageView=_highlightImageView;
- (void).cxx_destruct;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setHighlighted:(_Bool)arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect)arg1;
- (_Bool)shouldCancelTouchesInScrollview;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

