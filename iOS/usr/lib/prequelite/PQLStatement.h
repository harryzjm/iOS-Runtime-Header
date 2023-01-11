//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

@interface PQLStatement : NSObject
{
    struct sqlite3_stmt *_stmt;
    PQLStatement *_next;
    NSMutableArray *_aliveBinds;
    CDUnknownBlockType _profilingHook;
    union {
        unsigned char inlined[8];
        unsigned char *ptr;
    } _specUnion;
    _Bool _inUse;
    _Bool _isTraced;
    short _specLength;
}

- (void).cxx_destruct;
- (void)unbindForDB:(id)arg1 returnedRows:(unsigned long long)arg2;
- (void)bindArguments:(char *)arg1 db:(id)arg2;
- (id)description;
- (void)dealloc;
- (void)invalidate;
- (id)initWithFormat:(id)arg1 arguments:(char *)arg2 db:(id)arg3 cache:(struct cache_s *)arg4;
- (id)initWithStatement:(id)arg1 forDB:(id)arg2;
- (_Bool)_prepare:(const char *)arg1 withDB:(id)arg2;
- (id)translate:(id)arg1 hasInjections:(_Bool *)arg2 arguments:(char *)arg3;
- (void)keepBindAlive:(id)arg1;
@property(readonly, nonatomic) _Bool isTraced;
- (void)bindFromArray:(id)arg1 db:(id)arg2;
- (id)initWithQueryBuilder:(CDUnknownBlockType)arg1 db:(id)arg2 cache:(struct cache_s *)arg3;
- (id)translate:(id)arg1 withBuilder:(id)arg2;

@end
