//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CarPlaySupport/MKAnnotation-Protocol.h>

@class CPPointOfInterest, NSString;

@interface CPSPointOfInterestAnnotation : NSObject <MKAnnotation>
{
    CPPointOfInterest *_pointOfInterest;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) CPPointOfInterest *pointOfInterest; // @synthesize pointOfInterest=_pointOfInterest;
@property(readonly, copy) NSString *description;
@property(readonly, copy, nonatomic) NSString *subtitle;
@property(readonly, copy, nonatomic) NSString *title;
@property(readonly, nonatomic) struct CLLocationCoordinate2D coordinate;
- (id)initWithPointOfInterest:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
