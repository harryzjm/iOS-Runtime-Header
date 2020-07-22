//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreML/NSCopying-Protocol.h>

@class NSArray;

@interface MLInMemoryFeatureArray <NSCopying>
{
    NSArray *_values;
}

+ (id)featureArrayWithArray:(id)arg1 description:(id)arg2 error:(id *)arg3;
+ (id)featureArrayWithArray:(id)arg1 error:(id *)arg2;
+ (id)convertToFeatureValues:(id)arg1 ofType:(long long)arg2 error:(id *)arg3;
@property(readonly) NSArray *valueArray; // @synthesize valueArray=_values;
- (void).cxx_destruct;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)description;
- (unsigned long long)countByEnumeratingWithState:(CDStruct_70511ce9 *)arg1 objects:(id *)arg2 count:(unsigned long long)arg3;
- (unsigned long long)count;
- (id)objectAtIndexedSubscript:(unsigned long long)arg1;
- (id)initWithFeatureValues:(id)arg1;

@end
