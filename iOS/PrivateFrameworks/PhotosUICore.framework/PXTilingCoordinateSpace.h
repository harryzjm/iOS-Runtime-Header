//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface PXTilingCoordinateSpace : NSObject
{
    PXTilingCoordinateSpace *_parentSpace;
    struct CGAffineTransform _transform;
}

@property(nonatomic) struct CGAffineTransform transform; // @synthesize transform=_transform;
@property(nonatomic) __weak PXTilingCoordinateSpace *parentSpace; // @synthesize parentSpace=_parentSpace;
- (void).cxx_destruct;
@property(readonly, nonatomic) void *identifier;
- (id)init;

@end

