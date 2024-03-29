//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSDictionary.h>

__attribute__((visibility("hidden")))
@interface NSDistributedObjectsStatistics : NSDictionary
{
    unsigned long long requestsReceived;
    unsigned long long repliesSent;
    unsigned long long requestsSent;
    unsigned long long repliesReceived;
}

- (id)objectForKey:(id)arg1;
- (void)addStatistics:(id)arg1;
- (id)keyEnumerator;
- (id)allKeys;
- (unsigned long long)count;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

