//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSEnumerator.h>

__attribute__((visibility("hidden")))
@interface NAFilterEnumerator : NSEnumerator
{
    NSEnumerator *_enumerator;
    CDUnknownBlockType _filter;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) CDUnknownBlockType filter; // @synthesize filter=_filter;
@property(readonly, nonatomic) NSEnumerator *enumerator; // @synthesize enumerator=_enumerator;
- (id)allObjects;
- (id)nextObject;
- (id)initWithEnumerator:(id)arg1 filter:(CDUnknownBlockType)arg2;

@end

