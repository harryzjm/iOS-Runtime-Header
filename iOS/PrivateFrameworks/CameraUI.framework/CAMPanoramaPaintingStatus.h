//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMPanoramaPaintingStatus : NSObject
{
    double _speed;
    struct CGRect _cropRectangle;
}

@property(readonly, nonatomic) struct CGRect cropRectangle; // @synthesize cropRectangle=_cropRectangle;
@property(readonly, nonatomic) double speed; // @synthesize speed=_speed;
- (id)initWithSpeed:(double)arg1 cropRectangle:(struct CGRect)arg2;

@end
