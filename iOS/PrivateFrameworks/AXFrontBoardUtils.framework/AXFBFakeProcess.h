//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class AXFBFakeProcessState, NSString;

@interface AXFBFakeProcess : NSObject
{
    AXFBFakeProcessState *_state;
    NSString *_bundleIdentifier;
}

- (void).cxx_destruct;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) AXFBFakeProcessState *state; // @synthesize state=_state;

@end
