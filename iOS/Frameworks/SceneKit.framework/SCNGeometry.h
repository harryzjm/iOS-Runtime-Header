//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <Foundation/NSObject.h>

#import <SceneKit/NSCopying-Protocol.h>
#import <SceneKit/NSSecureCoding-Protocol.h>
#import <SceneKit/SCNAnimatable-Protocol.h>
#import <SceneKit/SCNBoundingVolume-Protocol.h>
#import <SceneKit/SCNShadable-Protocol.h>

@class MISSING_TYPE, NSArray, NSDictionary, NSMutableArray, NSMutableDictionary, NSString, SCNGeometryElement, SCNGeometrySource, SCNMaterial, SCNOrderedDictionary, SCNProgram, SCNShadableHelper;

@interface SCNGeometry : NSObject <SCNAnimatable, SCNBoundingVolume, SCNShadable, NSCopying, NSSecureCoding>
{
    struct __C3DGeometry *_geometry;
    unsigned int _isPresentationInstance:1;
    NSMutableArray *_sources;
    NSMutableArray *_elements;
    NSArray *_sourceChannels;
    NSMutableArray *_materials;
    SCNOrderedDictionary *_animations;
    NSMutableDictionary *_bindings;
    NSArray *_levelsOfDetail;
    unsigned long long _subdivisionLevel;
    _Bool _subdivisionIsAdaptive;
    CDStruct_4c02ed10 _subdivisionSettings;
    SCNGeometrySource *_edgeCreasesSource;
    SCNGeometryElement *_edgeCreasesElement;
    SCNShadableHelper *_shadableHelper;
    struct SCNVector3 *_fixedBoundingBoxExtrema;
    NSString *_name;
    NSMutableDictionary *_valuesForUndefinedKeys;
}

