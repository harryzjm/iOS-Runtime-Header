//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSString;

@interface IBICSlotComponent : NSObject
{
    unsigned long long _cachedHash;
    _Bool _deprecated;
    NSString *_title;
    NSString *_identifier;
    NSString *_fileNameComponent;
    double _displayOrder;
    NSString *_subtitle;
    NSString *_infoDescription;
}

+ (id)effectiveValueInSlot:(id)arg1;
+ (id)valueFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2 returningDefaultValue:(_Bool)arg3;
+ (id)identifierFromFileName:(id)arg1 inRange:(struct _NSRange *)arg2;
+ (id)fallbackContentsJSONKeys;
+ (id)createDynamicComponentWithIdentifier:(id)arg1;
+ (_Bool)createsComponentsDynamically;
+ (id)displayName;
+ (id)descriptionKey;
+ (id)contentsJSONKey;
+ (void)setComponentID:(long long)arg1;
+ (long long)componentID;
+ (id)unspecifiedValuePlaceholder;
+ (id)groupedAttributeValueForManifestArchiving;
+ (id)groupingKeyForManifestArchiving;
+ (long long)encodingType;
+ (id)componentFilterMatchingAllValuesIncludingUnspecifiedValuePlaceholder:(_Bool)arg1;
+ (id)componentFilterMatchingIdentifiers:(id)arg1;
+ (id)componentFilterMatching:(id)arg1;
+ (id)unspecifiedValueFilter;
+ (id)allComponentsFilterForSlotClass:(Class)arg1;
- (void).cxx_destruct;
@property(readonly) NSString *infoDescription; // @synthesize infoDescription=_infoDescription;
@property(readonly) NSString *subtitle; // @synthesize subtitle=_subtitle;
@property(readonly) _Bool deprecated; // @synthesize deprecated=_deprecated;
@property(readonly) double displayOrder; // @synthesize displayOrder=_displayOrder;
@property(readonly) NSString *fileNameComponent; // @synthesize fileNameComponent=_fileNameComponent;
@property(readonly) NSString *identifier; // @synthesize identifier=_identifier;
@property(readonly) NSString *title; // @synthesize title=_title;
- (void)encodeWithBinaryArchiver:(id)arg1;
- (id)initWithBinaryUnarchiver:(id)arg1;
- (void)encodeWithCoder:(id)arg1;
- (id)initWithCoder:(id)arg1;
- (void)ibic_generateAttributes:(CDUnknownBlockType)arg1;
- (long long)compareDisplayOrder:(id)arg1;
@property(readonly, copy) NSString *description;
- (_Bool)isEqual:(id)arg1;
- (_Bool)isEqualToSlotComponent:(id)arg1;
- (_Bool)isEqualToSlotComponentCounterpartWithKnownEqualClass:(id)arg1;
@property(readonly) unsigned long long hash;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4 subtitle:(id)arg5 infoDescription:(id)arg6 deprecated:(_Bool)arg7;
- (id)initWithIdentifier:(id)arg1 fileNameComponent:(id)arg2 title:(id)arg3 displayOrder:(double)arg4;
@property(readonly) long long componentID;
- (_Bool)isSpecifiedExplicitValue;
- (_Bool)isUnspecifiedValuePlaceholder;

// Remaining properties
@property(readonly, copy) NSString *debugDescription;
@property(readonly) Class superclass;

@end

