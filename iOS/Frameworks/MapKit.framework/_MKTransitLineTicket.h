//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKMapServiceTransitLineTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceTransitLineTicket;

__attribute__((visibility("hidden")))
@interface _MKTransitLineTicket : NSObject <MKMapServiceTransitLineTicket>
{
    id <GEOMapServiceTransitLineTicket> _ticket;
}

- (void).cxx_destruct;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (id)initWithTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
