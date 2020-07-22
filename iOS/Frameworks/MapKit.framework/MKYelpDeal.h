//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <MapKit/MKMapItemVendorDeal-Protocol.h>

@class NSString;

__attribute__((visibility("hidden")))
@interface MKYelpDeal : NSObject <MKMapItemVendorDeal>
{
    NSString *identifier;
    NSString *title;
    NSString *urlString;
}

+ (id)dealWithJSONObject:(id)arg1;
@property(retain, nonatomic) NSString *urlString; // @synthesize urlString;
@property(retain, nonatomic) NSString *title; // @synthesize title;
@property(retain, nonatomic) NSString *identifier; // @synthesize identifier;
- (void).cxx_destruct;
@property(readonly, copy) NSString *description;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
