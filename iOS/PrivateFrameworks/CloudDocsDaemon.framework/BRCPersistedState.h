//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <CloudDocsDaemon/NSObject-Protocol.h>
#import <CloudDocsDaemon/NSSecureCoding-Protocol.h>

@class NSString;
@protocol OS_dispatch_queue;

__attribute__((visibility("hidden")))
@interface BRCPersistedState : NSObject <NSObject, NSSecureCoding>
{
    NSObject<OS_dispatch_queue> *_assertionQueue;
}

+ (id)loadFromClientStateInSession:(id)arg1;
+ (id)loadFromClientStateInSession:(id)arg1 options:(id)arg2;
+ (_Bool)supportsSecureCoding;
@property(nonatomic) __weak NSObject<OS_dispatch_queue> *assertionQueue; // @synthesize assertionQueue=_assertionQueue;
- (void).cxx_destruct;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (void)assertQueue;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

