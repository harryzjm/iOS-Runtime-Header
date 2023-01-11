//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface OADPath : NSObject
{
    struct CGSize mSize;
    NSMutableArray *mElements;
    int mFillMode;
    _Bool mStroked;
}

- (id)description;
- (void)setStroked:(_Bool)arg1;
- (_Bool)stroked;
- (void)setFillMode:(int)arg1;
- (int)fillMode;
- (id)elementAtIndex:(unsigned long long)arg1;
- (unsigned long long)elementCount;
- (void)addElement:(id)arg1;
- (void)setSize:(struct CGSize)arg1;
- (struct CGSize)size;
- (void)dealloc;
- (id)init;

@end

