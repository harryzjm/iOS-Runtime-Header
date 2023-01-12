//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

#import <SpringBoardHome/BSDescriptionProviding-Protocol.h>
#import <SpringBoardHome/BSInvalidatable-Protocol.h>

@class NSString, SBHPageManagementCellDragPreview;

@interface SBHPageManagementCellDragPreviewDelayCleanupAssertion : NSObject <BSInvalidatable, BSDescriptionProviding>
{
    _Bool _invalidated;
    SBHPageManagementCellDragPreview *_dragPreview;
    NSString *_reason;
}

- (void).cxx_destruct;
@property(nonatomic, getter=isInvalidated) _Bool invalidated; // @synthesize invalidated=_invalidated;
@property(readonly, copy, nonatomic) NSString *reason; // @synthesize reason=_reason;
@property(readonly, nonatomic) __weak SBHPageManagementCellDragPreview *dragPreview; // @synthesize dragPreview=_dragPreview;
- (id)descriptionBuilderWithMultilinePrefix:(id)arg1;
- (id)descriptionWithMultilinePrefix:(id)arg1;
- (id)succinctDescriptionBuilder;
- (id)succinctDescription;
@property(readonly, copy) NSString *description;
- (void)invalidate;
- (void)dealloc;
- (id)initWithDragPreview:(id)arg1 reason:(id)arg2;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end
