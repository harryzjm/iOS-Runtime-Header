//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKDateComplicationDisplay-Protocol.h>

@class NSString, UIImageView;
@protocol NTKComplicationDisplayObserver;

@interface NTKZeusDateComplicationView <NTKDateComplicationDisplay>
{
    UIImageView *_imageView;
    int _currentDayNumber;
}

- (void).cxx_destruct;
- (struct CGRect)contentFrame;
- (void)layoutSubviews;
- (void)_updateImage;
- (void)setStyle:(unsigned long long)arg1;
- (id)init;
- (unsigned long long)desiredDateComplicationDateStyle;
- (void)setDateComplicationText:(id)arg1 forDateStyle:(unsigned long long)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
