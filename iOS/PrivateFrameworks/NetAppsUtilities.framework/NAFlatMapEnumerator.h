//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

@interface NAFlatMapEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _map;
}

@property(readonly, copy, nonatomic) CDUnknownBlockType map; // @synthesize map=_map;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (void).cxx_destruct;
- (id)allObjects;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 map:(CDUnknownBlockType)arg2;

@end
