//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <XCTAutomationSupport/XCTAccessibilityFramework-Protocol.h>

@class NSString;

@interface XCTAccessibilityFramework : NSObject <XCTAccessibilityFramework>
{
    _Bool _allowsRemoteAccess;
    int _processID;
    struct __AXUIElement *_systemWideElement;
}

@property struct __AXUIElement *systemWideElement; // @synthesize systemWideElement=_systemWideElement;
@property(readonly) int processID; // @synthesize processID=_processID;
@property(readonly) _Bool allowsRemoteAccess; // @synthesize allowsRemoteAccess=_allowsRemoteAccess;
- (void)performWithAXTimeout:(double)arg1 block:(CDUnknownBlockType)arg2;
- (id)attributes:(id)arg1 forElement:(struct __AXUIElement *)arg2 error:(id *)arg3;
- (long long)appOrientationForElement:(struct __AXUIElement *)arg1 error:(id *)arg2;
- (struct CGRect)frameForElement:(struct __AXUIElement *)arg1 error:(id *)arg2;
- (struct __AXUIElement *)mainWindowForElement:(struct __AXUIElement *)arg1 error:(id *)arg2;
- (id)userTestingSnapshotForElement:(struct __AXUIElement *)arg1 options:(id)arg2 error:(id *)arg3;
- (void)_setAXRequestingClient;
- (id)_displayStringForAXUIElementProcess:(struct __AXUIElement *)arg1;
- (id)attributesForElement:(id)arg1 attributes:(id)arg2 error:(id *)arg3;
- (_Bool)PIDForAXUIElement:(struct __AXUIElement *)arg1 PID:(int *)arg2 error:(id *)arg3;
- (_Bool)_canAccessElement:(struct __AXUIElement *)arg1 withError:(id *)arg2;
- (void)dealloc;
- (id)initForLocalAccess;
- (id)initForRemoteAccess;
- (id)initAllowingRemoteAccess:(_Bool)arg1 processID:(int)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

