//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Email/NSObject-Protocol.h>

@protocol NSCopying;

@protocol EMMutableDictionaryProtocol <NSObject>
@property(readonly) unsigned long long count;
- (void)removeAllObjects;
- (void)removeObjectForKey:(id <NSCopying>)arg1;
- (void)setObject:(id)arg1 forKey:(id <NSCopying>)arg2;
- (id)objectForKey:(id)arg1;
@end

