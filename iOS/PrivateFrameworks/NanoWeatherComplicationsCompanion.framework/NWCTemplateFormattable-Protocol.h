//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoWeatherComplicationsCompanion/NSObject-Protocol.h>

@class CLKComplicationTemplate, CLKDevice;
@protocol NWCTemplateFormattable;

@protocol NWCTemplateFormattable <NSObject>
+ (id <NWCTemplateFormattable>)sharedFormatter;
- (CLKComplicationTemplate *)switcherTemplateWithFamily:(long long)arg1;
- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(CLKDevice *)arg2;
@end
