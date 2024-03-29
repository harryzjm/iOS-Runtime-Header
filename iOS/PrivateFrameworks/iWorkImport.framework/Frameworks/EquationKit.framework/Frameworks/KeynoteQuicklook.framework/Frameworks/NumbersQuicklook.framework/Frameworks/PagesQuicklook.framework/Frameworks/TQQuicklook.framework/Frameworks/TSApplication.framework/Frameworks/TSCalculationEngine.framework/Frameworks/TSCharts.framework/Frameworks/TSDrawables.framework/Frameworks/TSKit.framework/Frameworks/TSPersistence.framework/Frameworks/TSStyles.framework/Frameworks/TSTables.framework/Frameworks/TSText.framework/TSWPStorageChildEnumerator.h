//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@class NSArray, TSWPStorage;

@interface TSWPStorageChildEnumerator : NSEnumerator
{
    unsigned int _index;
    TSWPStorage *_storage;
    NSArray *_charOffsetArray;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSArray *charOffsetArray; // @synthesize charOffsetArray=_charOffsetArray;
@property(nonatomic) unsigned int index; // @synthesize index=_index;
@property(retain, nonatomic) TSWPStorage *storage; // @synthesize storage=_storage;
- (id)nextObject;
- (id)initWithStorage:(id)arg1;

@end

