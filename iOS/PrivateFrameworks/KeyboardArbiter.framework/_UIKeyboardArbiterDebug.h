//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface _UIKeyboardArbiterDebug : NSObject
{
    NSObject<OS_dispatch_queue> *_queue;
    int _importantCount;
    NSMutableArray *_entries;
    _Bool _disable;
    _Bool _pause;
}

+ (id)sharedInstance;
- (void).cxx_destruct;
@property(nonatomic) _Bool pause; // @synthesize pause=_pause;
- (void)getDebugInfoDictionariesWithCompletionHandler:(CDUnknownBlockType)arg1;
- (void)addAsynchronousData:(CDUnknownBlockType)arg1;
- (void)errorWithFormat:(const char *)arg1;
- (void)debugWithFormat:(const char *)arg1;
- (void)infoWithFormat:(const char *)arg1;
- (void)addEntry:(id)arg1;
- (id)init;

@end
