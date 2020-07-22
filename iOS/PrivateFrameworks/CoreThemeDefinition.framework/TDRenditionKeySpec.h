//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <CoreData/NSManagedObject.h>

#import <CoreThemeDefinition/TDElementAttributes-Protocol.h>

@class TDThemeDeploymentTarget, TDThemeDirection, TDThemeDisplayGamut, TDThemeDrawingLayer, TDThemeElement, TDThemeGraphicsFeatureSetClass, TDThemeIdiom, TDThemePart, TDThemePresentationState, TDThemeSize, TDThemeState, TDThemeUISizeClass, TDThemeValue;

@interface TDRenditionKeySpec : NSManagedObject <TDElementAttributes>
{
    unsigned int _dimension1;
    unsigned int _dimension2;
    unsigned int _scaleFactor;
    unsigned int _subtype;
    unsigned int _nameIdentifier;
    unsigned int _memoryClass;
    struct _renditionkeytoken _stackScratchKey[17];
    struct _renditionkeytoken *_scratchKey;
}

+ (id)keyPathsForValuesAffectingValueForKey:(id)arg1;
- (void)setAttributesFromCopyData:(id)arg1;
- (id)copyDataFromAttributes;
- (void)setAttributesFromData:(id)arg1;
- (id)dataFromAttributes;
- (void)copyAttributesInto:(id)arg1;
- (id)keyDescription;
- (const struct _renditionkeytoken *)key;
- (void)getKey:(struct _renditionkeytoken *)arg1;
- (void)setAttributesFromRenditionKey:(const struct _renditionkeytoken *)arg1 withDocument:(id)arg2;
- (long long)attributeCount;
- (const struct _renditionkeyfmt *)keyFormat;
- (id)debugDescription;
- (void)setScaleFactorString:(id)arg1;
- (id)scaleFactorString;
- (unsigned int)memoryClass;
- (void)setMemoryClass:(unsigned int)arg1;
- (unsigned int)nameIdentifier;
- (void)setNameIdentifier:(unsigned int)arg1;
- (unsigned int)subtype;
- (void)setSubtype:(unsigned int)arg1;
- (unsigned int)scaleFactor;
- (void)setScaleFactor:(unsigned int)arg1;
- (unsigned int)dimension2;
- (void)setDimension2:(unsigned int)arg1;
- (unsigned int)dimension1;
- (void)setDimension1:(unsigned int)arg1;
- (id)copyWithZone:(struct _NSZone *)arg1;
- (void)dealloc;

// Remaining properties
@property(retain, nonatomic) TDThemeDirection *direction; // @dynamic direction;
@property(retain, nonatomic) TDThemeElement *element; // @dynamic element;
@property(retain, nonatomic) TDThemeDisplayGamut *gamut; // @dynamic gamut;
@property(retain, nonatomic) TDThemeGraphicsFeatureSetClass *graphicsFeatureSetClass; // @dynamic graphicsFeatureSetClass;
@property(retain, nonatomic) TDThemeIdiom *idiom; // @dynamic idiom;
@property(retain, nonatomic) TDThemeDrawingLayer *layer; // @dynamic layer;
@property(retain, nonatomic) TDThemePart *part; // @dynamic part;
@property(retain, nonatomic) TDThemePresentationState *presentationState; // @dynamic presentationState;
@property(retain, nonatomic) TDThemeState *previousState; // @dynamic previousState;
@property(retain, nonatomic) TDThemeValue *previousValue; // @dynamic previousValue;
@property(retain, nonatomic) TDThemeSize *size; // @dynamic size;
@property(retain, nonatomic) TDThemeUISizeClass *sizeClassHorizontal; // @dynamic sizeClassHorizontal;
@property(retain, nonatomic) TDThemeUISizeClass *sizeClassVertical; // @dynamic sizeClassVertical;
@property(retain, nonatomic) TDThemeState *state; // @dynamic state;
@property(retain, nonatomic) TDThemeDeploymentTarget *target; // @dynamic target;
@property(retain, nonatomic) TDThemeValue *value; // @dynamic value;

@end

