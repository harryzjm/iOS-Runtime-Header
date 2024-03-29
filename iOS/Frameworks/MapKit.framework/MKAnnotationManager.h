//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class MKAnnotationView, MKQuadTrie, NSArray, NSHashTable, NSMapTable, NSMutableDictionary, NSMutableSet, NSTimer;
@protocol MKAnnotation, MKAnnotationManagerDelegate, MKAnnotationMarkerContainer, MKAnnotationRepresentation;

__attribute__((visibility("hidden")))
@interface MKAnnotationManager : NSObject
{
    id <MKAnnotationMarkerContainer> _container;
    id <MKAnnotationManagerDelegate> _delegate;
    _Bool _annotationRepresentationsAreAddedImmediately;
    NSTimer *_updateVisibleTimer;
    MKQuadTrie *_annotations;
    NSHashTable *_visibleAnnotations;
    NSMutableSet *_pendingAnnotations;
    NSMutableSet *_disallowAnimationAnnotations;
    NSMutableSet *_invalidCoordinateAnnotations;
    id <MKAnnotation> _selectedAnnotation;
    id <MKAnnotation> _draggedAnnotation;
    NSMapTable *_annotationsToRepresentations;
    NSMutableSet *_annotationRepresentations;
    NSMapTable *_reusableAnnotationRepresentations;
    NSMutableSet *_pendingRemovalAnnotationRepresentations;
    NSMutableDictionary *_registeredIdentifierToRepresentationClasses;
    NSHashTable *_allClusterAnnotations;
    _Bool _isChangingCoordinate;
    _Bool _isDeferringContainerSelection;
    _Bool _deferredContainerSelectionAnimated;
    MKAnnotationView *_userLocationView;
}

- (void).cxx_destruct;
@property(nonatomic) __weak id <MKAnnotation> draggedAnnotation; // @synthesize draggedAnnotation=_draggedAnnotation;
@property(nonatomic) _Bool annotationRepresentationsAreAddedImmediately; // @synthesize annotationRepresentationsAreAddedImmediately=_annotationRepresentationsAreAddedImmediately;
@property(nonatomic) __weak id <MKAnnotationManagerDelegate> delegate; // @synthesize delegate=_delegate;
@property(nonatomic) __weak id <MKAnnotationMarkerContainer> container; // @synthesize container=_container;
- (void)observeValueForKeyPath:(id)arg1 ofObject:(id)arg2 change:(id)arg3 context:(void *)arg4;
- (void)_removeRepresentationForAnnotation:(id)arg1 fromCull:(_Bool)arg2;
- (void)cleanUpAnnotationRepresentationForRemoval:(id)arg1;
- (id)_addRepresentationForAnnotation:(id)arg1;
- (void)configureDefaultAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (void)configureAnnotationRepresentation:(id)arg1 forAnnotation:(id)arg2;
- (id)newInternalAnnotationRepresentationForInternalAnnotation:(id)arg1;
- (_Bool)annotationIsInternal:(id)arg1;
- (id)representationForAnnotation:(id)arg1;
@property(readonly, nonatomic) __weak id <MKAnnotationRepresentation> selectedAnnotationRepresentation;
- (void)deselectAnnotation:(id)arg1 animated:(_Bool)arg2;
- (void)_annotationDidChangeState:(id)arg1 animated:(_Bool)arg2;
- (void)selectAnnotation:(id)arg1 animated:(_Bool)arg2;
@property(readonly, nonatomic) NSArray *annotationRepresentations;
@property(readonly, nonatomic) NSArray *annotations;
- (void)updateVisibleAnnotations;
- (void)showAnnotationsInMapRect:(CDStruct_02837cd9)arg1;
- (id)annotationsInMapRect:(CDStruct_02837cd9)arg1;
- (_Bool)containsAnnotation:(id)arg1;
- (void)registerClass:(Class)arg1 forRepresentationReuseIdentifier:(id)arg2;
- (id)dequeueReusableAnnotationRepresentationWithIdentifier:(id)arg1;
- (void)addRepresentationsForAnnotations:(id)arg1;
- (void)replaceAnnotation:(id)arg1 withAnnotation:(id)arg2;
- (void)removeAnnotations:(id)arg1;
- (void)removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2;
- (void)removeAnnotation:(id)arg1;
- (void)_removeAnnotation:(id)arg1 updateVisible:(_Bool)arg2 removeFromContainer:(_Bool)arg3;
- (id)addRepresentationForAnnotation:(id)arg1;
- (void)addAnnotations:(id)arg1;
- (void)addAnnotation:(id)arg1 allowAnimation:(_Bool)arg2;
- (void)addAnnotation:(id)arg1;
- (void)_addAnnotation:(id)arg1 updateVisible:(_Bool)arg2;
- (void)_setupUpdateVisibleAnnotationsTimer;
- (void)dealloc;
- (id)init;

@end

