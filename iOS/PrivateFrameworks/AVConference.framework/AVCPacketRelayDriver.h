//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

__attribute__((visibility("hidden")))
@interface AVCPacketRelayDriver : NSObject
{
}

+ (id)sharedInstance;
- (void)dealloc;
- (id)init;
- (void)stopMonitoringFileDescriptor:(int)arg1;
- (void)startMonitoringFileDescriptor:(int)arg1 forConnection:(id)arg2;

@end
