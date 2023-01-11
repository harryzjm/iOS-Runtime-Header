//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSDate, NSString, NSURL, RTLocation;

@interface RTConnectionsLocation : NSObject
{
    RTLocation *_location;
    NSString *_name;
    NSString *_originatingBundleID;
    NSString *_fullFormattedAddress;
    NSURL *_mapItemURL;
    NSDate *_createdAt;
}

@property(readonly, nonatomic) NSDate *createdAt; // @synthesize createdAt=_createdAt;
@property(readonly, nonatomic) NSURL *mapItemURL; // @synthesize mapItemURL=_mapItemURL;
@property(readonly, nonatomic) NSString *fullFormattedAddress; // @synthesize fullFormattedAddress=_fullFormattedAddress;
@property(readonly, nonatomic) NSString *originatingBundleID; // @synthesize originatingBundleID=_originatingBundleID;
@property(readonly, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, nonatomic) RTLocation *location; // @synthesize location=_location;
- (void).cxx_destruct;
- (id)description;
- (id)initWithLocation:(id)arg1 name:(id)arg2 originatingBundleID:(id)arg3 fullFormattedAddress:(id)arg4 mapItemURL:(id)arg5 createdAt:(id)arg6;
- (id)init;
- (id)_addProactiveExpertSourceTo:(id)arg1;
- (id)_mapItemFromForwardGeocode:(id)arg1;
- (id)_mapItemFromLocalSearch:(id)arg1;
- (id)mapItemUsingMapServiceManager:(id)arg1;

@end

