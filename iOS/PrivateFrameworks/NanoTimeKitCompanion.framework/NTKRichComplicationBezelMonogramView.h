//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKMonogramComplicationDisplay-Protocol.h>

@class NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKRichComplicationBezelMonogramView <NTKMonogramComplicationDisplay>
{
    NTKColoringLabel *_textLabel;
    NSString *_monogramText;
}

- (void).cxx_destruct;
- (id)_createLabelViewWithFont:(id)arg1;
- (id)_labelFont;
- (void)setMonogramText:(id)arg1;

// Remaining properties
@property(nonatomic) _Bool canUseCurvedText;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end

