//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNMutableContact, NSString;

__attribute__((visibility("hidden")))
@interface CNContactVCardParsedResultBuilder : NSObject
{
    CNMutableContact *_contact;
    _Bool _empty;
}

+ (id)labeledValuesWithValues:(id)arg1 transform:(CDUnknownBlockType)arg2 labels:(id)arg3 isPrimaries:(id)arg4;
+ (id)os_log;
+ (CDUnknownBlockType)contactValueTransformForVCardKey:(id)arg1;
+ (id)contactKeyForVCardKey:(id)arg1;
- (void).cxx_destruct;
- (long long)personFlags;
- (_Bool)setPersonFlags:(long long)arg1;
- (unsigned long long)personFlagsByAddingSharedPhotoDisplayPreference:(long long)arg1 toFlags:(unsigned long long)arg2;
- (long long)sharedPhotoDisplayPreferenceFromPersonFlags:(long long)arg1;
- (unsigned long long)personFlagsByAddingContactType:(long long)arg1 toFlags:(unsigned long long)arg2;
- (long long)contactTypeFromPersonFlags:(long long)arg1;
- (id)validCountryCodes;
- (void)setUnknownProperties:(id)arg1;
- (_Bool)setImageData:(id)arg1 forReference:(id)arg2 clipRects:(id)arg3;
- (_Bool)setValues:(id)arg1 labels:(id)arg2 isPrimaries:(id)arg3 forProperty:(id)arg4;
- (_Bool)setValue:(id)arg1 forProperty:(id)arg2;
- (_Bool)canSetValueForProperty:(id)arg1;
- (id)valueForProperty:(id)arg1;
- (id)build;
- (id)init;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly, copy) NSString *description;
@property(readonly) unsigned long long hash;
@property(readonly) Class superclass;

@end

