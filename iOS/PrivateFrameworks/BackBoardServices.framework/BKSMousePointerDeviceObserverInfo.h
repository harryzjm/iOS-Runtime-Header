//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSSet;
@protocol BKSMousePointerDeviceObserver;

@interface BKSMousePointerDeviceObserverInfo : NSObject
{
    id <BKSMousePointerDeviceObserver> _observer;
    NSSet *_visibleDevices;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSSet *visibleDevices; // @synthesize visibleDevices=_visibleDevices;
@property(retain, nonatomic) id <BKSMousePointerDeviceObserver> observer; // @synthesize observer=_observer;

@end
