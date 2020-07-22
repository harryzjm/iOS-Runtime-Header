//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;
@protocol CRKIPAddressMonitorDelegate;

@interface CRKIPAddressMonitor : NSObject
{
    int mNetworkChangeNotificationToken;
    id <CRKIPAddressMonitorDelegate> _delegate;
}

@property(nonatomic) __weak id <CRKIPAddressMonitorDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)delegateNetworkDidChange;
- (void)networkDidChange;
@property(readonly, copy, nonatomic) NSString *addressString;
@property(readonly, nonatomic) unsigned int address;
- (id)init;
- (void)dealloc;

@end
