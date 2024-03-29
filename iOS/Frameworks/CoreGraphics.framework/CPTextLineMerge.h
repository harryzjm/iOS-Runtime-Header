//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray;

__attribute__((visibility("hidden")))
@interface CPTextLineMerge : NSObject
{
    NSMutableArray *avail;
}

- (void)mergeLinesIn:(id)arg1;
- (void)dropCaps:(id)arg1 to:(id)arg2;
- (double)averageHeight:(id)arg1;
- (id)findLineFor:(id)arg1 in:(id)arg2;
- (void)detachDropCaps:(id)arg1 to:(id)arg2;
- (unsigned int)countOverlapsOfLineAtIndex:(unsigned int)arg1 in:(id)arg2;
- (void)removeOverlapping:(id)arg1;
- (void)makeOverlappingLinesTo:(id)arg1;
- (_Bool)hasOverlappingLines;
- (void)eliminate:(id)arg1;
- (void)mergeByColumn:(id)arg1;
- (void)mergeLinesInInterval:(id)arg1 from:(id)arg2;
- (void)mergeColumn:(id)arg1 overlapping:(id)arg2;
- (void)addInterval:(id)arg1 to:(id)arg2;
- (_Bool)fits:(id)arg1 into:(id)arg2;

@end

