//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@interface WebScriptObjectPrivate : NSObject
{
    struct JSObject *imp;
    struct RootObject *rootObject;
    struct RootObject *originRootObject;
    _Bool isCreatedByDOMWrapper;
}

@end

