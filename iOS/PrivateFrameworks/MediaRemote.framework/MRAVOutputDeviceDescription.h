//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface MRAVOutputDeviceDescription : NSObject
{
    unsigned int _deviceType;
    unsigned int _deviceSubtype;
    NSString *_uid;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) NSString *uid; // @synthesize uid=_uid;
@property(readonly, nonatomic) unsigned int deviceSubtype; // @synthesize deviceSubtype=_deviceSubtype;
@property(readonly, nonatomic) unsigned int deviceType; // @synthesize deviceType=_deviceType;
- (id)initWithDeviceType:(unsigned int)arg1 deviceSubtype:(unsigned int)arg2 uid:(id)arg3;

@end
