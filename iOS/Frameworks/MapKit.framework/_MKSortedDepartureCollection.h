//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableArray, NSMutableSet;

__attribute__((visibility("hidden")))
@interface _MKSortedDepartureCollection : NSObject
{
    NSMutableArray *_sortedDepartures;
    NSMutableSet *_groupedSequences;
}

@property(retain, nonatomic) NSMutableSet *groupedSequences; // @synthesize groupedSequences=_groupedSequences;
@property(retain, nonatomic) NSMutableArray *sortedDepartures; // @synthesize sortedDepartures=_sortedDepartures;
- (void).cxx_destruct;

@end

