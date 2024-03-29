//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface _CTFontFallbacksArray : NSArray
{
    struct TUnfairLock _lock;
    const void *_baseFont;
    const struct TTraitsValues *_refTraits;
    unsigned long long _count;
    NSMutableArray *_cascade;
    NSMutableArray *_fallbacks;
    unsigned long long _hash;
    int _uiUse;
}

- (id).cxx_construct;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (void)getObjects:(id *)arg1 range:(struct _NSRange)arg2;
- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;

@end

