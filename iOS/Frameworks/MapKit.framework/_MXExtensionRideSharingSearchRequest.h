//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <MapKit/NSSecureCoding-Protocol.h>

@class MKMapItem;

@interface _MXExtensionRideSharingSearchRequest : NSObject <NSSecureCoding>
{
    MKMapItem *_origin;
    MKMapItem *_destination;
}

+ (_Bool)supportsSecureCoding;
@property(retain, nonatomic) MKMapItem *destination; // @synthesize destination=_destination;
@property(retain, nonatomic) MKMapItem *origin; // @synthesize origin=_origin;
- (void).cxx_destruct;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;

@end

