//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;

@interface STSAnimatedImageInfo : NSObject
{
    NSArray *_frames;
    double _duration;
}

- (void).cxx_destruct;
@property(nonatomic) double duration; // @synthesize duration=_duration;
@property(copy, nonatomic) NSArray *frames; // @synthesize frames=_frames;
@property(readonly, nonatomic) struct CGSize size;

@end
