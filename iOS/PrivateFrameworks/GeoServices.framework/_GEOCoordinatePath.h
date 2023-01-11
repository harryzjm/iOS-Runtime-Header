//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <GeoServices/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface _GEOCoordinatePath : NSObject <NSSecureCoding>
{
    union {
        struct ControlPoint *zilch;
        CDStruct_183601bc *basic;
        void *data;
    } _coordinates;
    _Bool _usesZilch;
    unsigned long long _count;
    double *_pointLengths;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) double *pointLengths; // @synthesize pointLengths=_pointLengths;
@property(readonly, nonatomic) unsigned long long count; // @synthesize count=_count;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
@property(readonly, nonatomic) double length;
- (CDStruct_39925896)coordinateAt:(unsigned long long)arg1;
- (void)setPointLengths:(double *)arg1;
- (void)setBasicCoordinates:(CDStruct_39925896 *)arg1 count:(unsigned long long)arg2;
- (void)setZilchCoordinates:(struct ControlPoint *)arg1 count:(unsigned long long)arg2;
- (void)dealloc;
@property(readonly, nonatomic) struct ControlPoint *zilchControlPoints;

@end
