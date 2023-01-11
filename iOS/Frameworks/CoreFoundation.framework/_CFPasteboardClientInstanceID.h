//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@protocol OS_xpc_object;

__attribute__((visibility("hidden")))
@interface _CFPasteboardClientInstanceID : NSObject
{
    const struct __CFUUID *_uuid;
    NSObject<OS_xpc_object> *_conn;
}

@property(readonly) NSObject<OS_xpc_object> *connection; // @synthesize connection=_conn;
@property(readonly) const struct __CFUUID *uuid; // @synthesize uuid=_uuid;
- (id)description;
- (void)dealloc;
- (id)initWithConnection:(id)arg1;

@end

