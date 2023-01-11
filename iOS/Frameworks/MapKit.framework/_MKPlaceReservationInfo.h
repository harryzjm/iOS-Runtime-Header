//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSString, UIImage;
@protocol _MKPlaceReservationDelegate;

@interface _MKPlaceReservationInfo : NSObject
{
    NSString *_attributionProviderDisplayName;
    UIImage *_attributionProviderLogoImage;
    NSArray *_openTimes;
    id <_MKPlaceReservationDelegate> _reservationDelegate;
}

@property(readonly, nonatomic) __weak id <_MKPlaceReservationDelegate> reservationDelegate; // @synthesize reservationDelegate=_reservationDelegate;
@property(readonly, copy, nonatomic) NSArray *openTimes; // @synthesize openTimes=_openTimes;
@property(readonly, nonatomic) UIImage *attributionProviderLogoImage; // @synthesize attributionProviderLogoImage=_attributionProviderLogoImage;
@property(readonly, copy, nonatomic) NSString *attributionProviderDisplayName; // @synthesize attributionProviderDisplayName=_attributionProviderDisplayName;
- (void).cxx_destruct;
- (id)initWithOpenTimes:(id)arg1 attributionProviderName:(id)arg2 providerLogoImage:(id)arg3 delegate:(id)arg4;

@end

