//
//     Generated by classdump-c 4.2.0 (64 bit).
//
//  Copyright (C) 1997-2019 Steve Nygard. Updated in 2022 by Kevin Bradley.
//

#import <objc/NSObject.h>

@class NSMutableDictionary, NSString;

@interface MecabraCoreDataProperties : NSObject
{
    NSMutableDictionary *_descriptionDictionary;
    NSString *_type;
}

+ (id)ubiquityContainerURL;
+ (id)defaultDescriptionPath;
+ (void)setDefaultDescriptionPath:(id)arg1;
+ (id)sharedInstanceForType:(id)arg1;
@property(readonly, retain, nonatomic) NSString *type; // @synthesize type=_type;
@property(retain, nonatomic) NSMutableDictionary *descriptionDictionary; // @synthesize descriptionDictionary=_descriptionDictionary;
@property(readonly, nonatomic) NSString *ubiquityContainerIdentifier;
- (id)valueForKey:(id)arg1;
- (void)forceNoSync;
- (_Bool)databaseSyncs;
- (id)ubiquitousTransactionURLForIdentifier:(id)arg1;
- (id)ubiquitousStoreDirectoryURLForIdentifier:(id)arg1;
- (id)ubiquitousURLWithSuffix:(id)arg1;
- (id)sortDescriptors;
- (id)uniqueKeys;
- (id)requiredKeys;
- (id)entityModelName;
- (id)entityDescriptionURL;
- (void)dealloc;
- (id)initWithIdentifier:(id)arg1;

@end

