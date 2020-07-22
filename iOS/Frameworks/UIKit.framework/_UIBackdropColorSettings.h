//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class UIColor, _UIBackdropViewSettings;

@interface _UIBackdropColorSettings : NSObject
{
    _Bool _hasObservedValues;
    _UIBackdropViewSettings *_parentSettings;
}

@property(nonatomic) _Bool hasObservedValues; // @synthesize hasObservedValues=_hasObservedValues;
@property(nonatomic) _UIBackdropViewSettings *parentSettings; // @synthesize parentSettings=_parentSettings;
@property(readonly, nonatomic) UIColor *color;
- (_Bool)applyCABackdropLayerStatistics:(id)arg1;
- (void)setValuesFromModel:(id)arg1;
@property(nonatomic) double contrast;
@property(nonatomic) double averageBrightness;
@property(nonatomic) double averageSaturation;
@property(nonatomic) double averageHue;
- (void)setDefaultValues;

@end

