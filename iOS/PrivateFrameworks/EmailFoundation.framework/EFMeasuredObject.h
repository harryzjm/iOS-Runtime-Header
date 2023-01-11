//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface EFMeasuredObject : NSObject
{
    id _object;
    double _measure;
}

+ (id)reverseSortedObjects:(id)arg1 limit:(unsigned long long)arg2;
+ (id)max:(id)arg1;
+ (id)object:(id)arg1 withMeasure:(double)arg2;
- (void).cxx_destruct;
@property(nonatomic) double measure; // @synthesize measure=_measure;
@property(retain, nonatomic) id object; // @synthesize object=_object;
- (long long)compare:(id)arg1;
- (id)description;
- (id)initWithObject:(id)arg1 measure:(double)arg2;

@end
