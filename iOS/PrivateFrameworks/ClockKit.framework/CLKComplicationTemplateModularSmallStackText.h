//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider;

@interface CLKComplicationTemplateModularSmallStackText
{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
    unsigned long long _highlightMode;
}

@property(nonatomic) unsigned long long highlightMode; // @synthesize highlightMode=_highlightMode;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKTextProvider *line1TextProvider; // @synthesize line1TextProvider=_line1TextProvider;
- (void).cxx_destruct;
- (id)JSONObjectRepresentationWritingResourcesToBundlePath:(id)arg1;
- (id)_initWithJSONObjectRepresentation:(id)arg1 bundle:(id)arg2;
@property(nonatomic) _Bool highlightLine2;
- (void)_enumerateIntegerKeysWithBlock:(CDUnknownBlockType)arg1;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (_Bool)isCompatibleWithFamily:(long long)arg1;

@end

