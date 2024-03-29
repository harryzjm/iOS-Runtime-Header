//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <TSCharts/NSObject-Protocol.h>
#import <TSCharts/TSDMixing-Protocol.h>

@class TSSPropertySet;

@protocol TSCHStyleActAlike <NSObject, TSDMixing>
- (id)boxedDefaultValueForProperty:(int)arg1;
- (float)defaultFloatValueForProperty:(int)arg1;
- (int)defaultIntValueForProperty:(int)arg1;
- (id)defaultValueForProperty:(int)arg1;
- (TSSPropertySet *)properties;
- (id)boxedValueForProperty:(int)arg1;
- (float)floatValueForProperty:(int)arg1;
- (int)intValueForProperty:(int)arg1;
- (id)valueForProperty:(int)arg1;
- (_Bool)overridesProperty:(int)arg1;
- (_Bool)definesProperty:(int)arg1;
@end

