//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface _GEOOfflineServiceMapViewMetaData : NSObject
{
    double priority;
    unsigned long long state;
    double _lastUpdated;
    struct {
        CDStruct_2c43369c center;
        struct {
            double latitudeDelta;
            double longitudeDelta;
        } span;
    } _viewPort;
}

- (id)init;

@end

