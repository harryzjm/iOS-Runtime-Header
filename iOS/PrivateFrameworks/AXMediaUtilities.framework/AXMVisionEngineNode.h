//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AXMediaUtilities/AXMDescribing-Protocol.h>
#import <AXMediaUtilities/NSSecureCoding-Protocol.h>

@class NSString;
@protocol AXMVisionEngineNodeConnectionDelegate, OS_dispatch_queue;

@interface AXMVisionEngineNode : NSObject <NSSecureCoding, AXMDescribing>
{
    _Bool _connected;
    _Bool _enabled;
    id <AXMVisionEngineNodeConnectionDelegate> _delegate;
    NSString *_identifier;
    NSObject<OS_dispatch_queue> *_nodeQueue;
}

+ (_Bool)supportsSecureCoding;
+ (id)title;
+ (_Bool)isSupported;
@property(retain, nonatomic) NSObject<OS_dispatch_queue> *nodeQueue; // @synthesize nodeQueue=_nodeQueue;
@property(nonatomic, getter=isEnabled) _Bool enabled; // @synthesize enabled=_enabled;
@property(copy, nonatomic) NSString *identifier; // @synthesize identifier=_identifier;
@property(nonatomic) __weak id <AXMVisionEngineNodeConnectionDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic, getter=isConnected) _Bool connected; // @synthesize connected=_connected;
- (void).cxx_destruct;
- (void)axmAppendRecursiveDescription:(id)arg1 withIndentation:(long long)arg2;
- (id)axmDescription;
- (void)disconnect;
- (void)connect:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (_Bool)validateVisionKitSoftLinkSymbols;
- (void)freeResources;
- (void)nodeInitialize;
- (id)initWithIdentifier:(id)arg1;
@property(readonly, nonatomic) _Bool requiresVisionFramework;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

