//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableSet, NSString, _UIEventDeferringDescriptor, _UIEventDeferringOwnershipToken;
@protocol BSInvalidatable;

__attribute__((visibility("hidden")))
@interface _UIEventDeferringRecord : NSObject
{
    NSMutableSet *_recreationReasons;
    _UIEventDeferringDescriptor *_descriptor;
    id <BSInvalidatable> _invalidationToken;
    _UIEventDeferringOwnershipToken *_deferringToken;
    void *_recordingManagerPointer;
}

- (void).cxx_destruct;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)debugDescriptionWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
- (id)init;

// Remaining properties
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

