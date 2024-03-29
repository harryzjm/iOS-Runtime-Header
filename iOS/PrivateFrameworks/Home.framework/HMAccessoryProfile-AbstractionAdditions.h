//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <HomeKit/HMAccessoryProfile.h>

@class HFAccessoryLikeObject, HFAccessoryType, HFServiceNameComponents, HMRoom, NSSet, NSString, NSUUID;
@protocol HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol, HFHomeKitObject, HFIconDescriptor;

@interface HMAccessoryProfile (AbstractionAdditions)
+ (id)_profilesWithNonStandardTileUI;
- (id)hf_setTileSize:(id)arg1;
@property(readonly, nonatomic) NSString *hf_tileSize;
- (id)hf_updateShowInHomeDashboard:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_effectiveShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_hasSetShowInHomeDashboard;
@property(readonly, nonatomic) _Bool hf_showInHomeDashboard;
- (id)hf_updateIsVisibleInHomeStatus:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_isForcedVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_hasSetVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_isVisibleInHomeStatus;
@property(readonly, nonatomic) _Bool hf_supportsHomeStatus;
- (id)hf_updateIsFavorite:(_Bool)arg1;
@property(readonly, nonatomic) _Bool hf_effectiveIsFavorite;
@property(readonly, nonatomic) _Bool hf_shouldShowInFavorites;
@property(readonly, nonatomic) _Bool hf_hasSetFavorite;
@property(readonly, nonatomic) _Bool hf_isFavorite;
- (id)hf_moveToRoom:(id)arg1;
@property(readonly, nonatomic) _Bool hf_isIdentifiable;
@property(readonly, nonatomic) _Bool hf_canSpanMultipleRooms;
@property(readonly, nonatomic) HMRoom *hf_safeRoom;
- (_Bool)hf_isInRoom:(id)arg1;
@property(readonly, nonatomic) HFAccessoryType *hf_accessoryType;
@property(readonly, nonatomic) Class hf_itemClass;
@property(readonly, nonatomic) HFAccessoryLikeObject *hf_accessoryLikeObject;
@property(readonly, nonatomic) NSSet *hf_containedProfiles;
@property(readonly, nonatomic) NSSet *hf_containedCharacteristics;
@property(readonly, nonatomic) NSSet *hf_containedServices;
@property(readonly, nonatomic) NSSet *hf_associatedAccessories;
@property(readonly, nonatomic) HFServiceNameComponents *hf_serviceNameComponents;
@property(readonly, nonatomic) id <HFHomeKitObject> hf_homeKitObject;
@property(readonly, nonatomic) _Bool hf_offersAutomation;
@property(readonly, nonatomic) _Bool hf_hasNonStandardTileUI;
@property(readonly, nonatomic) id <HFIconDescriptor> hf_iconDescriptor;
- (id)hf_stateDumpBuilderWithContext:(id)arg1;
- (id)hf_updateValue:(_Bool)arg1 forContextType:(unsigned long long)arg2;
- (_Bool)hf_shouldHideForContextType:(unsigned long long)arg1;
- (_Bool)hf_shouldBeOnForContextType:(unsigned long long)arg1;
- (_Bool)hf_hasSetForContextType:(unsigned long long)arg1;
- (_Bool)hf_isOnForContextType:(unsigned long long)arg1;
- (_Bool)hf_isValidObject;
@property(readonly, nonatomic) __weak HMRoom *hf_parentRoom;
@property(readonly, nonatomic) id <HFAccessoryLikeObjectRootHomeKitObjectProvider><HFAccessoryRepresentable><HFFavoritable><HFShowInHomeDashboard><HFIncludedContextProtocol> hf_rootAccessoryLikeHomeKitObject;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;
@property(readonly, copy, nonatomic) NSUUID *uniqueIdentifier;
@end

