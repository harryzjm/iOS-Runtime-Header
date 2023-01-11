//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <AccessibilityUIUtilities/AXDragEndpointVendorDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXDragSessionDelegate-Protocol.h>
#import <AccessibilityUIUtilities/AXDragSessionDragManager-Protocol.h>
#import <AccessibilityUIUtilities/NSXPCListenerDelegate-Protocol.h>

@class AXDispatchTimer, AXDragEndpointVendor, AXDragSession, NSMutableArray, NSString, NSXPCListener;
@protocol AXDragManagerDelegate, OS_dispatch_queue;

@interface AXDragManager : NSObject <AXDragEndpointVendorDelegate, NSXPCListenerDelegate, AXDragSessionDragManager, AXDragSessionDelegate>
{
    AXDragEndpointVendor *_vendor;
    NSXPCListener *_endpointListener;
    NSMutableArray *_activeSessions;
    NSObject<OS_dispatch_queue> *_dragStateQueue;
    int _pidForDrag;
    id <AXDragManagerDelegate> _delegate;
    NSString *_machServiceName;
    CDUnknownBlockType _dragStartCompletionHandler;
    AXDispatchTimer *_dragStartTimer;
    AXDragSession *_dragSession;
}

@property(retain, nonatomic) AXDragSession *dragSession; // @synthesize dragSession=_dragSession;
@property(retain, nonatomic) AXDispatchTimer *dragStartTimer; // @synthesize dragStartTimer=_dragStartTimer;
@property(copy, nonatomic) CDUnknownBlockType dragStartCompletionHandler; // @synthesize dragStartCompletionHandler=_dragStartCompletionHandler;
@property(nonatomic) int pidForDrag; // @synthesize pidForDrag=_pidForDrag;
@property(readonly, nonatomic) NSString *machServiceName; // @synthesize machServiceName=_machServiceName;
@property(nonatomic) __weak id <AXDragManagerDelegate> delegate; // @synthesize delegate=_delegate;
- (void).cxx_destruct;
- (void)dragSessionWasTerminated:(id)arg1;
- (void)dragSessionEnded:(id)arg1 withOperation:(unsigned long long)arg2;
- (void)dragSessionChanged:(id)arg1 toStatus:(id)arg2;
- (void)dragSession:(id)arg1 movedToPoint:(struct CGPoint)arg2 byRequestor:(id)arg3;
- (void)moveToAndDropAtPoint:(struct CGPoint)arg1;
- (void)drop;
- (void)moveToPoint:(struct CGPoint)arg1;
- (void)cancelDrag;
@property(readonly, nonatomic) _Bool isDragActive;
- (void)waitForDragStartFromPid:(int)arg1 completionHandler:(CDUnknownBlockType)arg2;
- (id)endpointForRequestingConnection:(id)arg1 fromEndpointVendor:(id)arg2;
- (_Bool)_shouldAllowEndpointVendForRequestingConnection:(id)arg1;
- (_Bool)listener:(id)arg1 shouldAcceptNewConnection:(id)arg2;
- (void)sessionWasTerminated:(id)arg1;
- (id)initWithMachServiceName:(id)arg1;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
