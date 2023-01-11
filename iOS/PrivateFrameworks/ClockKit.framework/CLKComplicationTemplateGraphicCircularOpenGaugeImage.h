//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCircularOpenGaugeImage
{
    CLKGaugeProvider *_gaugeProvider;
    CLKFullColorImageProvider *_bottomImageProvider;
    CLKTextProvider *_centerTextProvider;
}

@property(copy, nonatomic) CLKTextProvider *centerTextProvider; // @synthesize centerTextProvider=_centerTextProvider;
@property(copy, nonatomic) CLKFullColorImageProvider *bottomImageProvider; // @synthesize bottomImageProvider=_bottomImageProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;

@end
