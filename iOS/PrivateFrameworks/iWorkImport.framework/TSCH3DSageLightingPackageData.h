//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <iWorkImport/TSCH3DSageLightingPackageData-Protocol.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface TSCH3DSageLightingPackageData : NSObject <TSCH3DSageLightingPackageData>
{
    NSDictionary *mPackage;
    NSArray *mLights;
}

+ (id)dataWithDictionary:(id)arg1;
- (float)dropOffRateAtIndex:(unsigned long long)arg1;
- (float)cutOffAngleAtIndex:(unsigned long long)arg1;
- (struct Vector3)directionAtIndex:(unsigned long long)arg1;
- (struct Vector3)positionAtIndex:(unsigned long long)arg1;
- (_Bool)enabledAtIndex:(unsigned long long)arg1;
- (int)coordinateSpaceAtIndex:(unsigned long long)arg1;
- (struct Vector3)attenuationAtIndex:(unsigned long long)arg1;
- (float)intensityAtIndex:(unsigned long long)arg1;
- (Color_1703f521)specularColorAtIndex:(unsigned long long)arg1;
- (Color_1703f521)diffuseColorAtIndex:(unsigned long long)arg1;
- (Color_1703f521)ambientColorAtIndex:(unsigned long long)arg1;
- (Color_1703f521)colorAtIndex:(unsigned long long)arg1 redKey:(id)arg2 greenKey:(id)arg3 blueKey:(id)arg4;
- (int)typeAtIndex:(unsigned long long)arg1;
- (id)nameAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (id)packageName;
- (void)dealloc;
- (id)initWithDictionary:(id)arg1;

@end

