//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;
@protocol SHWorkerDelegate;

__attribute__((visibility("hidden")))
@interface _TtC12ShazamEvents21LiveMusicEventFetcher : NSObject
{
    MISSING_TYPE *workerDelegate;
    MISSING_TYPE *_isRunning;
    MISSING_TYPE *urlSession;
    MISSING_TYPE *$__lazy_storage_$_encoder;
}

- (void).cxx_destruct;
- (id)init;
- (double)timeRequiredToPerformWork;
- (void)stop;
@property(nonatomic, readonly) _Bool managesRecordingSession;
@property(nonatomic) _Bool isRunning;
@property(nonatomic, retain) id <SHWorkerDelegate> workerDelegate; // @synthesize workerDelegate;

@end

