//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HMFoundation/HMFObject.h>

@class CLLocation, NSMutableArray;

__attribute__((visibility("hidden")))
@interface HMDLocationClusterGroup : HMFObject
{
    CLLocation *_center;
    NSMutableArray *_locations;
}

- (void).cxx_destruct;
@property(readonly) NSMutableArray *locations; // @synthesize locations=_locations;
@property(readonly, copy) CLLocation *center; // @synthesize center=_center;
- (id)attributeDescriptions;
- (id)initWithCenter:(id)arg1;

@end

