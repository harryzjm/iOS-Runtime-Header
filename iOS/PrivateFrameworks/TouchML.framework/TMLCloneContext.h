//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class JSContext, JSValue, NSString, TMLMetaContext, TMLMetaObject;

@interface TMLCloneContext : NSObject
{
    TMLMetaContext *_metaContext;
    JSContext *_jsContext;
    JSValue *_apiObject;
    NSString *_apiObjectKey;
}

@property(copy, nonatomic) NSString *apiObjectKey; // @synthesize apiObjectKey=_apiObjectKey;
@property(nonatomic) JSValue *apiObject; // @synthesize apiObject=_apiObject;
@property(nonatomic) JSContext *jsContext; // @synthesize jsContext=_jsContext;
@property(readonly, nonatomic) TMLMetaContext *metaContext; // @synthesize metaContext=_metaContext;
- (void).cxx_destruct;
@property(readonly, nonatomic) TMLMetaObject *rootObject;
- (id)initWithMetaContext:(id)arg1;

@end
