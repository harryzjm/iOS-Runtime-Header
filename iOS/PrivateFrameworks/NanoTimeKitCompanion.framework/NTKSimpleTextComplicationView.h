//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <UIKit/UIView.h>

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTemplateComplicationDisplay-Protocol.h>

@class CLKComplicationTemplate, CLKDevice, CLKFont, NSString, NTKColoringLabel;
@protocol NTKComplicationDisplayObserver;

@interface NTKSimpleTextComplicationView : UIView <NTKComplicationDisplay, NTKTemplateComplicationDisplay>
{
    _Bool canUseCurvedText;
    id <NTKComplicationDisplayObserver> displayObserver;
    CLKFont *_font;
    NTKColoringLabel *_label;
    CLKDevice *_device;
    CLKComplicationTemplate *_template;
}

+ (_Bool)supportsComplicationFamily:(long long)arg1;
+ (_Bool)handlesComplicationTemplate:(id)arg1;
@property(retain, nonatomic) CLKComplicationTemplate *template; // @synthesize template=_template;
@property(retain, nonatomic) CLKDevice *device; // @synthesize device=_device;
@property(retain, nonatomic) NTKColoringLabel *label; // @synthesize label=_label;
@property(retain, nonatomic) CLKFont *font; // @synthesize font=_font;
@property(nonatomic) _Bool canUseCurvedText; // @synthesize canUseCurvedText;
@property(nonatomic) __weak id <NTKComplicationDisplayObserver> displayObserver; // @synthesize displayObserver;
- (void).cxx_destruct;
- (void)setTimeTravelDate:(id)arg1 animated:(_Bool)arg2;
- (id)complicationTemplate;
- (void)setComplicationTemplate:(id)arg1 reason:(long long)arg2;
- (void)sizeToFit;
- (struct CGSize)sizeThatFits:(struct CGSize)arg1;
- (void)layoutSubviews;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(nonatomic, getter=isHighlighted) _Bool highlighted;
@property(nonatomic) _Bool shouldUseTemplateColors;
@property(readonly) Class superclass;

@end
