//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface VCPFrameScoreFilter : NSObject
{
    int _numFilterTabs;
    float *_scoreArray;
    float _distanceVariance;
    float _diffVariance;
    int _numOfScores;
}

- (float)processFrameScore:(float)arg1 validScore:(_Bool)arg2;
- (void)dealloc;
- (id)initWithFilterTabs:(int)arg1 distanceVariance:(float)arg2 diffVariance:(float)arg3;

@end

