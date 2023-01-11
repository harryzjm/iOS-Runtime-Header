//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation;

@interface PLLocationOfInterest : NSObject
{
    long long _type;
    CLLocation *_location;
    double _radius;
}

+ (id)locationOfInterestWithType:(long long)arg1 location:(id)arg2 radius:(double)arg3;
@property(readonly, nonatomic) double radius; // @synthesize radius=_radius;
@property(readonly, nonatomic) CLLocation *location; // @synthesize location=_location;
@property(readonly, nonatomic) long long type; // @synthesize type=_type;
- (void).cxx_destruct;
- (id)description;
- (id)_descriptionType;

@end
