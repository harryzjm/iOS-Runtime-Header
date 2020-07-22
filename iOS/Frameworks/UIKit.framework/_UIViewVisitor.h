//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

__attribute__((visibility("hidden")))
@interface _UIViewVisitor : NSObject
{
    _Bool _visitMaskViews;
    _Bool _tracksHierarchy;
    _Bool __currentlyVisitingHierarchy;
    unsigned long long _traversalDirection;
}

+ (void)_startTraversalOfVisitor:(id)arg1 withView:(id)arg2;
+ (void)_removeHierarchyTrackingVisitor:(id)arg1;
+ (void)_addHierarchyTrackingVisitor:(id)arg1;
@property(readonly, nonatomic) unsigned long long traversalDirection; // @synthesize traversalDirection=_traversalDirection;
@property(nonatomic) _Bool _currentlyVisitingHierarchy; // @synthesize _currentlyVisitingHierarchy=__currentlyVisitingHierarchy;
@property(nonatomic) _Bool tracksHierarchy; // @synthesize tracksHierarchy=_tracksHierarchy;
@property(nonatomic) _Bool visitMaskViews; // @synthesize visitMaskViews=_visitMaskViews;
- (_Bool)_prepareVisitor:(id)arg1 toVisitView:(id)arg2 changedSubview:(id)arg3 previousWindow:(id)arg4 previousSuperview:(id)arg5;
- (_Bool)_visitView:(id)arg1;
- (id)initWithTraversalDirection:(unsigned long long)arg1;

@end

