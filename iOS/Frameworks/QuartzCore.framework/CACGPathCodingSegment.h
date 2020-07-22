//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <QuartzCore/NSSecureCoding-Protocol.h>

__attribute__((visibility("hidden")))
@interface CACGPathCodingSegment : NSObject <NSSecureCoding>
{
    int _type;
    struct CGPoint _points[3];
}

+ (_Bool)supportsSecureCoding;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)addToCGPath:(struct CGPath *)arg1;
- (id)initWithCGPathElement:(const struct CGPathElement *)arg1;

@end

