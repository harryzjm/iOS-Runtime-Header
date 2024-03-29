//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface QLMovieEdits : NSObject
{
    unsigned long long _rightRotationsCount;
    double _trimStartTime;
    double _trimEndTime;
}

+ (id)editsWithRightRotationsCount:(unsigned long long)arg1 trimStartTime:(double)arg2 trimEndTime:(double)arg3;
@property(nonatomic) double trimEndTime; // @synthesize trimEndTime=_trimEndTime;
@property(nonatomic) double trimStartTime; // @synthesize trimStartTime=_trimStartTime;
@property(nonatomic) unsigned long long rightRotationsCount; // @synthesize rightRotationsCount=_rightRotationsCount;
- (_Bool)trimmed;
- (_Bool)rotated;
- (_Bool)hasEdits;
- (void)resetEditingValues;
- (void)resetTrimmingValues;
- (void)incrementRightRotationsCount;
- (_Bool)isEqual:(id)arg1;
- (id)init;

@end

