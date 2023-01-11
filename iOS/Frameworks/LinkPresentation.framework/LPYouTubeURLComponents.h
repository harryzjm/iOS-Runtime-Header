//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface LPYouTubeURLComponents : NSObject
{
    NSString *_videoID;
    double _startTime;
}

+ (id)formatAsYouTubeTime:(double)arg1;
+ (_Bool)parseYouTubeTimeFormat:(id)arg1 outTime:(double *)arg2;
@property(nonatomic) double startTime; // @synthesize startTime=_startTime;
@property(copy, nonatomic) NSString *videoID; // @synthesize videoID=_videoID;
- (void).cxx_destruct;

@end
