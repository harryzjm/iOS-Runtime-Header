//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoWeatherComplicationsCompanion/NWCTemplateFormattable-Protocol.h>

@class NSNumberFormatter, NSString;

@interface NWCAirQualityTemplateFormatter : NSObject <NWCTemplateFormattable>
{
    NSNumberFormatter *_indexNumberFormatter;
}

+ (id)sharedFormatter;
- (void).cxx_destruct;
@property(retain, nonatomic) NSNumberFormatter *indexNumberFormatter; // @synthesize indexNumberFormatter=_indexNumberFormatter;
- (id)_localizedIndexForConditions:(id)arg1;
- (id)switcherTemplateWithFamily:(long long)arg1;
- (_Bool)acceptsComplicationFamily:(long long)arg1 forDevice:(id)arg2;
- (id)init;
- (id)utilitarianSmallTemplateForConditions:(id)arg1;
- (id)utilitarianLargeTemplateForLocation:(id)arg1 conditions:(id)arg2;
- (id)modularSmallTemplateForLocation:(id)arg1 conditions:(id)arg2;
- (id)modularLargeTemplateForLocation:(id)arg1 isLocalLocation:(_Bool)arg2 conditions:(id)arg3;
- (id)graphicCornerTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicExtraLargeTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)graphicCircularTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)_richCircularTemplateForComplicationFamily:(long long)arg1 conditions:(id)arg2 location:(id)arg3;
- (id)graphicBezelTemplateForConditions:(id)arg1 location:(id)arg2;
- (id)extraLargeTemplateForConditions:(id)arg1;
- (id)circularMediumTemplateForConditions:(id)arg1;
- (id)circularSmallTemplateForConditions:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
