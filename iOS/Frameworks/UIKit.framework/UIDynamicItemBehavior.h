//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSArray, NSMapTable;

@interface UIDynamicItemBehavior
{
    _Bool _useDefaultViewPropertiesApplier;
    struct {
        unsigned int elasticityChanged:1;
        unsigned int frictionChanged:1;
        unsigned int densityChanged:1;
        unsigned int resistanceChanged:1;
        unsigned int angularResistanceChanged:1;
        unsigned int rotationEnabledChanged:1;
        unsigned int useDefaultViewPropertiesApplierChanged:1;
        unsigned int chargeChanged:1;
        unsigned int dynamicChanged:1;
    } _stateFlags;
    NSMapTable *_cachedAngularVelocities;
    NSMapTable *_cachedLinearVelocities;
    _Bool _anchored;
    _Bool _allowsRotation;
    double _elasticity;
    double _friction;
    double _density;
    double _resistance;
    double _angularResistance;
    double _charge;
}

+ (_Bool)_isPrimitiveBehavior;
@property(nonatomic) _Bool allowsRotation; // @synthesize allowsRotation=_allowsRotation;
@property(nonatomic, getter=isAnchored) _Bool anchored; // @synthesize anchored=_anchored;
@property(nonatomic) double charge; // @synthesize charge=_charge;
@property(nonatomic) double angularResistance; // @synthesize angularResistance=_angularResistance;
@property(nonatomic) double resistance; // @synthesize resistance=_resistance;
@property(nonatomic) double density; // @synthesize density=_density;
@property(nonatomic) double friction; // @synthesize friction=_friction;
@property(nonatomic) double elasticity; // @synthesize elasticity=_elasticity;
- (void).cxx_destruct;
- (id)description;
- (void)setUseDefaultViewPropertiesApplier:(_Bool)arg1;
- (_Bool)useDefaultViewPropertiesApplier;
- (void)_dissociate;
- (void)_associate;
- (void)_reevaluate:(unsigned long long)arg1;
- (void)applyImpulse:(struct CGPoint)arg1 toItem:(id)arg2;
- (_Bool)_rotationEnabledForItem:(id)arg1;
- (double)_massForItem:(id)arg1;
- (double)_angularResistanceForItem:(id)arg1;
- (double)_resistanceForItem:(id)arg1;
- (double)_densityForItem:(id)arg1;
- (double)_frictionForItem:(id)arg1;
- (double)_elasticityForItem:(id)arg1;
- (double)angularVelocityForItem:(id)arg1;
- (void)addAngularVelocity:(double)arg1 forItem:(id)arg2;
- (double)_angleForItem:(id)arg1;
- (void)_setAngle:(double)arg1 forItem:(id)arg2;
- (struct CGPoint)_positionForItem:(id)arg1;
- (void)_setPosition:(struct CGPoint)arg1 forItem:(id)arg2;
- (struct CGPoint)linearVelocityForItem:(id)arg1;
- (void)addLinearVelocity:(struct CGPoint)arg1 forItem:(id)arg2;
@property(readonly, copy, nonatomic) NSArray *items;
- (void)removeItem:(id)arg1;
- (void)addItem:(id)arg1;
- (void)_configureBody:(id)arg1 forView:(id)arg2;
- (id)initWithItems:(id)arg1;
- (id)init;

@end
