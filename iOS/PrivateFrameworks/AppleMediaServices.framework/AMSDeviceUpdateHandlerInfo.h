//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AMSDeviceMessengerFilter;

__attribute__((visibility("hidden")))
@interface AMSDeviceUpdateHandlerInfo : NSObject
{
    AMSDeviceMessengerFilter *_filter;
    CDUnknownBlockType _block;
}

- (void).cxx_destruct;
@property(copy, nonatomic) CDUnknownBlockType block; // @synthesize block=_block;
@property(retain, nonatomic) AMSDeviceMessengerFilter *filter; // @synthesize filter=_filter;

@end

