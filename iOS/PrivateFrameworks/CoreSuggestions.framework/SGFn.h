//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface SGFn : NSObject
{
}

+ (id)parMapOnQueue:(id)arg1 concurrencyLimit:(unsigned long long)arg2 input:(id)arg3 f:(CDUnknownBlockType)arg4;
+ (id)mapAndFilter:(id)arg1 f:(CDUnknownBlockType)arg2;
+ (id)filter:(id)arg1 f:(CDUnknownBlockType)arg2;
+ (id)map:(id)arg1 f:(CDUnknownBlockType)arg2;

@end
