//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSSQLCore;

__attribute__((visibility("hidden")))
@interface NSSQLRowCache
{
    NSSQLCore *_sqlCore;
    int _debug;
}

+ (void)initialize;
- (id)sqlCore;
- (void)dealloc;
- (id)initWithPersistentStore:(id)arg1;

@end
