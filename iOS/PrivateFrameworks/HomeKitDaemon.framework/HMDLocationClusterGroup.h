//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CLLocation, NSMutableArray;

@interface HMDLocationClusterGroup : NSObject
{
    CLLocation *_center;
    NSMutableArray *_locations;
}

+ (id)groupWithCenter:(id)arg1;
@property(retain, nonatomic) NSMutableArray *locations; // @synthesize locations=_locations;
@property(retain, nonatomic) CLLocation *center; // @synthesize center=_center;
- (void).cxx_destruct;

@end
