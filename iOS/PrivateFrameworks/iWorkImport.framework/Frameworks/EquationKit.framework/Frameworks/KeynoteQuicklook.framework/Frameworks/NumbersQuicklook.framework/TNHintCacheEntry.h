//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol TSDHint;

@interface TNHintCacheEntry : NSObject
{
    id <TSDHint> mHint;
    _Bool mIsValid;
    struct CGPoint mOrigin;
}

@property struct CGPoint origin; // @synthesize origin=mOrigin;
@property(getter=isValid) _Bool valid; // @synthesize valid=mIsValid;
@property(retain) id <TSDHint> hint; // @synthesize hint=mHint;
- (void)dealloc;
- (id)initWithHint:(id)arg1 origin:(struct CGPoint)arg2;

@end

