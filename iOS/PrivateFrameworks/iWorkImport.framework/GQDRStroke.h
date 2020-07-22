//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/GQDNameMappable-Protocol.h>

@class GQDColor, GQDRStrokePattern, NSString;

__attribute__((visibility("hidden")))
@interface GQDRStroke : NSObject <GQDNameMappable>
{
    float mMiterLimit;
    float mWidth;
    int mCap;
    int mJoin;
    GQDColor *mColor;
    GQDRStrokePattern *mPattern;
}

+ (const struct StateSpec *)stateForReading;
- (id)pattern;
- (id)color;
- (int)join;
- (int)cap;
- (float)width;
- (float)miterLimit;
- (void)dealloc;
- (int)readAttributesFromReader:(struct _xmlTextReader *)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
