//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface TPSTuple : NSObject
{
    id _first;
    id _second;
}

+ (id)tupleWithFirst:(id)arg1 second:(id)arg2;
- (void).cxx_destruct;
@property(readonly, nonatomic) id second; // @synthesize second=_second;
@property(readonly, nonatomic) id first; // @synthesize first=_first;
- (id)description;
- (id)initWithFirst:(id)arg1 second:(id)arg2;

@end
