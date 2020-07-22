//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

@class NSString, SXDocumentLayout, SXDocumentStyle, SXJSONArray, SXJSONDictionary, SXMetaData;
@protocol SXAdvertisingSettings;

@interface SXDocument
{
}

+ (Class)classForProtocolProperty:(id)arg1 withValue:(id)arg2;
+ (CDUnknownBlockType)purgeClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)objectValueClassBlockForPropertyWithName:(id)arg1;
+ (CDUnknownBlockType)valueClassBlockForPropertyWithName:(id)arg1;

// Remaining properties
@property(readonly, nonatomic) id <SXAdvertisingSettings> advertisingSettings; // @dynamic advertisingSettings;
@property(readonly, nonatomic) SXJSONArray *allComponents; // @dynamic allComponents;
@property(readonly, nonatomic) SXJSONDictionary *componentLayouts; // @dynamic componentLayouts;
@property(readonly, nonatomic) SXJSONDictionary *componentStyles; // @dynamic componentStyles;
@property(readonly, nonatomic) SXJSONDictionary *componentTextStyles; // @dynamic componentTextStyles;
@property(readonly, nonatomic) SXJSONArray *components; // @dynamic components;
@property(readonly, nonatomic) SXDocumentStyle *documentStyle; // @dynamic documentStyle;
@property(readonly, nonatomic) NSString *identifier; // @dynamic identifier;
@property(readonly, nonatomic) NSString *language; // @dynamic language;
@property(readonly, nonatomic) SXDocumentLayout *layout; // @dynamic layout;
@property(readonly, nonatomic) SXMetaData *metadata; // @dynamic metadata;
@property(readonly, nonatomic) SXJSONDictionary *resources; // @dynamic resources;
@property(readonly, nonatomic) NSString *specVersion; // @dynamic specVersion;
@property(readonly, nonatomic) SXJSONDictionary *tableStyles; // @dynamic tableStyles;
@property(readonly, nonatomic) SXJSONDictionary *textStyles; // @dynamic textStyles;
@property(readonly, nonatomic) NSString *title; // @dynamic title;

@end

