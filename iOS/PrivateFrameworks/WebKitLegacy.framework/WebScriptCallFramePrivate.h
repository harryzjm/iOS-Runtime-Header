//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class WebScriptObject;

__attribute__((visibility("hidden")))
@interface WebScriptCallFramePrivate : NSObject
{
    WebScriptObject *globalObject;
    struct String functionName;
    struct JSValue exceptionValue;
}

- (id).cxx_construct;
- (void).cxx_destruct;
- (void)dealloc;

@end

