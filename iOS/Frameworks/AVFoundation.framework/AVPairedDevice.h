//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AVPairedDeviceInternal, NSString;

@interface AVPairedDevice : NSObject
{
    AVPairedDeviceInternal *_ivars;
}

+ (id)pairedDevicesConnectedToOutputDevice:(id)arg1;
@property(readonly, nonatomic) NSString *productName;
@property(readonly, nonatomic, getter=isPlaying) _Bool playing;
@property(readonly, nonatomic) NSString *modelID;
- (id)ID;
@property(readonly, nonatomic) NSString *pairedDeviceID;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)initWithName:(id)arg1 ID:(id)arg2 modelID:(id)arg3 playing:(_Bool)arg4 productName:(id)arg5;

@end

