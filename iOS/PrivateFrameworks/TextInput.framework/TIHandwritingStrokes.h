//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TextInput/NSCopying-Protocol.h>
#import <TextInput/NSSecureCoding-Protocol.h>

@interface TIHandwritingStrokes : NSObject <NSCopying, NSSecureCoding>
{
    struct vector<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>, std::__1::allocator<std::__1::vector<TIHandwritingPoint, std::__1::allocator<TIHandwritingPoint>>>> _strokes;
    _Bool _continuePreviousStroke;
}

+ (_Bool)supportsSecureCoding;
- (id).cxx_construct;
- (void).cxx_destruct;
- (unsigned long long)totalNumberOfPoints;
- (struct CGPoint)pointAtIndex:(unsigned long long)arg1 inStrokeAtIndex:(unsigned long long)arg2;
- (unsigned long long)numberOfPointsInStrokeAtIndex:(unsigned long long)arg1;
- (unsigned long long)numberOfStrokes;
- (void)removeAllStrokes;
- (void)removeStrokeAtIndex:(unsigned long long)arg1;
- (void)endStroke;
- (void)addPoint:(struct CGPoint)arg1;
- (id)description;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;

@end

