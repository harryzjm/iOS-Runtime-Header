//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/MKMapServiceFeedbackReportTicket-Protocol.h>

@class GEOMapServiceTraits, NSString;
@protocol GEOMapServiceFeedbackReportTicket;

__attribute__((visibility("hidden")))
@interface _MKFeedbackReportTicket : NSObject <MKMapServiceFeedbackReportTicket>
{
    id <GEOMapServiceFeedbackReportTicket> _ticket;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) GEOMapServiceTraits *traits;
- (void)cancel;
- (void)submitWithHandler:(CDUnknownBlockType)arg1 networkActivity:(CDUnknownBlockType)arg2;
- (id)initWithFeedbackReportTicket:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
