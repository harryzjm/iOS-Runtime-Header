//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_dispatch_data;

__attribute__((visibility("hidden")))
@interface __NSCFURLLocalStreamTaskFromDataTaskDataBlobby : NSObject
{
    NSObject<OS_dispatch_data> *_remainingData;
    CDUnknownBlockType _completion;
}

- (void)callCompletion;
- (int)drain:(struct __CFWriteStream *)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;
- (id)initWithData:(id)arg1 completion:(CDUnknownBlockType)arg2;

@end

