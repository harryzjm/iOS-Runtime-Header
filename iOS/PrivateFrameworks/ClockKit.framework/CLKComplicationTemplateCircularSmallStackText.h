//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CLKTextProvider;

@interface CLKComplicationTemplateCircularSmallStackText
{
    CLKTextProvider *_line1TextProvider;
    CLKTextProvider *_line2TextProvider;
}

+ (id)templateWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;
- (void).cxx_destruct;
@property(copy, nonatomic) CLKTextProvider *line2TextProvider; // @synthesize line2TextProvider=_line2TextProvider;
@property(copy, nonatomic) CLKTextProvider *line1TextProvider; // @synthesize line1TextProvider=_line1TextProvider;
- (void)_enumerateTextProviderKeysWithBlock:(CDUnknownBlockType)arg1;
- (long long)compatibleFamily;
- (id)initWithLine1TextProvider:(id)arg1 line2TextProvider:(id)arg2;

@end
