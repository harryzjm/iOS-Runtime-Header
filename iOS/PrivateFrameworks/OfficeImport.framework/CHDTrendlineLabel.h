//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CHDFormula, EDResources, OADGraphicProperties;

__attribute__((visibility("hidden")))
@interface CHDTrendlineLabel : NSObject
{
    EDResources *mResources;
    CHDFormula *mName;
    unsigned long long mLastCachedNameStringIndex;
    unsigned long long mContentFormatId;
    _Bool mContentFormatDerived;
    _Bool mGeneratedText;
    _Bool mAutomaticLabelDeleted;
    OADGraphicProperties *mGraphicProperties;
}

+ (id)trendlineLabelWithResources:(id)arg1;
- (id)description;
- (void)setGraphicProperties:(id)arg1;
- (id)graphicProperties;
- (void)setAutomaticLabelDeleted:(_Bool)arg1;
- (_Bool)isAutomaticLabelDeleted;
- (void)setGeneratedText:(_Bool)arg1;
- (_Bool)isGeneratedText;
- (void)setIsContentFormatDerivedFromDataPoints:(_Bool)arg1;
- (_Bool)isContentFormatDerivedFromDataPoints;
- (void)setContentFormat:(id)arg1;
- (id)contentFormat;
- (void)setName:(id)arg1 chart:(id)arg2;
- (id)name;
- (void)setLastCachedName:(id)arg1;
- (id)lastCachedName;
- (void)dealloc;
- (id)initWithResources:(id)arg1;
- (void)setContentFormatId:(unsigned long long)arg1;
- (unsigned long long)contentFormatId;
- (void)setStringIndex:(unsigned long long)arg1;
- (unsigned long long)stringIndex;

@end

