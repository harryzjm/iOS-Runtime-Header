//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

__attribute__((visibility("hidden")))
@interface MRURoutingViewControllerItems : NSObject
{
    NSDictionary *_routeGrouping;
    NSArray *_localDevicesAndHeadphones;
    NSArray *_speakersAndTVs;
}

- (void).cxx_destruct;
@property(copy, nonatomic) NSArray *speakersAndTVs; // @synthesize speakersAndTVs=_speakersAndTVs;
@property(copy, nonatomic) NSArray *localDevicesAndHeadphones; // @synthesize localDevicesAndHeadphones=_localDevicesAndHeadphones;
@property(copy, nonatomic) NSDictionary *routeGrouping; // @synthesize routeGrouping=_routeGrouping;

@end
