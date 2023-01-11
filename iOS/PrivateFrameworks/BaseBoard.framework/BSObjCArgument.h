//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <BaseBoard/BSDescriptionProviding-Protocol.h>

@class NSArray, NSString;

@interface BSObjCArgument : NSObject <BSDescriptionProviding>
{
    NSString *_encoding;
    unsigned long long _size;
    BOOL _type;
    _Bool _onewayVoid;
    _Bool _plistObject;
    Class _objectClass;
    NSString *_structName;
    NSArray *_protocols;
    NSArray *_containedClasses;
    NSString *_name;
    long long _index;
}

- (void).cxx_destruct;
@property(readonly, nonatomic, getter=isPlistObject) _Bool plistObject; // @synthesize plistObject=_plistObject;
@property(readonly, nonatomic, getter=isOnewayVoid) _Bool onewayVoid; // @synthesize onewayVoid=_onewayVoid;
@property(readonly, nonatomic) long long index; // @synthesize index=_index;
@property(readonly, copy, nonatomic) NSString *name; // @synthesize name=_name;
@property(readonly, retain, nonatomic) NSArray *containedClasses; // @synthesize containedClasses=_containedClasses;
@property(readonly, copy, nonatomic) NSArray *protocols; // @synthesize protocols=_protocols;
@property(readonly, copy, nonatomic) NSString *structName; // @synthesize structName=_structName;
@property(readonly, retain, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (id)_prettyTypeString;
@property(readonly, nonatomic, getter=isPointer) _Bool pointer;
@property(readonly, nonatomic, getter=isBlock) _Bool block;
@property(readonly, nonatomic, getter=isXPCObject) _Bool xpcObject;
@property(readonly, nonatomic, getter=isObject) _Bool object;
@property(readonly, nonatomic, getter=isVoid) _Bool isVoid;
@property(readonly, nonatomic, getter=isBoolean) _Bool boolean;
@property(readonly, nonatomic) unsigned long long size;
@property(readonly, nonatomic) BOOL type;
@property(readonly, copy, nonatomic) NSString *encoding;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
