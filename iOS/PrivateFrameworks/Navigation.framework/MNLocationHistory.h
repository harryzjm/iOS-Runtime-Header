//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray;
@protocol MNLocationHistoryProvider;

@interface MNLocationHistory : NSObject
{
    id <MNLocationHistoryProvider> _locationHistoryProvider;
}

@property(retain, nonatomic) id <MNLocationHistoryProvider> locationHistoryProvider; // @synthesize locationHistoryProvider=_locationHistoryProvider;
- (void).cxx_destruct;
@property(readonly) NSArray *locationHistory;
- (id)init;

@end

