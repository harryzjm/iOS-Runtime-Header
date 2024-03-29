//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, WDList, WDListDefinition;

__attribute__((visibility("hidden")))
@interface CMOutlineState : NSObject
{
    NSMutableArray *_counters;
    WDListDefinition *_listDefinition;
    WDList *_currentList;
}

- (void).cxx_destruct;
@property(readonly) WDListDefinition *listDefinition; // @synthesize listDefinition=_listDefinition;
@property(retain) WDList *currentList; // @synthesize currentList=_currentList;
- (void)increaseCounterAtLevel:(unsigned char)arg1;
- (id)levelDescriptionAtIndex:(unsigned char)arg1;
- (unsigned long long)counterAtLevel:(unsigned char)arg1;
- (void)setCounterTo:(unsigned long long)arg1 atLevel:(unsigned char)arg2;
- (void)reset;
- (unsigned long long)levelCount;
- (id)initWithListDefinition:(id)arg1;
- (id)init;

@end

