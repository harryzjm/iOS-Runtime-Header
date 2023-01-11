//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Navigation/NSSecureCoding-Protocol.h>

@class GEOTransitRouteUpdate;

@interface MNRealtimeTransitUpdate <NSSecureCoding>
{
    GEOTransitRouteUpdate *_transitUpdate;
}

+ (_Bool)supportsSecureCoding;
@property(readonly, nonatomic) GEOTransitRouteUpdate *transitUpdate; // @synthesize transitUpdate=_transitUpdate;
- (void).cxx_destruct;
- (id)description;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)routeID;
- (id)initWithTransitRouteUpdate:(id)arg1;

@end
