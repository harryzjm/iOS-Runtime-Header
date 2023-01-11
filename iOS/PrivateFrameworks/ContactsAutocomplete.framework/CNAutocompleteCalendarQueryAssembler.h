//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNObservable;

@interface CNAutocompleteCalendarQueryAssembler : NSObject
{
    CNObservable *_cachedObservable;
    CNObservable *_uncachedObservable;
    CNObservable *_rawCachedObservable;
    CNObservable *_rawUncachedObservable;
}

- (void).cxx_destruct;
@property(readonly) CNObservable *rawUncachedObservable; // @synthesize rawUncachedObservable=_rawUncachedObservable;
@property(readonly) CNObservable *rawCachedObservable; // @synthesize rawCachedObservable=_rawCachedObservable;
@property(readonly) CNObservable *uncachedObservable; // @synthesize uncachedObservable=_uncachedObservable;
@property(readonly) CNObservable *cachedObservable; // @synthesize cachedObservable=_cachedObservable;
- (void)assemble;
- (id)description;
- (id)initWithRawCachedObservable:(id)arg1 rawUncachedObservable:(id)arg2;

@end
