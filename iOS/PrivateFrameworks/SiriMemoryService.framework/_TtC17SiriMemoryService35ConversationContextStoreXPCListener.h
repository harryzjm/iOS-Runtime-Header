//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MISSING_TYPE;

__attribute__((visibility("hidden")))
@interface _TtC17SiriMemoryService35ConversationContextStoreXPCListener : NSObject
{
    MISSING_TYPE *module;
    MISSING_TYPE *listener;
}

- (void).cxx_destruct;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)removeWithKey:(id)arg1 for:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)queryWithKeys:(id)arg1 for:(id)arg2 completionHandler:(CDUnknownBlockType)arg3;
- (void)donateWithData:(id)arg1 key:(id)arg2 for:(id)arg3 completionHandler:(CDUnknownBlockType)arg4;
- (id)init;

@end

