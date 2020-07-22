//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSNumber, NSString;

__attribute__((visibility("hidden")))
@interface VNClustererContextBase : NSObject
{
    NSNumber *_threshold;
    NSString *_cacheDirectoryPath;
    _Bool _readOnly;
}

- (void).cxx_destruct;
- (id)_createGreedyClusterer:(Class)arg1 state:(id)arg2 error:(id *)arg3;
- (_Bool)_createGreedyClustererWith:(id)arg1 error:(id *)arg2;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 threshold:(float)arg4 error:(id *)arg5;
- (id)initWithType:(id)arg1 cachePath:(id)arg2 state:(id)arg3 readOnly:(_Bool)arg4 threshold:(float)arg5 error:(id *)arg6;

@end

