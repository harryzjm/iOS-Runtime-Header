//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class CNContact, CNContactProperty, CNContactStore, NSString;

@interface CNFavoritesEntry : NSObject
{
    NSString *_name;
    _Bool _dirty;
    int _abUid;
    int _abIdentifier;
    int _oldAbUid;
    NSString *_actionType;
    NSString *_bundleIdentifier;
    long long _type;
    CNContactStore *_contactStore;
    NSString *_label;
    NSString *_value;
    NSString *_propertyKey;
    NSString *_abDatabaseUUID;
    NSString *_originalName;
    CNContact *_contact;
    NSString *_labeledValueIdentifier;
    NSString *_actionChannel;
}

+ (_Bool)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2 isEqualToValue:(id)arg3;
+ (id)createLabeledValueForFavoritesEntryValue:(id)arg1 label:(id)arg2 iOSLegacyIdentifier:(int)arg3 propertyKey:(id)arg4;
+ (id)labeledValueValueForFavoritesEntryValue:(id)arg1 propertyKey:(id)arg2;
+ (id)instantMessageAddressForFavoritesEntryValue:(id)arg1;
+ (id)socialProfileForFavoritesEntryValue:(id)arg1;
+ (id)favoritesEntryValueForLabeledValueValue:(id)arg1 propertyKey:(id)arg2;
+ (id)valueStringFromInstantMessageAddress:(id)arg1;
+ (id)valueStringFromSocialProfile:(id)arg1;
+ (id)descriptorsForRequiredKeysForPropertyKey:(id)arg1;
+ (id)contactFormatter;
+ (void)initialize;
@property(nonatomic) _Bool dirty; // @synthesize dirty=_dirty;
@property(nonatomic) int oldAbUid; // @synthesize oldAbUid=_oldAbUid;
@property(retain, nonatomic) NSString *actionChannel; // @synthesize actionChannel=_actionChannel;
@property(nonatomic) int abIdentifier; // @synthesize abIdentifier=_abIdentifier;
@property(nonatomic) int abUid; // @synthesize abUid=_abUid;
@property(retain, nonatomic) NSString *labeledValueIdentifier; // @synthesize labeledValueIdentifier=_labeledValueIdentifier;
@property(retain, nonatomic) CNContact *contact; // @synthesize contact=_contact;
@property(copy, nonatomic) NSString *originalName; // @synthesize originalName=_originalName;
@property(retain, nonatomic) NSString *abDatabaseUUID; // @synthesize abDatabaseUUID=_abDatabaseUUID;
@property(retain, nonatomic) NSString *propertyKey; // @synthesize propertyKey=_propertyKey;
@property(retain, nonatomic) NSString *value; // @synthesize value=_value;
@property(retain, nonatomic) NSString *label; // @synthesize label=_label;
@property(retain, nonatomic) CNContactStore *contactStore; // @synthesize contactStore=_contactStore;
@property(nonatomic) long long type; // @synthesize type=_type;
@property(retain, nonatomic) NSString *bundleIdentifier; // @synthesize bundleIdentifier=_bundleIdentifier;
@property(retain, nonatomic) NSString *actionType; // @synthesize actionType=_actionType;
- (void).cxx_destruct;
- (int)_entryTypeForActionType:(id)arg1 bundleIdentifier:(id)arg2;
- (void)_convertFromEntryType:(long long)arg1 toActionType:(id *)arg2 bundleIdentifier:(id *)arg3;
- (void)applyChangeRecord:(id)arg1;
- (void)resetContactMatch;
- (_Bool)rematchWithGeminiManager:(id)arg1;
- (_Bool)rematchWithContacts;
- (struct CNPair *)rematch;
- (void)dictionaryRepresentation:(id *)arg1 isDirty:(_Bool *)arg2;
- (id)dictionaryRepresentation;
- (id)initWithDictionaryRepresentation:(id)arg1 store:(id)arg2;
- (_Bool)isEqual:(id)arg1;
@property(readonly, nonatomic) CNContactProperty *contactProperty;
@property(readonly, nonatomic) NSString *name;
- (void)dealloc;
- (id)_initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 entryType:(long long)arg4 actionType:(id)arg5 bundleIdentifier:(id)arg6 store:(id)arg7;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 labeledValueIdentifier:(id)arg3 actionType:(id)arg4 bundleIdentifier:(id)arg5 store:(id)arg6;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4 store:(id)arg5;
- (id)initWithContact:(id)arg1 propertyKey:(id)arg2 identifier:(id)arg3 type:(long long)arg4;

@end