+ (_Bool)supportsSecureCoding;
+ (_Bool)resolveInstanceMethod:(SEL)arg1;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2 sourceChannels:(id)arg3;
+ (id)geometryWithSources:(id)arg1 elements:(id)arg2;
+ (id)geometry;
+ (id)geometryWithGeometryRef:(struct __C3DGeometry *)arg1;
+ (id)morpherWithMDLMesh:(id)arg1;
+ (id)geometryWithMDLMesh:(id)arg1;
+ (id)geometryWithMDLMesh:(id)arg1 submesh:(id)arg2;
+ (id)floorWithOptions:(id)arg1;
+ (id)torusWithRingRadius:(double)arg1 pipeRadius:(double)arg2 options:(id)arg3;
+ (id)capsuleWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)tubeWithInnerRadius:(double)arg1 outerRadius:(double)arg2 height:(double)arg3 options:(id)arg4;
+ (id)coneWithHeight:(double)arg1 topRadius:(double)arg2 bottomRadius:(double)arg3 options:(id)arg4;
+ (id)cylinderWithRadius:(double)arg1 height:(double)arg2 options:(id)arg3;
+ (id)sphereWithRadius:(double)arg1 options:(id)arg2;
+ (id)pyramidWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 options:(id)arg4;
+ (id)boxWithWidth:(double)arg1 height:(double)arg2 length:(double)arg3 cornerRadius:(double)arg4 options:(id)arg5;
+ (id)planeWithWidth:(double)arg1 height:(double)arg2 options:(id)arg3;
- (id)initWithCoder:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (struct __C3DGeometry *)__createCFObject;
- (void)_customDecodingOfSCNGeometry:(id)arg1;
- (void)_customEncodingOfSCNGeometry:(id)arg1;
- (void)unbindAnimatablePath:(id)arg1;
- (void)bindAnimatablePath:(id)arg1 toObject:(id)arg2 withKeyPath:(id)arg3 options:(id)arg4;
- (id)_scnBindings;
- (_Bool)isAnimationForKeyPaused:(id)arg1;
- (void)setSpeed:(double)arg1 forAnimationKey:(id)arg2;
- (void)removeAnimationForKey:(id)arg1 fadeOutDuration:(double)arg2;
- (void)removeAnimationForKey:(id)arg1 blendOutDuration:(double)arg2;
- (void)resumeAnimationForKey:(id)arg1;
- (void)pauseAnimationForKey:(id)arg1;
- (void)_pauseAnimation:(_Bool)arg1 forKey:(id)arg2 pausedByNode:(_Bool)arg3;
- (id)animationPlayerForKey:(id)arg1;
- (void)_copyAnimationsFrom:(id)arg1;
- (id)_scnAnimationForKey:(id)arg1;
- (id)animationForKey:(id)arg1;
- (void)_syncObjCAnimations;
@property(readonly) NSArray *animationKeys;
- (void)removeAnimationForKey:(id)arg1;
- (void)removeAllAnimations;
- (void)addAnimation:(id)arg1;
- (void)addAnimation:(id)arg1 forKey:(id)arg2;
- (void)addAnimationPlayer:(id)arg1 forKey:(id)arg2;
- (_Bool)__removeAnimation:(id)arg1 forKey:(id)arg2;
- (struct __C3DAnimationManager *)animationManager;
- (const void *)__CFObject;
@property(retain, nonatomic) SCNProgram *program;
- (void)handleUnbindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (void)handleBindingOfSymbol:(id)arg1 usingBlock:(CDUnknownBlockType)arg2;
- (id)shaderModifiersArgumentsNames;
@property(copy, nonatomic) NSDictionary *shaderModifiers;
- (void)_setupShadableHelperIfNeeded;
- (id)customMaterialAttributes;
- (id)customMaterialAttributeNames;
- (id)customMaterialProperties;
- (id)customMaterialPropertyNames;
- (void)_shadableSetValue:(id)arg1 forUndefinedKey:(id)arg2;
- (id)valueForUndefinedKey:(id)arg1;
- (void)setValue:(id)arg1 forUndefinedKey:(id)arg2;
- (void)_unifyNormals;
- (struct __C3DMaterial *)materialRef;
- (struct __C3DMaterial *)materialRefCreateIfNeeded;
@property(retain, nonatomic) SCNGeometrySource *edgeCreasesSource;
@property(retain, nonatomic) SCNGeometryElement *edgeCreasesElement;
@property(nonatomic) _Bool wantsAdaptiveSubdivision;
@property(nonatomic) unsigned long long subdivisionLevel;
- (void)set_subdivisionSettings:(CDStruct_4c02ed10)arg1;
- (CDStruct_4c02ed10)_subdivisionSettings;
@property(copy, nonatomic) NSArray *levelsOfDetail;
- (id)copyAnimationChannelForKeyPath:(id)arg1 animation:(id)arg2;
- (_Bool)parseSpecialKey:(id)arg1 withPath:(id)arg2 intoDestination:(id *)arg3 remainingPath:(id *)arg4;
- (void)setPrimitiveType:(long long)arg1;
- (long long)primitiveType;
- (void)setMaterial:(id)arg1;
- (id)material;
@property(copy, nonatomic) NSArray *materials;
- (void)removeAllMaterials;
- (void)replaceMaterial:(id)arg1 with:(id)arg2;
- (void)replaceMaterialAtIndex:(unsigned long long)arg1 withMaterial:(id)arg2;
- (void)removeMaterialAtIndex:(unsigned long long)arg1;
- (void)removeMaterial:(id)arg1;
- (void)insertMaterial:(id)arg1 atIndex:(unsigned long long)arg2;
@property(retain, nonatomic) SCNMaterial *firstMaterial;
- (id)_firstMaterial;
- (id)mutableMaterials;
- (void)replaceObjectInMaterialsAtIndex:(unsigned long long)arg1 withObject:(id)arg2;
- (void)removeObjectFromMaterialsAtIndex:(unsigned long long)arg1;
- (void)insertObject:(id)arg1 inMaterialsAtIndex:(unsigned long long)arg2;
- (id)objectInMaterialsAtIndex:(unsigned long long)arg1;
- (unsigned long long)countOfMaterials;
- (id)materialWithName:(id)arg1;
- (id)_materialWithName:(id)arg1;
- (void)_expand;
- (id)keyForNodeAttributes;
- (id)scene;
- (struct __C3DScene *)sceneRef;
- (id)_renderableCopy;
- (id)interleavedCopy;
- (id)mutableCopy;
- (id)copy;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)_setupObjCModelFrom:(id)arg1;
- (void)_setAttributes:(id)arg1;
- (id)getBoundingBox;
- (id)getBoundingSphere;
- (_Bool)simdGetBoundingSphereCenter:(MISSING_TYPE **)arg1 radius:(float *)arg2;
- (_Bool)getBoundingSphereCenter:(struct SCNVector3 *)arg1 radius:(double *)arg2;
- (void)setBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (_Bool)getBoundingBoxMin:(struct SCNVector3 *)arg1 max:(struct SCNVector3 *)arg2;
- (_Bool)_hasFixedBoundingBoxExtrema;
- (id)geometryElementAtIndex:(long long)arg1;
@property(readonly, nonatomic) long long geometryElementCount;
@property(readonly, nonatomic) NSArray *geometryElements;
- (id)geometrySourceForSemantic:(id)arg1;
- (id)geometrySourcesForSemantic:(id)arg1;
- (id)geometrySourceChannels;
@property(readonly, nonatomic) NSArray *geometrySources;
- (void)_setupGeometryElements;
- (void)_setupGeometrySources;
- (void)_releaseCachedSourcesAndElements;
- (_Bool)isPausedOrPausedByInheritance;
- (id)presentationInstance;
- (id)presentationGeometry;
- (void)setGeometryRef:(struct __C3DGeometry *)arg1;
- (void)_setGeometryRef:(struct __C3DGeometry *)arg1;
- (struct __C3DGeometry *)geometryRef;
@property(readonly, copy) NSString *description;
- (id)geometryDescription;
- (void)_syncObjCModel;
- (void)_syncEntityObjCModel;
- (id)identifier;
- (void)setIdentifier:(id)arg1;
@property(copy, nonatomic) NSString *name;
- (_Bool)isPresentationInstance;
- (void)dealloc;
- (id)initPresentationGeometryWithGeometryRef:(struct __C3DGeometry *)arg1;
- (id)initWithGeometryRef:(struct __C3DGeometry *)arg1;
- (id)init;
- (void)setValueForKey:(id)arg1 optionKey:(id)arg2 options:(id)arg3;
- (id)_geometryByWeldingVerticesWithThreshold:(double)arg1 normalThreshold:(double)arg2;
- (void)_discardOriginalTopology;
- (id)_geometryByRemovingSkinnerSources;
- (id)_geometryByAddingSourcesOfSkinner:(id)arg1;
- (id)_geometryByUnifyingNormalsWithCreaseThreshold:(double)arg1;
- (id)debugQuickLookData;
- (id)debugQuickLookObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

