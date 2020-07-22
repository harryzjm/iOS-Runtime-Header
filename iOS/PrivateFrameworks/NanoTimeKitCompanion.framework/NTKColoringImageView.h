//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIImageView.h>

#import <NanoTimeKitCompanion/NTKColoringView-Protocol.h>

@class CLKImageProvider, NSString, UIColor;

@interface NTKColoringImageView : UIImageView <NTKColoringView>
{
    UIColor *_overrideColor;
    CLKImageProvider *_imageProvider;
    struct CGSize _maxSize;
}

@property(retain, nonatomic) CLKImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(nonatomic) struct CGSize maxSize; // @synthesize maxSize=_maxSize;
@property(retain, nonatomic) UIColor *overrideColor; // @synthesize overrideColor=_overrideColor;
- (void).cxx_destruct;
@property(nonatomic) _Bool usesLegibility; // @dynamic usesLegibility;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)setImage:(id)arg1;
@property(retain, nonatomic) UIColor *color; // @dynamic color;
- (id)initWithImage:(id)arg1 highlightedImage:(id)arg2;
- (id)initWithImage:(id)arg1;
- (id)initWithFrame:(struct CGRect)arg1;
- (void)_commonInit;

// Remaining properties
@property(readonly, nonatomic) UIColor *contentColor; // @dynamic contentColor;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
