//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class CHDChart, CHDFormula, EDString, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTitle : NSObject
{
    CHDChart *mChart;
    _Bool mIsAutoGenerated;
    _Bool mPositionAutoGenerated;
    _Bool mSizeAutoGenerated;
    _Bool mIsOverlay;
    CHDFormula *mName;
    EDString *mLastCachedName;
    OADGraphicProperties *mGraphicProperties;
    double mRotation;
}

- (id)description;
- (void)setTitleRotationAngle:(double)arg1;
- (double)titleRotationAngle;
- (void)setIsOverlay:(_Bool)arg1;
- (_Bool)isOverlay;
- (_Bool)isTitleVisible;
- (_Bool)isCachedTitleEmpty;
- (void)setIsSizeAutoGenerated:(_Bool)arg1;
- (_Bool)isAutoSizeAndPosition;
- (_Bool)isSizeAutoGenerated;
- (void)setIsPositionAutoGenerated:(_Bool)arg1;
- (_Bool)isPositionAutoGenerated;
- (void)setIsAutoGenerated:(_Bool)arg1;
- (_Bool)isAutoGenerated;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setName:(id)arg1;
- (id)name;
- (void)setLastCachedName:(id)arg1;
- (id)lastCachedName;
- (void)dealloc;
- (id)initWithChart:(id)arg1;

@end

