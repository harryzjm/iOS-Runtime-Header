//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <NanoTimeKitCompanion/NTKComplicationDisplay-Protocol.h>
#import <NanoTimeKitCompanion/NTKTimeTravel-Protocol.h>

@class CLKComplicationTemplate;

@protocol NTKTemplateComplicationDisplay <NTKComplicationDisplay, NTKTimeTravel>
+ (_Bool)handlesComplicationTemplate:(CLKComplicationTemplate *)arg1;
- (CLKComplicationTemplate *)complicationTemplate;
- (void)setComplicationTemplate:(CLKComplicationTemplate *)arg1 reason:(long long)arg2;

@optional
+ (_Bool)supportsComplicationFamily:(long long)arg1;
- (long long)layoutOverride;
@end

