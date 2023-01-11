//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <SearchFoundation/NSObject-Protocol.h>

@class NSData, NSDictionary, NSString, SFColor, SFLatLng;

@protocol SFPin <NSObject>
@property(readonly, nonatomic) NSData *jsonData;
@property(readonly, nonatomic) NSDictionary *dictionaryRepresentation;
@property(nonatomic) int pinBehavior;
@property(copy, nonatomic) NSData *mapsData;
@property(copy, nonatomic) NSString *resultID;
@property(copy, nonatomic) NSString *label;
@property(retain, nonatomic) SFColor *pinColor;
@property(retain, nonatomic) SFLatLng *location;
@end

