//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class CNQueue;

@interface _CNLazyArrayOperatorSkipLast
{
    CNQueue *_buffer;
    unsigned long long _limit;
    _Bool _haveFilledBuffer;
}

- (void).cxx_destruct;
- (_Bool)fillBuffer;
- (id)nextObject;
- (id)initWithInput:(id)arg1 limit:(unsigned long long)arg2;

@end
