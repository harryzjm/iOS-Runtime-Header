//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider, CLKGaugeProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicCornerSegmentedGaugeImage
{
    CLKGaugeProvider *_gaugeProvider;
    CLKTextProvider *_leadingTextProvider;
    CLKFullColorImageProvider *_imageProvider;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CLKFullColorImageProvider *imageProvider; // @synthesize imageProvider=_imageProvider;
@property(copy, nonatomic) CLKTextProvider *leadingTextProvider; // @synthesize leadingTextProvider=_leadingTextProvider;
@property(copy, nonatomic) CLKGaugeProvider *gaugeProvider; // @synthesize gaugeProvider=_gaugeProvider;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateGaugeProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (id)initWithImageProvider:(id)arg1 gaugeProvider:(id)arg2 textProvider:(id)arg3;
- (long long)compatibleFamily;

@end
