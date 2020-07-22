//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSMutableData;

__attribute__((visibility("hidden")))
@interface TopBottomRegion : NSObject
{
    float xmin;
    float xmax;
    float ymin;
    float ymax;
    int xdatamin;
    int xdatamax;
    float length;
    NSMutableData *topData;
    NSMutableData *bottomData;
    int nsegs;
    float seglength;
    float ss;
    _Bool isempty;
}

@property _Bool isempty; // @synthesize isempty;
@property float length; // @synthesize length;
@property float xmax; // @synthesize xmax;
@property float xmin; // @synthesize xmin;
- (void)printSummary;
- (CDStruct_e3b9714e)boundsRect;
- (void)adjustForX:(float)arg1 Y:(float)arg2;
- (_Bool)containsPointX:(float)arg1 Y:(float)arg2;
- (void)lowerBottomBy:(float)arg1;
- (void)raiseTopBy:(float)arg1;
- (void)smoothWithSize:(int)arg1;
@property(readonly) float *bottom;
@property(readonly) float *top;
- (void)dealloc;
- (id)initWithSegments:(int)arg1 boundsRect:(struct CGRect)arg2;

@end
