//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSXPCListener, RMToolServerDelegate;

@interface RMToolServer : NSObject
{
    NSXPCListener *_listener;
    RMToolServerDelegate *_delegate;
}

@property(retain, nonatomic) RMToolServerDelegate *delegate; // @synthesize delegate=_delegate;
@property(retain, nonatomic) NSXPCListener *listener; // @synthesize listener=_listener;
- (void).cxx_destruct;
- (id)initWithTarget:(id)arg1;

@end

