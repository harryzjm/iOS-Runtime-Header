//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol XCUIDevice;

@interface XCUISystem : NSObject
{
    id <XCUIDevice> _device;
}

- (void).cxx_destruct;
@property(readonly) __weak id <XCUIDevice> device; // @synthesize device=_device;
- (void)openURL:(id)arg1;
- (id)initWithDevice:(id)arg1;

@end

