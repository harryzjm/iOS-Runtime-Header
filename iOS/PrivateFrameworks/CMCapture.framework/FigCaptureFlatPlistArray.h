//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSArray.h>

@class FigCaptureFlatPlist;

__attribute__((visibility("hidden")))
@interface FigCaptureFlatPlistArray : NSArray
{
    FigCaptureFlatPlist *_flatPlist;
    const CDStruct_80d302cf *_bplist;
    unsigned long long _offset;
    unsigned long long _count;
}

- (id)objectAtIndex:(unsigned long long)arg1;
- (unsigned long long)count;
- (void)dealloc;
- (id)initWithFlatPlist:(id)arg1 offset:(unsigned long long)arg2;

@end

