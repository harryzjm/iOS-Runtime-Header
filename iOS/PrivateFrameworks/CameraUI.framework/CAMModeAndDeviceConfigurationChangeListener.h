//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface CAMModeAndDeviceConfigurationChangeListener : NSObject
{
    long long _desiredMode;
    long long _desiredDevicePosition;
    CDUnknownBlockType _handler;
}

@property(copy, nonatomic) CDUnknownBlockType handler; // @synthesize handler=_handler;
@property(nonatomic) long long desiredDevicePosition; // @synthesize desiredDevicePosition=_desiredDevicePosition;
@property(nonatomic) long long desiredMode; // @synthesize desiredMode=_desiredMode;
- (void).cxx_destruct;

@end

