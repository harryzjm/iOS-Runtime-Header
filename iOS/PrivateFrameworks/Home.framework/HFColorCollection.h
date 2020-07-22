//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Home/NAIdentifiable-Protocol.h>

@class HFRGBColor, HFTemperatureColor, NSString;
@protocol HFColorPrimitive;

@interface HFColorCollection : NSObject <NAIdentifiable>
{
    HFRGBColor *_RGBColor;
    HFTemperatureColor *_temperatureColor;
}

+ (id)na_identity;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
- (_Bool)isEqual:(id)arg1;
- (id)colorByAdjustingForProfile:(id)arg1;
- (id)initWithPrimitiveColors:(id)arg1;
- (id)initWithPrimitiveColor:(id)arg1;
@property(readonly, copy, nonatomic) id <HFColorPrimitive> preferredColorPrimitive;
- (id)colorPrimitives;
@property(readonly, copy, nonatomic) HFTemperatureColor *temperatureColor; // @synthesize temperatureColor=_temperatureColor;
@property(readonly, copy, nonatomic) HFRGBColor *RGBColor; // @synthesize RGBColor=_RGBColor;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

