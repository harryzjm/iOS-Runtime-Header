//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <NanoTimeKitCompanion/NSSecureCoding-Protocol.h>

@class MISSING_TYPE;

@interface NTKKaleidoscopePathfinder : NSObject <NSSecureCoding>
{
    float _sampleRadiusX;
    float _sampleRadiusY;
    int _cellGridWidth;
    int _cellGridHeight;
    int _pathLength;
    MISSING_TYPE **_dominanceGrid;
    MISSING_TYPE **_path;
}

+ (_Bool)supportsSecureCoding;
+ (id)pathfinderFromFile:(id)arg1;
+ (id)pathfinderFromDirectory:(id)arg1;
+ (id)pathfinderWithImage:(id)arg1 divisor:(float)arg2;
+ (id)pathfinderWithImage:(id)arg1;
- (_Bool)writeToFile:(id)arg1;
- (_Bool)writeToDirectory:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct NTKKaleidoscopePathfinderPoint)pointForTime:(float)arg1;
- (void)dealloc;
- (id)initWithCoder:(id)arg1;
- (id)initWithImage:(id)arg1 divisor:(float)arg2;

@end

