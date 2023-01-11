//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <TouchML/NSCopying-Protocol.h>
#import <TouchML/TMLPointJSExports-Protocol.h>

@interface TMLPoint : NSObject <TMLPointJSExports, NSCopying>
{
    struct CGPoint _point;
}

+ (void)initializeJSContext:(id)arg1;
@property(readonly, nonatomic) struct CGPoint point; // @synthesize point=_point;
- (id)description;
@property(readonly, nonatomic) double y;
@property(readonly, nonatomic) double x;
- (id)CGPointValue;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithPoint:(struct CGPoint)arg1;

@end
