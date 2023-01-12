//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <WorkflowUI/NSObject-Protocol.h>

@class NSArray, NSDictionary, NSOrderedSet, NSString, NSUUID, WFCoercionOptions, WFContentAttributionSet, WFContentItem, WFContentPropertyBuilder, WFFileRepresentation, WFFileType, WFObjectRepresentation, WFObjectType, WFRepresentation, WFType;

@protocol WFContentItemClass <NSObject>
+ (NSString *)countDescription;
+ (NSString *)localizedPluralFilterDescription;
+ (NSString *)pluralFilterDescription;
+ (NSString *)localizedFilterDescription;
+ (NSString *)filterDescription;
+ (NSString *)localizedPluralTypeDescription;
+ (NSString *)pluralTypeDescription;
+ (NSString *)localizedTypeDescription;
+ (NSString *)typeDescription;
+ (NSArray *)contentCategories;
+ (NSOrderedSet *)outputTypes;
+ (NSOrderedSet *)ownedTypes;
- (WFContentAttributionSet *)defaultSourceForRepresentation:(WFRepresentation *)arg1;

@optional
+ (NSString *)localizedCountDescriptionWithValue:(long long)arg1;
+ (NSArray *)filterRepresentationsForAllowedContent:(NSArray *)arg1;
+ (WFContentPropertyBuilder *)namePropertyBuilder;
+ (NSArray *)propertyBuilders;
+ (_Bool)supportedTypeMustBeDeterminedByInstance:(WFType *)arg1;
+ (id)itemWithSerializedItem:(NSDictionary *)arg1 forType:(WFFileType *)arg2 named:(NSString *)arg3 attributionSet:(WFContentAttributionSet *)arg4 cachingIdentifier:(NSUUID *)arg5;
+ (NSOrderedSet *)ownedPasteboardTypes;
- (Class)classForCopying;
- (void)copyStateToItem:(WFContentItem *)arg1;
- (_Bool)cachesSupportedTypes;
- (_Bool)canGenerateRepresentationForType:(WFType *)arg1;
- (WFObjectType *)preferredObjectType;
- (WFFileType *)preferredFileType;
- (_Bool)hasStringOutput;
- (_Bool)includesFileRepresentationInSerializedItem;
- (void)getFileRepresentationsForSerialization:(void (^)(NSArray *, NSError *))arg1;
- (NSDictionary *)additionalRepresentationsForSerialization;
- (NSDictionary *)metadataForSerialization;
- (void)getPreferredFileSize:(void (^)(long long))arg1;
- (void)getPreferredFileExtension:(void (^)(NSString *))arg1;
- (void)generateFileRepresentations:(void (^)(NSArray *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forType:(WFFileType *)arg3;
- (void)generateFileRepresentation:(void (^)(WFFileRepresentation *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forType:(WFFileType *)arg3;
- (void)generateObjectRepresentations:(void (^)(NSArray *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forClass:(Class)arg3;
- (void)generateObjectRepresentation:(void (^)(id, NSString *, NSError *))arg1 options:(WFCoercionOptions *)arg2 forClass:(Class)arg3;
- (WFObjectRepresentation *)generateObjectRepresentationForClass:(Class)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
- (WFFileRepresentation *)generateFileRepresentationForType:(WFFileType *)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
- (NSArray *)generateObjectRepresentationsForClass:(Class)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
- (NSArray *)generateFileRepresentationsForType:(WFFileType *)arg1 options:(WFCoercionOptions *)arg2 error:(id *)arg3;
@end

