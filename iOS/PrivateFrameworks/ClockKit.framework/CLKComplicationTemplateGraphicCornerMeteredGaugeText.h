//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerMeteredGaugeText
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKTextProvider *_trailingTextProvider;
    CLKTextProvider *_outerTextProvider;
    CLKFullColorImageProvider *_outerImageProvider;
}

@property(copy, nonatomic) CLKFullColorImageProvider *outerImageProvider; // @synthesize outerImageProvider=_outerImageProvider;
@property(copy, nonatomic) CLKTextProvider *outerTextProvider; // @synthesize outerTextProvider=_outerTextProvider;
@property(copy, nonatomic) CLKTextProvider *trailingTextProvider; // @synthesize trailingTextProvider=_trailingTextProvider;
@property(copy, nonatomic) CLKTextProvider *leadingTextProvider; // @synthesize leadingTextProvider=_leadingTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end
