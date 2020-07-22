//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <CorePDF/CPCopying-Protocol.h>
#import <CorePDF/NSCopying-Protocol.h>

@class CPShape;

@interface CPZoneBorderNeighbor : NSObject <NSCopying, CPCopying>
{
    CPShape *neighborShape;
    int shapeSide;
}

- (int)shapeSide;
- (void)setShapeSide:(int)arg1;
- (id)neighborShape;
- (void)setNeighborShape:(id)arg1;
- (void)dealloc;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initSuper;
- (id)init;

@end

