//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSArray, NSDictionary, NSError, XCAXCycleDetector, XCAccessibilityElement, XCElementSnapshot, XCTAccessibilitySnapshot_iOS, XCTTimeoutControls;
@protocol NSCopying, OS_dispatch_queue, XCTAccessibilityFramework, XCTMacCatalystStatusProviding;

@interface XCTElementSnapshotRequest : NSObject
{
    _Bool _preserveRemoteElementPlaceholders;
    _Bool _loadResult;
    _Bool _hasLoaded;
    id <XCTAccessibilityFramework> _accessibilityFramework;
    XCAccessibilityElement *_element;
    NSArray *_attributes;
    NSDictionary *_parameters;
    XCElementSnapshot *_elementSnapshot;
    id <NSCopying> _accessibilitySnapshot;
    XCTTimeoutControls *_timeoutControls;
    XCAXCycleDetector *_cycleDetector;
    id <XCTMacCatalystStatusProviding> _macCatalystStatusProvider;
    NSObject<OS_dispatch_queue> *_queue;
    NSError *_loadError;
}

- (void).cxx_destruct;
@property(retain) NSError *loadError; // @synthesize loadError=_loadError;
@property _Bool hasLoaded; // @synthesize hasLoaded=_hasLoaded;
@property _Bool loadResult; // @synthesize loadResult=_loadResult;
@property(readonly) NSObject<OS_dispatch_queue> *queue; // @synthesize queue=_queue;
@property _Bool preserveRemoteElementPlaceholders; // @synthesize preserveRemoteElementPlaceholders=_preserveRemoteElementPlaceholders;
@property(retain) id <XCTMacCatalystStatusProviding> macCatalystStatusProvider; // @synthesize macCatalystStatusProvider=_macCatalystStatusProvider;
@property(retain) XCAXCycleDetector *cycleDetector; // @synthesize cycleDetector=_cycleDetector;
@property(readonly) XCTTimeoutControls *timeoutControls; // @synthesize timeoutControls=_timeoutControls;
@property(copy) id <NSCopying> accessibilitySnapshot; // @synthesize accessibilitySnapshot=_accessibilitySnapshot;
@property(retain) XCElementSnapshot *elementSnapshot; // @synthesize elementSnapshot=_elementSnapshot;
@property(copy) NSDictionary *parameters; // @synthesize parameters=_parameters;
@property(readonly) NSArray *attributes; // @synthesize attributes=_attributes;
@property(readonly) XCAccessibilityElement *element; // @synthesize element=_element;
@property(readonly) id <XCTAccessibilityFramework> accessibilityFramework; // @synthesize accessibilityFramework=_accessibilityFramework;
- (_Bool)loadSnapshotAndReturnError:(id *)arg1;
- (id)initWithAccessibilityFramework:(id)arg1 element:(id)arg2 attributes:(id)arg3 parameters:(id)arg4 timeoutControls:(id)arg5;
- (id)initWithAccessibilityFramework:(id)arg1 element:(id)arg2 attributes:(id)arg3 parameters:(id)arg4;
- (id)elementSnapshotOrError:(id *)arg1;
- (id)accessibilitySnapshotOrError:(id *)arg1;
- (id)safeParametersForParameters:(id)arg1;
- (id)_snapshotFromUserTestingSnapshot:(id)arg1 frameTransformer:(CDUnknownBlockType)arg2 error:(id *)arg3;
- (id)_childrenOfElement:(id)arg1 userTestingSnapshot:(id)arg2 frameTransformer:(CDUnknownBlockType)arg3 outError:(id *)arg4;
- (id)_snapshotFromRemoteElementUserTestingSnapshot:(id)arg1 parentElement:(id)arg2 error:(id *)arg3;
@property(readonly) XCTAccessibilitySnapshot_iOS *accessibilitySnapshot_iOS;

@end
