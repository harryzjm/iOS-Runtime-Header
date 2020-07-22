//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

@class NSNumber, NSString;

@interface TDAbstractLayerReference : NSManagedObject
{
    struct CGRect _frameRect;
}

- (void)awakeFromFetch;
@property(nonatomic) struct CGRect frameRect; // @dynamic frameRect;
@property(nonatomic) struct CGRect primitiveFrameRect;

// Remaining properties
@property(retain, nonatomic) NSNumber *blendMode; // @dynamic blendMode;
@property(retain, nonatomic) NSString *frameRectString; // @dynamic frameRectString;
@property(nonatomic) _Bool makeOpaqueIfPossible; // @dynamic makeOpaqueIfPossible;
@property(retain, nonatomic) NSString *name; // @dynamic name;
@property(retain, nonatomic) NSNumber *opacity; // @dynamic opacity;

@end

