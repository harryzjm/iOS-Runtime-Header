//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableDictionary, RSPointCloud, RSTemporalMeta;

@interface RSKeyframeAccumulation : NSObject
{
    RSPointCloud *_worldpc;
    RSTemporalMeta *_accMeta;
    unsigned long long _skipCnt;
    NSMutableDictionary *_metas;
    NSMutableArray *_newKeyframes;
    NSMutableArray *_diffKeyframes;
    NSMutableDictionary *_keyframeOrderDict;
}

- (void).cxx_destruct;
- (id)init;

@end

