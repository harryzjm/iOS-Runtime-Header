//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <Silex/SXJSONObjectMergerClassProviding-Protocol.h>

@class NSString;

@interface SXJSONObjectMergerClassProvider : NSObject <SXJSONObjectMergerClassProviding>
{
    Class _objectClass;
}

- (void).cxx_destruct;
@property(readonly, nonatomic) Class objectClass; // @synthesize objectClass=_objectClass;
- (Class)classForObject:(id)arg1 specVersion:(id)arg2;
- (id)initWithObjectClass:(Class)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
