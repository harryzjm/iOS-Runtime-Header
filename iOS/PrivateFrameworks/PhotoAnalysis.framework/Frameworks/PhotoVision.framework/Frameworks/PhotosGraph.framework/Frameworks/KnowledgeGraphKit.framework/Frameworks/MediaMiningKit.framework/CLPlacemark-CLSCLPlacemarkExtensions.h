//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreLocation/CLPlacemark.h>

@class NSString;

@interface CLPlacemark (CLSCLPlacemarkExtensions)
+ (id)commonPresentationStringWithPlacemarks:(id)arg1 options:(unsigned long long *)arg2;
+ (unsigned long long)presentationOptionsForPlacemarks:(id)arg1;
+ (id)presentationStringForPlacemarks:(id)arg1 options:(unsigned long long)arg2;
+ (id)placemarkFromLitePlacemark:(id)arg1;
@property(readonly, nonatomic) _Bool isOcean;
@property(readonly, nonatomic) _Bool isIsland;
- (int)cls_precisePlaceType;
@property(readonly, nonatomic) NSString *administrativeAreaCode;
@property(readonly, nonatomic) NSString *fullAdministrativeArea;
- (_Bool)isEqualToPlacemark:(id)arg1;
- (id)presentationString:(unsigned long long *)arg1;
@end

