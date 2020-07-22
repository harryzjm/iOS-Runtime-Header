//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

@class NSArray;
@protocol ICDeviceBrowserDelegate;

@interface ICDeviceBrowser : NSObject
{
    id _privateData;
}

- (id)internalDevices;
@property(readonly) NSArray *devices;
- (void)stop;
- (int)start;
@property(readonly, getter=isBrowsing) _Bool browsing;
@property id <ICDeviceBrowserDelegate> delegate;
- (void)finalize;
- (void)dealloc;
- (id)init;

@end

