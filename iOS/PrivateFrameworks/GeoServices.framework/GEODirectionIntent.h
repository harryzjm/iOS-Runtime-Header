//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class GEOResolvedItem;

@interface GEODirectionIntent : NSObject
{
    GEOResolvedItem *_origin;
    GEOResolvedItem *_destination;
    int _transportType;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) int transportType; // @synthesize transportType=_transportType;
@property(readonly, nonatomic) GEOResolvedItem *destination; // @synthesize destination=_destination;
@property(readonly, nonatomic) GEOResolvedItem *origin; // @synthesize origin=_origin;
- (id)initWithDirectionIntent:(id)arg1;

@end
