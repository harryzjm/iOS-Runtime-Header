//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary;

@interface RadioRecentStationsResponse : NSObject
{
    NSDictionary *_responseDictionary;
}

- (void).cxx_destruct;
@property(readonly, copy, nonatomic) NSArray *stationGroups;
@property(readonly, copy, nonatomic) NSArray *stationDictionaries;
- (id)initWithResponseDictionary:(id)arg1;

@end
