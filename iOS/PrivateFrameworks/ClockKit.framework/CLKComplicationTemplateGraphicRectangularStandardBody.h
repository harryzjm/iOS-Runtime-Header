//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKFullColorImageProvider, CLKTextProvider;

@interface CLKComplicationTemplateGraphicRectangularStandardBody
{
    CLKFullColorImageProvider *_headerImageProvider;
    CLKTextProvider *_headerTextProvider;
    CLKTextProvider *_body1TextProvider;
    CLKTextProvider *_body2TextProvider;
}

@property(copy, nonatomic) CLKTextProvider *body2TextProvider; // @synthesize body2TextProvider=_body2TextProvider;
@property(copy, nonatomic) CLKTextProvider *body1TextProvider; // @synthesize body1TextProvider=_body1TextProvider;
@property(copy, nonatomic) CLKTextProvider *headerTextProvider; // @synthesize headerTextProvider=_headerTextProvider;
@property(copy, nonatomic) CLKFullColorImageProvider *headerImageProvider; // @synthesize headerImageProvider=_headerImageProvider;
- (void).cxx_destruct;
- (void)_enumerateFullColorImageProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

