//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface SNAudioQueueConfiguration : NSObject
{
    MISSING_TYPE *creationFlags;
    MISSING_TYPE *configureAudioQueue;
}

- (void).cxx_destruct;
- (id)initWithCreationFlags:(unsigned int)arg1 configureAudioQueue:(CDUnknownBlockType)arg2;
- (id)init;
@property(nonatomic, copy) CDUnknownBlockType configureAudioQueue;
@property(nonatomic) unsigned int creationFlags; // @synthesize creationFlags;

@end

