//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface NSObservation : NSObject
{
}

+ (id)allocWithZone:(struct _NSZone *)arg1;
- (void)remove;
- (id *)_observerStorage;
- (void *)_observerStorageOfSize:(unsigned long long)arg1;
- (id)initWithObservable:(id)arg1 blockSink:(CDUnknownBlockType)arg2 tag:(int)arg3;
- (id)initWithObservable:(id)arg1 observer:(id)arg2;

@end

